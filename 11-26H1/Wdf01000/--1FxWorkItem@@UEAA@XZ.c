/*
 * XREFs of ??1FxWorkItem@@UEAA@XZ @ 0x14003B628
 * Callers:
 *     ??_EFxWorkItem@@UEAAPEAXI@Z @ 0x14003B5F0 (--_EFxWorkItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14003B790 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x14003B96C (-Free@MxWorkItem@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxWorkItem::~FxWorkItem(FxWorkItem *this)
{
  FxObject *m_Object; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  const void *_a1; // rdx

  this->__vftable = (FxWorkItem_vtbl *)FxWorkItem::`vftable';
  if ( !this->m_RunningDown && this->m_Callback )
  {
    m_Globals = this->m_Globals;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xAu, WPP_FxWorkItem_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  m_Object = this->m_Object;
  if ( m_Object )
  {
    m_Object->Release(m_Object, this, 91, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
    this->m_Object = 0LL;
  }
  if ( this->m_WorkItem.m_WorkItem )
    MxWorkItem::Free(&this->m_WorkItem);
  FxNonPagedObject::~FxNonPagedObject(this);
}
