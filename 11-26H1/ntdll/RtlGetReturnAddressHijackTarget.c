/*
 * XREFs of RtlGetReturnAddressHijackTarget @ 0x180120B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG_PTR RtlGetReturnAddressHijackTarget(void)
{
  return (ULONG_PTR)RtlRaiseExceptionForReturnAddressHijack;
}
