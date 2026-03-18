/*
 * XREFs of ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x14003A0F0
 * Callers:
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x140038CB0 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x140039B18 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x140039D90 (--1FxDevice@@UEAA@XZ.c)
 *     ?DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z @ 0x14007C1C0 (-DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z.c)
 *     ?DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z @ 0x14007F040 (-DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxDevice::DeleteSymbolicLink(FxDevice *this)
{
  _UNICODE_STRING *p_m_SymbolicLinkName; // rbx

  p_m_SymbolicLinkName = &this->m_SymbolicLinkName;
  if ( this->m_SymbolicLinkName.Buffer )
  {
    if ( p_m_SymbolicLinkName->Length )
      IoDeleteSymbolicLink(&this->m_SymbolicLinkName);
    FxPoolFree((_QWORD *)this->m_SymbolicLinkName.Buffer);
    *p_m_SymbolicLinkName = 0LL;
  }
}
