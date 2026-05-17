/*
 * XREFs of RtlGetReturnAddressHijackTarget @ 0x180120D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall *RtlGetReturnAddressHijackTarget())()
{
  return RtlRaiseExceptionForReturnAddressHijack;
}
