/*
 * XREFs of PopGetModernStandbyTransitionReason @ 0x1404F02A8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 *     PopIdleCsStateChanged @ 0x1407DA1D0 (PopIdleCsStateChanged.c)
 *     PopDiagTraceSleepStudyStart @ 0x140B29C24 (PopDiagTraceSleepStudyStart.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PopGetModernStandbyTransitionReason(char a1)
{
  KIRQL v2; // al
  unsigned int v3; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  v3 = dword_140E0B8D0;
  if ( a1 )
    v3 = dword_140E0B8CC;
  KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v2);
  return v3;
}
