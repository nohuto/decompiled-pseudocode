/*
 * XREFs of KiRegisterBugcheckRecoveryCallback @ 0x1404F1624
 * Callers:
 *     KeRegisterBugCheckReasonCallback @ 0x14024F100 (KeRegisterBugCheckReasonCallback.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiRegisterBugcheckRecoveryCallback(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 40) == 1023 )
  {
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&KsepShimDbLock.QueueListEntry);
    if ( (_DWORD)result == 1 )
    {
      result = *(_QWORD *)&KsepShimDbLock.SuspendEvent.Header.Lock;
      if ( !*(_QWORD *)&KsepShimDbLock.SuspendEvent.Header.Lock )
        return KiInsertQueueDpc((ULONG_PTR)&KsepShimDbLock.MutantListHead, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
