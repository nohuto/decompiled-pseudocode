/*
 * XREFs of CmpDecrementAppHiveUnloadCount @ 0x1404D6BAC
 * Callers:
 *     CmpCompleteUnloadKey @ 0x1408B9ACC (CmpCompleteUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD4630 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1403682A0 (ExpUnblockPushLock.c)
 */

NTSTATUS CmpDecrementAppHiveUnloadCount()
{
  NTSTATUS result; // eax
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  result = --*(_DWORD *)&CmpKeyLockTracker.Timer.Processor;
  if ( !*(_DWORD *)&CmpKeyLockTracker.Timer.Processor )
  {
    _InterlockedOr(v1, 0);
    result = (NTSTATUS)CmpKeyLockTracker.WaitBlock[0].WaitListEntry.Flink;
    if ( CmpKeyLockTracker.WaitBlock[0].WaitListEntry.Flink )
      return ExpUnblockPushLock((volatile __int64 *)&CmpKeyLockTracker.320, 0LL, 0);
  }
  return result;
}
