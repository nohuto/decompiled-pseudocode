/*
 * XREFs of KiTryUnwaitThread @ 0x1402735B4
 * Callers:
 *     KeTerminateThread @ 0x140203388 (KeTerminateThread.c)
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270AF0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     MiReleaseControlAreaWaiters @ 0x1402733E0 (MiReleaseControlAreaWaiters.c)
 *     KeWakeWaitChain @ 0x140273700 (KeWakeWaitChain.c)
 *     ExpCommitWakeFastResource @ 0x140273AF0 (ExpCommitWakeFastResource.c)
 *     ExpCommitWakeResourceShared @ 0x140273EB0 (ExpCommitWakeResourceShared.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027C200 (FsRtlReleaseHeaderMutex.c)
 *     KiResumeThread @ 0x1402C60D8 (KiResumeThread.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KiExpireTimer2 @ 0x140336F08 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x1403ACF4C (KiTimerWaitTest.c)
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 *     KeSignalGate @ 0x1403C2AD0 (KeSignalGate.c)
 *     KeDeleteMutant @ 0x1403DC828 (KeDeleteMutant.c)
 *     KeReleaseMutantEx @ 0x1403DD130 (KeReleaseMutantEx.c)
 *     KeRundownQueueCommon @ 0x1403DD884 (KeRundownQueueCommon.c)
 *     KeTimeOutQueueWaiters @ 0x1403E00A8 (KeTimeOutQueueWaiters.c)
 *     KeSetEventBoostPriorityEx @ 0x140421E18 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseSemaphoreEx @ 0x1404396D0 (KeReleaseSemaphoreEx.c)
 *     KiRundownMutants @ 0x1404B1F80 (KiRundownMutants.c)
 *     KePulseEvent @ 0x1404C7410 (KePulseEvent.c)
 *     KeSetProcess @ 0x1404D0E9C (KeSetProcess.c)
 * Callees:
 *     KiSignalThread @ 0x14027C940 (KiSignalThread.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiWaitSatisfyMutant @ 0x1404419C0 (KiWaitSatisfyMutant.c)
 */

char __fastcall KiTryUnwaitThread(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  char v5; // bp
  unsigned int v6; // edi
  _BYTE *v12; // rcx

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( *(_BYTE *)(v4 + 388) == 5 )
  {
    v5 = KiSignalThread(a1, v4, a3, a2);
    if ( v5 )
    {
      if ( a4 )
      {
        *a4 = v4;
        v12 = *(_BYTE **)(a2 + 32);
        if ( (*v12 & 0x7F) == 2 )
          KiWaitSatisfyMutant(v12, v4, a1);
      }
    }
  }
  *(_QWORD *)(v4 + 64) = 0LL;
  ++*(_BYTE *)(a2 + 17);
  return v5;
}
