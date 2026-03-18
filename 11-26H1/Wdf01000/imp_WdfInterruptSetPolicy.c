/*
 * XREFs of imp_WdfInterruptSetPolicy @ 0x1400A2FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFINITY@@@Z @ 0x1400AA624 (-SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFI.c)
 */

void __fastcall imp_WdfInterruptSetPolicy(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        unsigned int Policy,
        unsigned __int32 Priority,
        unsigned __int64 TargetProcessorSet)
{
  FxInterrupt *pFxInterrupt; // [rsp+30h] [rbp-28h] BYREF
  _GROUP_AFFINITY processorSet; // [rsp+38h] [rbp-20h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF

  pFxDriverGlobals = 0LL;
  pFxInterrupt = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt,
    &pFxDriverGlobals);
  if ( Policy > 5 )
  {
    WPP_IFR_SF_D(pFxDriverGlobals, 2u, 0xCu, 0x1Au, WPP_FxInterruptApi_cpp_Traceguids, Policy);
  }
  else
  {
    if ( Priority - 1 <= 2 )
    {
      processorSet.Mask = TargetProcessorSet;
      *(_QWORD *)&processorSet.Group = 0LL;
      FxInterrupt::SetPolicy(
        pFxInterrupt,
        (_WDF_INTERRUPT_POLICY)Policy,
        (_WDF_INTERRUPT_PRIORITY)Priority,
        &processorSet);
      return;
    }
    WPP_IFR_SF_D(pFxDriverGlobals, 2u, 0xCu, 0x1Bu, WPP_FxInterruptApi_cpp_Traceguids, Priority);
  }
  FxVerifierDbgBreakPoint(pFxDriverGlobals);
}
