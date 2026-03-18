/*
 * XREFs of ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x14008CA9C
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x140043DAC (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x14008CA04 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqdd @ 0x140086A1C (WPP_IFR_SF_qqdd.c)
 */

unsigned __int8 __fastcall FxChildList::ReenumerateEntryLocked(
        FxChildList *this,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 FromQDR)
{
  _LIST_ENTRY *p_m_ModificationLink; // rax
  FxDeviceDescriptionEntry *Flink; // rsi
  int _a4; // edi
  FxChildListDescriptionState v7; // ecx
  _FX_DRIVER_GLOBALS *v8; // r11
  char v9; // bl
  FxChildListDescriptionState m_DescriptionState; // ecx
  FxDevice *v11; // r10
  const void *_a1; // rdx
  _LIST_ENTRY *Blink; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDevice *m_Pdo; // rdx
  const void *v16; // r8
  BOOL _a3; // [rsp+38h] [rbp-20h]

  p_m_ModificationLink = &Entry->m_ModificationLink;
  Flink = (FxDeviceDescriptionEntry *)Entry->m_ModificationLink.Flink;
  _a4 = 1;
  if ( Flink == (FxDeviceDescriptionEntry *)&Entry->m_ModificationLink
    && ((v7 = Entry->m_DescriptionState, v7 == DescriptionPresentNeedsInstantiation)
     || v7 == DescriptionInstantiatedHasObject) )
  {
    if ( !FromQDR )
    {
      Entry->m_ModificationState = ModificationClone;
      Blink = this->m_ModificationListHead.Blink;
      if ( Blink->Flink != &this->m_ModificationListHead )
        __fastfail(3u);
      p_m_ModificationLink->Flink = &this->m_ModificationListHead;
      Entry->m_ModificationLink.Blink = Blink;
      Blink->Flink = p_m_ModificationLink;
      this->m_ModificationListHead.Blink = p_m_ModificationLink;
    }
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      m_Pdo = Entry->m_Pdo;
      v16 = (const void *)((unsigned __int64)m_Pdo ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_Pdo->m_ObjectSize )
        v16 = 0LL;
      WPP_IFR_SF_qq(
        m_Globals,
        5u,
        0xCu,
        0x14u,
        WPP_FxChildList_cpp_Traceguids,
        v16,
        m_Pdo->m_DeviceObject.m_DeviceObject);
    }
    return 1;
  }
  else
  {
    v8 = this->m_Globals;
    v9 = 0;
    if ( v8->FxVerboseOn )
    {
      m_DescriptionState = Entry->m_DescriptionState;
      if ( m_DescriptionState != DescriptionPresentNeedsInstantiation
        && m_DescriptionState != DescriptionInstantiatedHasObject )
      {
        _a4 = 0;
      }
      v11 = Entry->m_Pdo;
      _a3 = Flink == (FxDeviceDescriptionEntry *)&Entry->m_ModificationLink;
      _a1 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v11->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qqdd(
        v8,
        5u,
        0xCu,
        0x15u,
        WPP_FxChildList_cpp_Traceguids,
        _a1,
        v11->m_DeviceObject.m_DeviceObject,
        _a3,
        _a4);
    }
  }
  return v9;
}
