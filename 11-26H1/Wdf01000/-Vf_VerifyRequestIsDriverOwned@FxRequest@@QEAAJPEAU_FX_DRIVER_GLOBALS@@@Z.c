/*
 * XREFs of ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DDD28
 * Callers:
 *     ?VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140084660 (-VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestIsDriverOwned(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  $017EC7271344F03DE96B61F5DB702B71 *v2; // r14
  unsigned int v4; // ebp
  unsigned __int16 *p_m_ObjectSize; // r15
  const void *v6; // rbx
  const void *_a1; // rax

  v2 = &this->218;
  if ( (this->m_VerifierFlags & 1) != 0 )
  {
    return 0;
  }
  else
  {
    v4 = -1073741808;
    p_m_ObjectSize = &this->m_ObjectSize;
    v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x10u, 0x33u, WPP_FxRequest_cpp_Traceguids, _a1, -1073741808);
    if ( (v2->m_VerifierFlags & 2) != 0 )
    {
      if ( !*p_m_ObjectSize )
        v6 = 0LL;
      WPP_IFR_SF_q(FxDriverGlobals, 2u, 0x10u, 0x34u, WPP_FxRequest_cpp_Traceguids, v6);
    }
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return v4;
}
