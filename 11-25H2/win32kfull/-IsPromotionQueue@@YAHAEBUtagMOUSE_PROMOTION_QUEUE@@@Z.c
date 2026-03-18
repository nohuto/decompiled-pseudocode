/*
 * XREFs of ?IsPromotionQueue@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1401374F0
 * Callers:
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x14013760C (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x14013A294 (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPromotionQueue(const struct tagMOUSE_PROMOTION_QUEUE *a1, __int64 a2)
{
  return a1 == (const struct tagMOUSE_PROMOTION_QUEUE *)(W32GetUserSessionState(a1, a2) + 16544);
}
