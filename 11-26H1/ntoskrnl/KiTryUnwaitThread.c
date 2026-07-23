/*
 * XREFs of KiTryUnwaitThread @ 0x140272B24
 * Callers:
 *     KeTerminateThread @ 0x140203468 (KeTerminateThread.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270060 (ExpReleaseFastResourceExclusiveSlow.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     KeWakeWaitChain @ 0x140272C70 (KeWakeWaitChain.c)
 *     ExpCommitWakeFastResource @ 0x140273060 (ExpCommitWakeFastResource.c)
 *     ExpCommitWakeResourceShared @ 0x140273420 (ExpCommitWakeResourceShared.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027B770 (FsRtlReleaseHeaderMutex.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KiResumeThread @ 0x140310D78 (KiResumeThread.c)
 *     KiExpireTimer2 @ 0x140338F88 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x1403B6C5C (KiTimerWaitTest.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 *     KeDeleteMutant @ 0x1403DFA18 (KeDeleteMutant.c)
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 *     KeRundownQueueCommon @ 0x1403E0A74 (KeRundownQueueCommon.c)
 *     KeTimeOutQueueWaiters @ 0x1403E3298 (KeTimeOutQueueWaiters.c)
 *     KeSetEventBoostPriorityEx @ 0x140419658 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseSemaphoreEx @ 0x14042BF80 (KeReleaseSemaphoreEx.c)
 *     KiRundownMutants @ 0x1404AB48C (KiRundownMutants.c)
 *     KePulseEvent @ 0x1404C0CC0 (KePulseEvent.c)
 *     KeSetProcess @ 0x1404CA8CC (KeSetProcess.c)
 * Callees:
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiWaitSatisfyMutant @ 0x14043A4D0 (KiWaitSatisfyMutant.c)
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
