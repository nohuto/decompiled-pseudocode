/*
 * XREFs of ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x14009B058
 * Callers:
 *     imp_WdfCmResourceListRemove @ 0x140098F80 (imp_WdfCmResourceListRemove.c)
 *     imp_WdfIoResourceListRemove @ 0x1400993C0 (imp_WdfIoResourceListRemove.c)
 *     imp_WdfIoResourceRequirementsListRemove @ 0x140099820 (imp_WdfIoResourceRequirementsListRemove.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x14003BA20 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x14003BB54 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxResourceCollection::RemoveAndDelete(
        FxResourceCollection *this,
        unsigned int Index,
        unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  const void *v6; // rdi
  bool v7; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxObject *m_Object; // rbx
  FxCollectionEntry *Entry; // rax
  unsigned __int8 v12; // r8
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  irql = 0;
  if ( (this->m_AccessFlags & 2) == 0 )
  {
    p_m_Globals = &this->m_Globals;
    v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v7 = this->m_ObjectSize == 0;
    m_Globals = this->m_Globals;
    if ( v7 )
      v6 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0xAu, WPP_FxResourceCollection_cpp_Traceguids, v6, Index);
    FxVerifierDbgBreakPoint(*p_m_Globals);
    return 0;
  }
  m_Object = 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  Entry = (FxCollectionEntry *)FxCollectionInternal::FindEntry(&this->FxCollectionInternal, Index);
  if ( Entry )
  {
    this->m_Changed = 1;
    m_Object = Entry->m_Object;
    FxCollectionInternal::RemoveEntry(&this->FxCollectionInternal, Entry);
  }
  FxNonPagedObject::Unlock(this, irql, v12);
  if ( !m_Object )
    return 0;
  m_Object->DeleteObject(m_Object);
  return 1;
}
