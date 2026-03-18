/*
 * XREFs of ?CleanupEntryObject@FxCollectionInternal@@QEAAXPEAVFxObject@@@Z @ 0x14003BB8C
 * Callers:
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x14003BB54 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxCollectionInternal::CleanupEntryObject(FxCollectionInternal *this, FxObject *Object)
{
  Object->Release(Object, this, 127, "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
}
