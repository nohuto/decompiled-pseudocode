/*
 * XREFs of KiRegisterBugcheckRecoveryCallback @ 0x1404F8014
 * Callers:
 *     KeRegisterBugCheckReasonCallback @ 0x14024D7A0 (KeRegisterBugCheckReasonCallback.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiRegisterBugcheckRecoveryCallback(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 40) == 1023 )
  {
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&KsepShimDbLock.SchedulerApcFill5[48]);
    if ( (_DWORD)result == 1 )
    {
      result = (__int64)KsepShimDbLock.WaitBlock[2].Object;
      if ( !KsepShimDbLock.WaitBlock[2].Object )
        return KiInsertQueueDpc((ULONG_PTR)KsepShimDbLock.PriorityFloorCounts, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
