/*
 * XREFs of KdEnterDebugger @ 0x140C1D858
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1404E9CA0 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x14050255C (KdpReport.c)
 *     KiTpWriteMemory @ 0x1405FF1C4 (KiTpWriteMemory.c)
 *     KdpCloseRemoteFile @ 0x140C19480 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x140C196D0 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x140C19AD0 (KdpReadRemoteFile.c)
 *     KdSendTraceData @ 0x140C19D0C (KdSendTraceData.c)
 *     KdpCommandString @ 0x140C1BC54 (KdpCommandString.c)
 *     KdpPrint @ 0x140C1BD30 (KdpPrint.c)
 *     KdpPrompt @ 0x140C1BEBC (KdpPrompt.c)
 *     KdpSymbol @ 0x140C1C018 (KdpSymbol.c)
 *     KdpSetOwedBreakpoints @ 0x140C1D5F0 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdReadEntryCount @ 0x1404B4C40 (KdReadEntryCount.c)
 *     VfIsVerifierEnabled @ 0x1404F5560 (VfIsVerifierEnabled.c)
 *     KeFreezeExecution @ 0x140502A50 (KeFreezeExecution.c)
 *     KeSaveSupervisorState @ 0x1405EF444 (KeSaveSupervisorState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     VfNotifyVerifierOfEvent @ 0x140C27350 (VfNotifyVerifierOfEvent.c)
 */

bool __fastcall KdEnterDebugger(__int64 a1)
{
  int v2; // ebx
  unsigned __int8 CurrentIrql; // bp
  bool v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 Number; // rsi
  __int64 ExtendedSupervisorState; // rcx
  unsigned int *v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  int EntryCount; // eax

  v2 = 0;
  if ( (unsigned int)VfIsVerifierEnabled() )
    VfNotifyVerifierOfEvent(3LL);
  if ( a1 )
  {
    KdTimerStop = __rdtsc();
    KdTimerDifference = KdTimerStop - KdTimerStart;
  }
  else
  {
    KdTimerStop = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  v4 = KeFreezeExecution();
  guard_dispatch_icall_no_overrides(v6, v5);
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  if ( ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) == 0 && !PoAllProcIntrDisabled )
  {
    ExtendedSupervisorState = (__int64)CurrentPrcb->ExtendedSupervisorState;
    qword_140E5EE80 = ~KdIgnoredSavingSupervisorXStateFeatures & (KeEnabledSupervisorXStateFeatures | 0x100);
    KeSaveSupervisorState(
      ExtendedSupervisorState,
      ~KdIgnoredSavingSupervisorXStateFeatures & (KeEnabledSupervisorXStateFeatures | 0x100));
  }
  if ( ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) == 0
    || LODWORD(KiDpcWatchdogConfigurationLock.InitialStack) >> 4 != (_DWORD)Number )
  {
    CurrentPrcb->DebuggerSavedIRQL = CurrentIrql;
  }
  v10 = (unsigned int *)KdLogBuffer[Number];
  if ( v10 )
  {
    v11 = 2 * (*v10 + 1LL);
    v12 = __rdtsc();
    *(_QWORD *)&v10[2 * v11] = ((unsigned __int64)HIDWORD(v12) << 32) | (unsigned int)v12;
    *(_QWORD *)&v10[2 * v11 + 2] = (4 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u;
  }
  KdEnteredDebugger = 1;
  EntryCount = KdReadEntryCount();
  LOBYTE(v2) = KdPortLocked == 0;
  KdDebuggerEnteredWithoutLock += v2;
  KdDebuggerEnteredCount = EntryCount + 1;
  return v4;
}
