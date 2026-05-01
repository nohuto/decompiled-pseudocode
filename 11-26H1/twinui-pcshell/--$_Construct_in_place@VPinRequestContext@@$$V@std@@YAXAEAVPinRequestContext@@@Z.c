/*
 * XREFs of ??$_Construct_in_place@VPinRequestContext@@$$V@std@@YAXAEAVPinRequestContext@@@Z @ 0x1802BE4A4
 * Callers:
 *     ??$make_shared@VPinRequestContext@@$$V@std@@YA?AV?$shared_ptr@VPinRequestContext@@@0@XZ @ 0x1802BE448 (--$make_shared@VPinRequestContext@@$$V@std@@YA-AV-$shared_ptr@VPinRequestContext@@@0@XZ.c)
 * Callees:
 *     <none>
 */

PinRequestContext *__fastcall std::_Construct_in_place<PinRequestContext,>(PinRequestContext *a1)
{
  *(_OWORD *)a1 = 0LL;
  *((_OWORD *)a1 + 1) = 0LL;
  *((_OWORD *)a1 + 2) = 0LL;
  return PinRequestContext::PinRequestContext(a1);
}
