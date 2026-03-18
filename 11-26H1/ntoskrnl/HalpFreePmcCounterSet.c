/*
 * XREFs of HalpFreePmcCounterSet @ 0x140580300
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpMmAllocCtxFree @ 0x140359004 (HalpMmAllocCtxFree.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x140B110C8 (HalpNotifyActorIfPmuAvailable.c)
 */

void *__fastcall HalpFreePmcCounterSet(_QWORD *a1)
{
  void *result; // rax
  unsigned int v3; // ecx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v5; // rcx
  void **v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  struct _GROUP_AFFINITY v9; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  result = &HalpSampleProfilingCounters;
  v9 = 0LL;
  PreviousAffinity = 0LL;
  if ( a1 != (_QWORD *)&HalpSampleProfilingCounters )
  {
    v3 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * *((unsigned int *)a1 + 4));
    *(_QWORD *)&v9.Group = (unsigned __int16)(v3 >> 6);
    v9.Mask = 1LL << v3;
    KeSetSystemGroupAffinityThread(&v9, &PreviousAffinity);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    v5 = (_QWORD *)*a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (void **)a1[1], *v6 != a1) )
      __fastfail(3u);
    *v6 = v5;
    v7 = 0LL;
    for ( v5[1] = v6; (unsigned int)v7 < *((_DWORD *)a1 + 5); v7 = (unsigned int)(v7 + 1) )
    {
      guard_dispatch_icall_no_overrides(LODWORD(a1[5 * v7 + 5]), &a1[5 * v7 + 6]);
      _InterlockedDecrement((_DWORD *)&HalpPmuArbiter.Header.WaitListHead.Flink + 1);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    HalpMmAllocCtxFree(v8, (__int64)a1);
    return (void *)HalpNotifyActorIfPmuAvailable(0LL, 0LL);
  }
  return result;
}
