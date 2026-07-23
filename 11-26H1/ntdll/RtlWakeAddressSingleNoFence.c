/*
 * XREFs of RtlWakeAddressSingleNoFence @ 0x18014CC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWakeAddressSingleNoFence(unsigned __int64 a1)
{
  return RtlpWakeByAddress(a1, 0, 0LL);
}
