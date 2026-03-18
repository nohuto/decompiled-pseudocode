/*
 * XREFs of ?Release@CPassthroughEffect@@WBA@EAAKXZ @ 0x1802B3810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CPassthroughEffect::Release(__int64 a1)
{
  return CRadialGradientEffect::Release((CRadialGradientEffect *)(a1 - 16));
}
