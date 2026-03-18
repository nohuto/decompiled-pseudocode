/*
 * XREFs of ??1FxTimer@@UEAA@XZ @ 0x14003B408
 * Callers:
 *     ??_EFxTimer@@UEAAPEAXI@Z @ 0x14003B3D0 (--_EFxTimer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1MxTimer@@QEAA@XZ @ 0x1400308C0 (--1MxTimer@@QEAA@XZ.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14003B790 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxTimer::~FxTimer(FxTimer *this, __int64 a2)
{
  const void *_a1; // rdx

  this->__vftable = (FxTimer_vtbl *)FxTimer::`vftable';
  if ( this->m_Object )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xAu, WPP_FxTimer_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  MxTimer::~MxTimer(&this->m_Timer, a2);
  FxNonPagedObject::~FxNonPagedObject(this);
}
