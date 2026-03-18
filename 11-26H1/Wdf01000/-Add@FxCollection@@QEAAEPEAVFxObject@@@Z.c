/*
 * XREFs of ?Add@FxCollection@@QEAAEPEAVFxObject@@@Z @ 0x14003C92C
 * Callers:
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x14003ACC8 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     imp_WdfRegistryQueryMultiString @ 0x14003C530 (imp_WdfRegistryQueryMultiString.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x14009AD30 (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 */

bool __fastcall FxCollection::Add(FxCollection *this, FX_POOL *Item)
{
  FxCollectionInternal *v2; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v5; // rax
  FX_POOL **v6; // rax
  FX_POOL **v7; // rbx
  FxTagTracker *NonPagedBytes; // rcx
  _LIST_ENTRY *v10; // rcx
  _LIST_ENTRY *Blink; // rdx
  unsigned int RefCount; // edx
  __m128i v13; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = &this->FxCollectionInternal;
  m_Globals = this->m_Globals;
  v13.m128i_i64[0] = 0LL;
  v13.m128i_i64[1] = 64LL;
  if ( m_Globals->FxPoolTrackingOn )
    v5 = retaddr;
  else
    v5 = 0LL;
  v6 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v13, 0x18uLL, m_Globals->Tag, v5);
  v7 = v6;
  if ( v6 )
  {
    v10 = (_LIST_ENTRY *)(v6 + 1);
    Blink = v2->m_ListHead.Blink;
    if ( Blink->Flink != &v2->m_ListHead )
      __fastfail(3u);
    v6[2] = (FX_POOL *)Blink;
    v10->Flink = &v2->m_ListHead;
    Blink->Flink = v10;
    v2->m_ListHead.Blink = v10;
    *v6 = Item;
    RefCount = _InterlockedIncrement((volatile signed __int32 *)&Item->NonPagedLock.m_Lock + 1);
    if ( SLOBYTE(Item->NonPagedHead.Blink) < 0 )
    {
      NonPagedBytes = (FxTagTracker *)Item[-1].NonPagedBytes;
      if ( NonPagedBytes )
        FxTagTracker::UpdateTagHistory(
          NonPagedBytes,
          v2,
          185,
          "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp",
          TagAddRef,
          RefCount);
    }
    ++v2->m_Count;
  }
  return v7 != 0LL;
}
