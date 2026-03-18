/*
 * XREFs of HalRequestDeferredRecoveryServiceInterrupt @ 0x14057EF10
 * Callers:
 *     WheaRequestDeferredRecovery @ 0x1406D6D20 (WheaRequestDeferredRecovery.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140230DF0 (HalpInterruptSendIpi.c)
 */

__int64 HalRequestDeferredRecoveryServiceInterrupt()
{
  unsigned int v1[10]; // [rsp+20h] [rbp-28h] BYREF

  v1[0] = 5;
  *(_OWORD *)&v1[1] = 0LL;
  return HalpInterruptSendIpi(v1, 0xE3u);
}
