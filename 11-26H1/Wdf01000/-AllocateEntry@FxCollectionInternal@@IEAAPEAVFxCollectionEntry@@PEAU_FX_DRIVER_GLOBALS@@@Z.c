/*
 * XREFs of ?AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400662DC
 * Callers:
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x14009ABC8 (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 */

FX_POOL **__fastcall FxCollectionInternal::AllocateEntry(
        FxCollectionInternal *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  ULONG Tag; // r8d
  void *v3; // rcx
  __m128i v5; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  Tag = FxDriverGlobals->Tag;
  v3 = 0LL;
  v5.m128i_i64[0] = 0LL;
  v5.m128i_i64[1] = 64LL;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    v3 = retaddr;
  return FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v5, 0x18uLL, Tag, v3);
}
