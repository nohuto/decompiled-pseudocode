/*
 * XREFs of Vf_VerifyWdfDeviceWdmDispatchIrp @ 0x1400E4B94
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrp @ 0x14004C640 (imp_WdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?GetCxDeviceInfo@FxDevice@@QEAAPEAUFxCxDeviceInfo@@PEAVFxDriver@@@Z @ 0x14007BC08 (-GetCxDeviceInfo@FxDevice@@QEAAPEAUFxCxDeviceInfo@@PEAVFxDriver@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall Vf_VerifyWdfDeviceWdmDispatchIrp(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _WDF_DRIVER_GLOBALS *device,
        FxDevice *DispatchContext,
        _LIST_ENTRY *FxDriverGlobals)
{
  _LIST_ENTRY *p_m_PreprocessInfoListHead; // rdi
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  _LIST_ENTRY *i; // rax

  p_m_PreprocessInfoListHead = &DispatchContext->m_PreprocessInfoListHead;
  p_m_Globals = &DispatchContext->m_Globals;
  if ( !FxDevice::GetCxDeviceInfo(DispatchContext, *(FxDriver **)&device[-7].DriverName[8]) )
  {
    WPP_IFR_SF_D(*p_m_Globals, 2u, 0xDu, 0xCu, WPP_FxDeviceApiKm_cpp_Traceguids, 0xC0000010);
    FxVerifierDbgBreakPoint(*p_m_Globals);
  }
  for ( i = p_m_PreprocessInfoListHead->Flink; i != p_m_PreprocessInfoListHead; i = i->Flink )
  {
    if ( FxDriverGlobals == i )
      return;
  }
  if ( FxDriverGlobals != p_m_PreprocessInfoListHead )
  {
    WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xDu, 0xDu, WPP_FxDeviceApiKm_cpp_Traceguids, FxDriverGlobals, -1073741811);
    FxVerifierDbgBreakPoint(*p_m_Globals);
  }
}
