/*
 * XREFs of ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x14013760C
 * Callers:
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x140137644 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 *     ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x14026A6B0 (-ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z.c)
 * Callees:
 *     ?SaveLastEntryPromotionQueued@@YAXXZ @ 0x140136668 (-SaveLastEntryPromotionQueued@@YAXXZ.c)
 *     ?IsPromotionQueue@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1401374F0 (-IsPromotionQueue@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 */

void __fastcall AppendMousePromotionQueue(
        struct tagMOUSE_PROMOTION_QUEUE *a1,
        struct tagMOUSE_PROMOTION_ENTRY *a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( *(_QWORD *)a1 )
    **((_QWORD **)a1 + 1) = a2;
  else
    *(_QWORD *)a1 = a2;
  *((_QWORD *)a1 + 1) = a3;
  if ( IsPromotionQueue(a1, (__int64)a2) )
    SaveLastEntryPromotionQueued(v4, v3);
}
