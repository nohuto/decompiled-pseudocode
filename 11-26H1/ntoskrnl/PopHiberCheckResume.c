/*
 * XREFs of PopHiberCheckResume @ 0x140C008A0
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x140735650 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     HalInitializeOnResume @ 0x140512000 (HalInitializeOnResume.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1405BABF0 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlRestoreEnlightenment @ 0x1405BB88C (HvlRestoreEnlightenment.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1405C01F0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyAcpiReenabled @ 0x1405C1B40 (HvlNotifyAcpiReenabled.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopSstInvokeNotificationHandlers @ 0x140BFF490 (PopSstInvokeNotificationHandlers.c)
 *     PopCheckpointSystemSleep @ 0x140C0C680 (PopCheckpointSystemSleep.c)
 *     KdInitSystem @ 0x140C18B60 (KdInitSystem.c)
 */

char PopHiberCheckResume()
{
  ULONG_PTR v0; // rdi
  char v1; // bl
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rbp
  unsigned __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1

  v0 = qword_140F10470;
  v1 = 0;
  v2 = *(_QWORD *)(qword_140F10470 + 216);
  if ( *(_DWORD *)v2 )
  {
    PopCheckpointSystemSleep(25LL);
    PoPowerDownActionInProgress = 0;
    guard_dispatch_icall_no_overrides(0LL, v3);
    v4 = 5LL;
    PopWatchdogTimerCount = 0;
    v5 = __rdtsc();
    PoResumeFromHibernate = 1;
    guard_dispatch_icall_no_overrides(5LL, (unsigned __int64)HIDWORD(v5) << 32);
    guard_dispatch_icall_no_overrides(1LL, v6);
    if ( HvlHypervisorConnected )
    {
      HvlRestoreEnlightenment(1);
      guard_dispatch_icall_no_overrides(v9, v8);
      PopHibernateHvMinloopEnabled = 0;
    }
    guard_dispatch_icall_no_overrides(5LL, v7);
    if ( (PopSimulateHiberBugcheck & 0x1000) != 0
      && ((_BYTE)KdDebuggerEnabled && !KdPitchDebugger || KdEventLoggingEnabled) )
    {
      LOBYTE(KdDebuggerEnabled) = 0;
      KdInitSystem(0LL, 0LL);
    }
    PopSstInvokeNotificationHandlers(2u);
    if ( HvlHypervisorConnected )
    {
      HvlConfigureMemoryZeroingOnReset(1);
      if ( VslVsmEnabled || (HvlpFlags & 2) != 0 )
      {
        HvlNotifyDebugDeviceAvailable();
        HvlNotifyAcpiReenabled();
      }
    }
    if ( (PopSimulateHiberBugcheck & 0x1000) == 0
      && ((_BYTE)KdDebuggerEnabled && !KdPitchDebugger || KdEventLoggingEnabled) )
    {
      LOBYTE(KdDebuggerEnabled) = 0;
      KdInitSystem(0LL, 0LL);
    }
    if ( (_BYTE)KdDebuggerEnabled && *(_DWORD *)v2 == 1347113538 )
      __debugbreak();
    if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x40000000) != 0 )
      __debugbreak();
    HalInitializeOnResume();
    v10 = *(_QWORD *)(v0 + 352);
    v11 = (_QWORD *)(v2 + 1184);
    v12 = 4LL;
    do
    {
      if ( *v11 )
        *(_QWORD *)(v10 + 48) = *v11;
      ++v11;
      --v12;
    }
    while ( v12 );
    v13 = &qword_140F10A58;
    ExpSysDbgLock.MutantListHead.Flink = *(struct _LIST_ENTRY **)(v2 + 1160);
    v14 = (_OWORD *)(v2 + 136);
    PopDirectedDripsDiagLock.InGlobalForegroundList = v5;
    do
    {
      *(_OWORD *)v13 = *v14;
      *((_OWORD *)v13 + 1) = v14[1];
      *((_OWORD *)v13 + 2) = v14[2];
      *((_OWORD *)v13 + 3) = v14[3];
      *((_OWORD *)v13 + 4) = v14[4];
      *((_OWORD *)v13 + 5) = v14[5];
      *((_OWORD *)v13 + 6) = v14[6];
      v13 += 16;
      v15 = v14[7];
      v14 += 8;
      *((_OWORD *)v13 - 1) = v15;
      --v4;
    }
    while ( v4 );
    *(_OWORD *)v13 = *v14;
    *((_OWORD *)v13 + 1) = v14[1];
    *((_OWORD *)v13 + 2) = v14[2];
    *((_OWORD *)v13 + 3) = v14[3];
    *((_OWORD *)v13 + 4) = v14[4];
    *((_OWORD *)v13 + 5) = v14[5];
    v13[12] = *((_QWORD *)v14 + 12);
    *(_BYTE *)(v0 + 3) = 0;
    qword_140F10B30 = v5;
    if ( VslVsmEnabled || (HvlpFlags & 2) != 0 )
      *(_DWORD *)(v0 + 16) = 0;
    return 1;
  }
  return v1;
}
