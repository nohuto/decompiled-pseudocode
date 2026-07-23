/*
 * XREFs of PopPowerAggregatorNotifySuspendResume @ 0x140B48B5C
 * Callers:
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409FABE4 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorDiagTraceSuspendResume @ 0x140B48C08 (PopPowerAggregatorDiagTraceSuspendResume.c)
 */

NTSTATUS __fastcall PopPowerAggregatorNotifySuspendResume(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rcx
  int *v6; // rdx
  __int64 v7; // rcx
  NTSTATUS result; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  LOBYTE(v5) = a1;
  PopPowerAggregatorDiagTraceSuspendResume(v5, (unsigned int)dword_140F0D9E0);
  if ( a1 )
  {
    if ( ++dword_140F0D9E0 != 1 )
      goto LABEL_7;
    v6 = 0LL;
    v7 = 7LL;
  }
  else
  {
    if ( --dword_140F0D9E0 )
      goto LABEL_7;
    v6 = &v9;
    v9 = dword_140F0D9E4;
    v7 = 8LL;
  }
  PopPowerAggregatorHandleIntentUnsafe((_QWORD *)v7, v6, 0, 0x14u);
LABEL_7:
  result = PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
  if ( a1 )
    return KeWaitForSingleObject(&word_140F0D9C8, Executive, 0, 0, 0LL);
  return result;
}
