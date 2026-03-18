/*
 * XREFs of ?Initialize@FxDisposeList@@QEAAJPEAX@Z @ 0x140021E10
 * Callers:
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x14001FFA0 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x14001AE64 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 */

__int64 __fastcall FxDisposeList::Initialize(FxDisposeList *this, void *WdmObject, __int64 a3, unsigned int a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  signed int _a1; // eax
  unsigned int v8; // edi

  m_Globals = this->m_Globals;
  this->m_ObjectFlags |= 0x800u;
  _a1 = FxSystemWorkItem::_Create(m_Globals, WdmObject, &this->m_SystemWorkItem, a4);
  v8 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0xDu, 0xAu, WPP_FxDisposeList_cpp_Traceguids, _a1);
    return v8;
  }
  else
  {
    this->m_WdmObject = WdmObject;
    return 0LL;
  }
}
