/*
 * XREFs of CmpDecrementAppHiveUnloadCount @ 0x1404D037C
 * Callers:
 *     CmpCompleteUnloadKey @ 0x1408C009C (CmpCompleteUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD1A90 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x14036A040 (ExpUnblockPushLock.c)
 */

NTSTATUS CmpDecrementAppHiveUnloadCount()
{
  NTSTATUS result; // eax
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  result = --LODWORD(CmpKeyLockTracker.Timer.Dpc);
  if ( !LODWORD(CmpKeyLockTracker.Timer.Dpc) )
  {
    _InterlockedOr(v1, 0);
    result = *(_DWORD *)&CmpKeyLockTracker.Timer.Processor;
    if ( *(_QWORD *)&CmpKeyLockTracker.Timer.Processor )
      return ExpUnblockPushLock((volatile __int64 *)&CmpKeyLockTracker.Timer.Processor, 0LL, 0);
  }
  return result;
}
