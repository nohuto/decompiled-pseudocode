/*
 * XREFs of KeGenericProcessorCallback @ 0x140379F74
 * Callers:
 *     KeDisableTimer2 @ 0x1403AA104 (KeDisableTimer2.c)
 *     KeRemoveQueueDpcEx @ 0x140423370 (KeRemoveQueueDpcEx.c)
 *     KeSwapDirectoryTableBase @ 0x140483D2C (KeSwapDirectoryTableBase.c)
 *     KeGenericCallDpc @ 0x1404D1460 (KeGenericCallDpc.c)
 *     KeFlushQueuedDpcs @ 0x14051BE50 (KeFlushQueuedDpcs.c)
 *     KeUpdateDpcWatchdogConfiguration @ 0x1405E8E50 (KeUpdateDpcWatchdogConfiguration.c)
 *     KeSetIntervalProfile @ 0x1407BAEC8 (KeSetIntervalProfile.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1407F2F70 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     RtlUpdateSwapReference @ 0x140ABFBBC (RtlUpdateSwapReference.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140204540 (KeSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x1402742E0 (KiRemoveBoostThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeSetPriorityBoost @ 0x14037B5A0 (KeSetPriorityBoost.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     KiCheckForThreadDispatch @ 0x14037CA70 (KiCheckForThreadDispatch.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall KeGenericProcessorCallback(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int16 v6; // di
  struct _KTHREAD *CurrentThread; // r14
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
  KPRIORITY v10; // r13d
  unsigned __int64 v11; // r12
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int8 CurrentIrql; // di
  struct _KTHREAD *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  PKTHREAD Thread; // [rsp+48h] [rbp-B8h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v27[33]; // [rsp+68h] [rbp-98h] BYREF

  Affinity = 0LL;
  memset_0(&v26, 0, 0x108uLL);
  v6 = 0;
  PreviousAffinity = 0LL;
  if ( !a1 )
  {
    v26 = 2097153LL;
    a1 = &v26;
    memset_0(v27, 0, 0x100uLL);
    if ( (_WORD)v26 )
    {
LABEL_3:
      v27[0] |= 1uLL;
      goto LABEL_4;
    }
    if ( WORD1(v26) )
    {
      LOWORD(v26) = 1;
      goto LABEL_3;
    }
  }
LABEL_4:
  CurrentThread = KeGetCurrentThread();
  p_PreviousAffinity = &PreviousAffinity;
  Thread = CurrentThread;
  *(_DWORD *)Affinity.Reserved = 0;
  CurrentPrcb = 0LL;
  Affinity.Reserved[2] = 0;
  v10 = 0;
  if ( a4 )
  {
    if ( (a4 & 2) != 0 )
      v10 = KeSetPriorityThread(CurrentThread, 30);
    else
      KeSetPriorityBoost(CurrentThread, 15LL);
    p_PreviousAffinity = &PreviousAffinity;
  }
  v11 = a1[1];
LABEL_9:
  if ( a1 )
    v12 = *(unsigned __int16 *)a1;
  else
    v12 = (unsigned int)v6 + 1;
  while ( 1 )
  {
    if ( v11 )
    {
      _BitScanForward64(&v13, v11);
      Affinity.Group = v6;
      v11 &= ~(1LL << v13);
      Affinity.Mask = 1LL << v13;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      CurrentPrcb = KeGetCurrentPrcb();
      guard_dispatch_icall_no_overrides(CurrentPrcb, a3, v14);
      p_PreviousAffinity = 0LL;
      goto LABEL_9;
    }
    if ( ++v6 >= (unsigned int)v12 )
      break;
    v11 = a1[v6 + 1];
  }
  CurrentIrql = KeGetCurrentIrql();
  v16 = Thread;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(p_PreviousAffinity) = 2;
    LOBYTE(v12) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v12, p_PreviousAffinity);
  }
  CurrentPrcb->DpcRoutineActive = 1;
  if ( a4 )
  {
    if ( (a4 & 2) != 0 )
      KeSetPriorityThread(v16, v10);
    else
      KiRemoveBoostThread(CurrentPrcb, (__int64)v16, 1LL);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  LOBYTE(v17) = CurrentIrql;
  CurrentPrcb->DpcRoutineActive = 0;
  return KiCheckForThreadDispatch(CurrentPrcb, v17, v18, v19);
}
