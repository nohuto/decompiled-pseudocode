/*
 * XREFs of PopFxLookupSocSubsystemsByPlatformIdleState @ 0x140987D50
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1407CDD4C (PopFxResetSocSubsystemAccounting.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140987604 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1409879C4 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14098911C (PopFxLogSocSubsystemBlockingTimes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopFxLookupSocSubsystemsByPlatformIdleState(int a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = qword_140F12410;
  result = 0LL;
  while ( (__int64 *)v1 != &qword_140F12410 )
  {
    result = v1;
    if ( !v1 || *(_DWORD *)(v1 + 16) == a1 )
      break;
    v1 = *(_QWORD *)v1;
  }
  return result;
}
