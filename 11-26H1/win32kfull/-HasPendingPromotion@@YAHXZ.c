/*
 * XREFs of ?HasPendingPromotion@@YAHXZ @ 0x1401366C0
 * Callers:
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x140134C48 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 *     ?MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z @ 0x140135D58 (-MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z.c)
 *     PointerPromotionOnPointerInputRetrieval @ 0x140136390 (PointerPromotionOnPointerInputRetrieval.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1401364E0 (xxxCleanupThreadPointerInputInfo.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x140136D34 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 *     ?CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z @ 0x140137D88 (-CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HasPendingPromotion(__int64 a1, __int64 a2)
{
  return *(_WORD *)(W32GetUserSessionState(a1, a2) + 16632) != 0;
}
