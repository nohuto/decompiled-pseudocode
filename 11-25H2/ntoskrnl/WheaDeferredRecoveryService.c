/*
 * XREFs of WheaDeferredRecoveryService @ 0x140651C20
 * Callers:
 *     HalpInterruptDeferredRecoveryService @ 0x1405578B0 (HalpInterruptDeferredRecoveryService.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 */

char WheaDeferredRecoveryService()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&WheaPendingDrsInterrupt, 0);
  if ( v0 == 1 )
    LOBYTE(v0) = KeInsertQueueDpc(&WheaDrsDpc, 0LL, 0LL);
  return v0;
}
