/*
 * XREFs of ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140082F00
 * Callers:
 *     ?Initialize@FxNPagedLookasideList@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14007E6C0 (-Initialize@FxNPagedLookasideList@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxNPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140095D50 (-Initialize@FxNPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140096100 (-Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z @ 0x140020BC8 (-FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z.c)
 *     ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x140026D7C (-FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z.c)
 */

__int64 __fastcall FxLookasideList::InitializeLookaside(
        FxLookasideList *this,
        unsigned __int16 BufferSize,
        unsigned __int16 MemoryObjectSize,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes)
{
  unsigned __int64 v5; // rdi
  _WDF_OBJECT_ATTRIBUTES *p_m_MemoryAttributes; // r9
  __int64 result; // rax
  unsigned __int64 size; // [rsp+40h] [rbp+8h] BYREF

  v5 = BufferSize;
  size = 0LL;
  p_m_MemoryAttributes = &this->m_MemoryAttributes;
  if ( MemoryAttributes )
  {
    *(_OWORD *)&p_m_MemoryAttributes->Size = *(_OWORD *)&MemoryAttributes->Size;
    *(_OWORD *)&this->m_MemoryAttributes.EvtDestroyCallback = *(_OWORD *)&MemoryAttributes->EvtDestroyCallback;
    *(_OWORD *)&this->m_MemoryAttributes.ParentObject = *(_OWORD *)&MemoryAttributes->ParentObject;
    this->m_MemoryAttributes.ContextTypeInfo = MemoryAttributes->ContextTypeInfo;
  }
  else
  {
    *(_OWORD *)&p_m_MemoryAttributes->Size = 0LL;
    *(_OWORD *)&this->m_MemoryAttributes.EvtDestroyCallback = 0LL;
    *(_OWORD *)&this->m_MemoryAttributes.ParentObject = 0LL;
    this->m_MemoryAttributes.ContextTypeInfo = 0LL;
  }
  result = FxCalculateObjectTotalSize(this->m_Globals, MemoryObjectSize, BufferSize, p_m_MemoryAttributes, &size);
  if ( (int)result >= 0 )
  {
    result = FxPoolAddHeaderSize(this->m_Globals, size, &size);
    if ( (int)result >= 0 )
    {
      this->m_MemoryObjectSize = size;
      result = (unsigned int)result;
      this->m_BufferSize = v5;
    }
  }
  return result;
}
