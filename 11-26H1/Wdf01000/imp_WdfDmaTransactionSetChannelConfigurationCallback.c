/*
 * XREFs of imp_WdfDmaTransactionSetChannelConfigurationCallback @ 0x1400734C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qL @ 0x140059D40 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfDmaTransactionSetChannelConfigurationCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int8 (__fastcall *ConfigureRoutine)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _MDL *, unsigned __int64, unsigned __int64),
        FxObject *ConfigureContext)
{
  FxDmaTransactionBase *v7; // rcx
  _WDF_DMA_PROFILE _a2; // edx
  FxDmaTransactionBase *pDmaTrans; // [rsp+40h] [rbp-18h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans,
    &pFxDriverGlobals);
  v7 = pDmaTrans;
  _a2 = pDmaTrans->m_DmaEnabler->m_Profile;
  if ( _a2 == WdfDmaProfileSystem || _a2 == WdfDmaProfileSystemDuplex )
  {
    pDmaTrans[1].m_SpinLock.m_Lock = (unsigned __int64)ConfigureRoutine;
    v7[1].m_ParentObject = ConfigureContext;
  }
  else
  {
    WPP_IFR_SF_qL(pFxDriverGlobals, 2u, 0xFu, 0x1Bu, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
  }
}
