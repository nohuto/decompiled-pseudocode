/*
 * XREFs of PopGetModernStandbyTransitionReason @ 0x1404E9888
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 *     PopIdleCsStateChanged @ 0x1407DE134 (PopIdleCsStateChanged.c)
 *     PopDiagTraceSleepStudyStart @ 0x140B2BCA4 (PopDiagTraceSleepStudyStart.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PopGetModernStandbyTransitionReason(char a1)
{
  KIRQL v2; // al
  unsigned int v3; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  v3 = dword_140E0B8E0;
  if ( a1 )
    v3 = dword_140E0B8DC;
  KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v2);
  return v3;
}
