/*
 * XREFs of WheaDeferredRecoveryService @ 0x1406D6CC0
 * Callers:
 *     HalpInterruptDeferredRecoveryService @ 0x140594410 (HalpInterruptDeferredRecoveryService.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 */

__int64 WheaDeferredRecoveryService()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange(&WheaPendingDrsInterrupt, 0);
  if ( (_DWORD)result == 1 )
    return KiInsertQueueDpc((ULONG_PTR)&WheaDrsDpc, 0LL, 0LL, 0LL, 0);
  return result;
}
