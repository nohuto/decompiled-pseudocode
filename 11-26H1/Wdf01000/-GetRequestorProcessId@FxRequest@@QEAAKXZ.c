/*
 * XREFs of ?GetRequestorProcessId@FxRequest@@QEAAKXZ @ 0x140058E74
 * Callers:
 *     imp_WdfRequestGetRequestorProcessId @ 0x140058E30 (imp_WdfRequestGetRequestorProcessId.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x140058F10 (-GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

ULONG __fastcall FxRequest::GetRequestorProcessId(FxRequest *this)
{
  int _a2; // eax
  unsigned __int16 m_ObjectSize; // dx
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // rdi
  _IRP *irp; // [rsp+58h] [rbp+10h] BYREF

  irp = 0LL;
  _a2 = FxRequest::GetIrp(this, &irp);
  if ( _a2 >= 0 )
    return IoGetRequestorProcessId(irp);
  m_ObjectSize = this->m_ObjectSize;
  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x24u, WPP_FxRequestKm_cpp_Traceguids, _a1, _a2);
  FxVerifierDbgBreakPoint(*p_m_Globals);
  return 0;
}
