/*
 * XREFs of ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x14003D334
 * Callers:
 *     imp_WdfPdoInitAddHardwareID @ 0x14003DB20 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x14003DC80 (imp_WdfPdoInitAddCompatibleID.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 */

bool __fastcall FxCollectionInternal::Add(
        FxCollectionInternal *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FX_POOL *Item)
{
  bool v3; // zf
  void *v6; // rcx
  FX_POOL **v7; // rax
  FX_POOL **v8; // rbx
  FxTagTracker *NonPagedBytes; // rcx
  _LIST_ENTRY *v11; // rcx
  _LIST_ENTRY *Blink; // rdx
  unsigned int RefCount; // edx
  __m128i v14; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = FxDriverGlobals->FxPoolTrackingOn == 0;
  v14.m128i_i64[0] = 0LL;
  v14.m128i_i64[1] = 64LL;
  if ( v3 )
    v6 = 0LL;
  else
    v6 = retaddr;
  v7 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v14, 0x18uLL, FxDriverGlobals->Tag, v6);
  v8 = v7;
  if ( v7 )
  {
    v11 = (_LIST_ENTRY *)(v7 + 1);
    Blink = this->m_ListHead.Blink;
    if ( Blink->Flink != &this->m_ListHead )
      __fastfail(3u);
    v7[2] = (FX_POOL *)Blink;
    v11->Flink = &this->m_ListHead;
    Blink->Flink = v11;
    this->m_ListHead.Blink = v11;
    *v7 = Item;
    RefCount = _InterlockedIncrement((volatile signed __int32 *)&Item->NonPagedLock.m_Lock + 1);
    if ( SLOBYTE(Item->NonPagedHead.Blink) < 0 )
    {
      NonPagedBytes = (FxTagTracker *)Item[-1].NonPagedBytes;
      if ( NonPagedBytes )
        FxTagTracker::UpdateTagHistory(
          NonPagedBytes,
          this,
          185,
          "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp",
          TagAddRef,
          RefCount);
    }
    ++this->m_Count;
  }
  return v8 != 0LL;
}
