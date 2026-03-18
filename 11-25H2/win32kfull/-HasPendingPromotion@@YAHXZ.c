/*
 * XREFs of ?HasPendingPromotion@@YAHXZ @ 0x140139330
 * Callers:
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x140137644 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 *     ?MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z @ 0x140138CD4 (-MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z.c)
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1401390C8 (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
 *     ?xxxCleanupThreadPointerData@@YAXPEAUtagTHREADINFO@@@Z @ 0x140139210 (-xxxCleanupThreadPointerData@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x140139508 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 *     ?HasPendingPromotion@PointerPromotion@@YAHPEAUtagTHREADINFO@@@Z @ 0x14013A968 (-HasPendingPromotion@PointerPromotion@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     ?CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z @ 0x14013A9B0 (-CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z.c)
 *     ?xxxCompletePendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@@Z @ 0x14026D6B0 (-xxxCompletePendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HasPendingPromotion(__int64 a1, __int64 a2)
{
  return *(_WORD *)(W32GetUserSessionState(a1, a2) + 16640) != 0;
}
