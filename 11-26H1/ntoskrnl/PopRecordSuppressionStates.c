/*
 * XREFs of PopRecordSuppressionStates @ 0x14077ECFC
 * Callers:
 *     PopEvaluatePowerButtonSuppressionState @ 0x140B34328 (PopEvaluatePowerButtonSuppressionState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordSuppressionStates(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // bl
  __int64 result; // rax

  v4 = a2;
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, a2, a3, a4);
    BYTE3(stru_140E67200.Spare35[0]) = a1;
    BYTE4(stru_140E67200.Spare35[0]) = v4;
    PopBsdHandleRequest(2u);
    return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
  }
  return result;
}
