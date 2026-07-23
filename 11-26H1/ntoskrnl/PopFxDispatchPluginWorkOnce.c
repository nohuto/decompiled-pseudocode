/*
 * XREFs of PopFxDispatchPluginWorkOnce @ 0x1403B80D4
 * Callers:
 *     PopFxProcessWorkPool @ 0x140397FE8 (PopFxProcessWorkPool.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline @ 0x1403B7F0C (Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline.c)
 *     KiEncodeTolerableDelayValue @ 0x1403B7F44 (KiEncodeTolerableDelayValue.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1403B8400 (PopFxDisableWorkOrderWatchdog.c)
 *     PopPepWork @ 0x1403B84E0 (PopPepWork.c)
 *     PopFxProcessWork @ 0x1403B8BD0 (PopFxProcessWork.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PopFxDispatchPluginWorkOnce(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // al
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  bool v12; // zf
  unsigned __int64 v14; // rbx
  __int128 v15; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v18[6]; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v19; // [rsp+88h] [rbp-78h]
  char v20; // [rsp+8Bh] [rbp-75h]
  int v21; // [rsp+8Ch] [rbp-74h]
  int v22[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-60h]
  void (__fastcall __noreturn *v24)(); // [rsp+A8h] [rbp-58h]
  ULONG_PTR *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  _OWORD *v27; // [rsp+D0h] [rbp-30h]
  _DWORD *v28; // [rsp+D8h] [rbp-28h]
  __int64 v29; // [rsp+E0h] [rbp-20h]
  struct _KTHREAD *CurrentThread; // [rsp+E8h] [rbp-18h]
  _OWORD v31[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v32; // [rsp+110h] [rbp+10h]
  ULONG_PTR v33; // [rsp+118h] [rbp+18h]
  ULONG_PTR *v34; // [rsp+120h] [rbp+20h]
  _DWORD v35[16]; // [rsp+130h] [rbp+30h] BYREF
  __int64 retaddr; // [rsp+188h] [rbp+88h]

  v35[1] = 0;
  memset_0(BugCheckParameter2, 0, 0xB0uLL);
  v34 = BugCheckParameter2;
  v17 = 8LL;
  v27 = v31;
  v18[1] = v18;
  v18[0] = v18;
  v24 = PopFxWorkOrderWatchdog;
  v25 = BugCheckParameter2;
  v18[2] = 0LL;
  v21 = 0;
  v19 = 0;
  v20 = 0;
  v22[0] = 275;
  v26 = 0LL;
  v23 = 0LL;
  v32 = 0LL;
  v33 = BugCheckParameter3;
  memset(v31, 0, sizeof(v31));
  CurrentThread = KeGetCurrentThread();
  if ( PopFxWatchdogWorkOrderTimeout )
  {
    v4 = -10000LL * (unsigned int)PopFxWatchdogWorkOrderTimeout;
    v5 = 0;
    if ( (unsigned int)PopFxWatchdogWorkOrderTimeout >= 0xA )
    {
      v6 = 10000LL * (PopFxWatchdogWorkOrderTimeout / 0xAu);
      v7 = (unsigned int)Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline() != 0
         ? 9600000LL
         : 63LL;
      if ( v6 > v7 )
      {
        v8 = v6 - v7;
        if ( v4 < 0 )
        {
          v9 = v4 - v8;
          if ( (__int64)(v4 - v8) > v4 )
            v9 = 0x8000000000000000uLL;
        }
        else
        {
          v9 = v8 + v4;
          if ( (__int64)(v8 + v4) < v4 )
            v9 = 0x7FFFFFFFFFFFFFFFLL;
        }
        LODWORD(v6) = v7;
        v4 = v9;
      }
      v5 = 4 * KiEncodeTolerableDelayValue(v6);
    }
    KiSetTimerEx((__int64)&v17, v4, 0, v5, (__int64)v22);
    v29 = MEMORY[0xFFFFF78000000008];
    v28 = 0LL;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopFxBlockingDeviceListLock.SchedulerApc.SystemArgument1);
    if ( **(struct _KTHREAD ***)&PopFxBlockingDeviceListLock.SuspendEvent.Header.Lock != (struct _KTHREAD *)&PopFxBlockingDeviceListLock.SchedulerApcFill5[80] )
      __fastfail(3u);
    BugCheckParameter2[0] = (ULONG_PTR)&PopFxBlockingDeviceListLock.SchedulerApcFill5[80];
    BugCheckParameter2[1] = *(_QWORD *)&PopFxBlockingDeviceListLock.SuspendEvent.Header.Lock;
    **(_QWORD **)&PopFxBlockingDeviceListLock.SuspendEvent.Header.Lock = BugCheckParameter2;
    *(_QWORD *)&PopFxBlockingDeviceListLock.SuspendEvent.Header.Lock = BugCheckParameter2;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.SchedulerApc.SystemArgument1, 0LL);
    else
      KiReleaseSpinLockInstrumented(
        (volatile signed __int64 *)&PopFxBlockingDeviceListLock.SchedulerApc.SystemArgument1,
        retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    __writecr8(v10);
  }
  v15 = 0LL;
  memset_0(v35, 0, sizeof(v35));
  BYTE8(v15) = 0;
  *(_QWORD *)&v15 = v35;
  if ( !BugCheckParameter3 )
  {
    v12 = (unsigned __int8)PopPepWork(a2, v35) == 0;
    goto LABEL_20;
  }
  if ( *(_QWORD *)(BugCheckParameter3 + 96) && (unsigned __int8)guard_dispatch_icall_no_overrides(13LL, &v15, v11) )
  {
    v12 = BYTE8(v15) == 0;
LABEL_20:
    if ( v12 )
      return PopFxDisableWorkOrderWatchdog((ULONG_PTR)BugCheckParameter2);
    goto LABEL_24;
  }
  if ( !*(_QWORD *)(BugCheckParameter3 + 112) || !(unsigned __int8)guard_dispatch_icall_no_overrides(10LL, &v15, v11) )
    PopFxBugCheck(0x605uLL, 0xDuLL, BugCheckParameter3, 0LL);
  if ( BYTE8(v15) )
  {
    if ( (unsigned int)(v35[0] - 7) > 1 )
      PopFxBugCheck(0x612uLL, BugCheckParameter3, 0LL, 0LL);
LABEL_24:
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopFxBlockingDeviceListLock.SchedulerApc.SystemArgument1);
    v28 = v35;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.SchedulerApc.SystemArgument1, 0LL);
    else
      KiReleaseSpinLockInstrumented(
        (volatile signed __int64 *)&PopFxBlockingDeviceListLock.SchedulerApc.SystemArgument1,
        retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    __writecr8(v14);
    PopFxProcessWork(BugCheckParameter3, v35);
  }
  return PopFxDisableWorkOrderWatchdog((ULONG_PTR)BugCheckParameter2);
}
