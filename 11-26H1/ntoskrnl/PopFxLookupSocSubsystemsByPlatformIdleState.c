/*
 * XREFs of PopFxLookupSocSubsystemsByPlatformIdleState @ 0x140A427E8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1407D0DEC (PopFxResetSocSubsystemAccounting.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140A4235C (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x140A4271C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x140A4383C (PopFxLogSocSubsystemBlockingTimes.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall PopFxLookupSocSubsystemsByPlatformIdleState(int a1)
{
  unsigned __int8 *v1; // rdx
  unsigned __int8 *result; // rax

  v1 = *(unsigned __int8 **)PopFxBlockingDeviceListLock.PriorityFloorCounts;
  result = 0LL;
  while ( v1 != PopFxBlockingDeviceListLock.PriorityFloorCounts )
  {
    result = v1;
    if ( !v1 || *((_DWORD *)v1 + 4) == a1 )
      break;
    v1 = *(unsigned __int8 **)v1;
  }
  return result;
}
