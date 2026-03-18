/*
 * XREFs of imp_WdfInterruptSetExtendedPolicy @ 0x1400A2E90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qdd @ 0x14003EFD8 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFINITY@@@Z @ 0x1400AA624 (-SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFI.c)
 */

void __fastcall imp_WdfInterruptSetExtendedPolicy(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        _WDF_INTERRUPT_EXTENDED_POLICY *PolicyAndGroup)
{
  _WDF_INTERRUPT_POLICY Policy; // edx
  _WDF_INTERRUPT_PRIORITY Priority; // ecx
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxInterrupt *pFxInterrupt; // [rsp+60h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pFxInterrupt = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt,
    &pFxDriverGlobals);
  if ( PolicyAndGroup->Size == 32 )
  {
    Policy = PolicyAndGroup->Policy;
    Priority = PolicyAndGroup->Priority;
    if ( (unsigned int)Policy > WdfIrqPolicySpreadMessagesAcrossAllProcessors )
    {
      WPP_IFR_SF_D(pFxDriverGlobals, 2u, 0xCu, 0x1Du, WPP_FxInterruptApi_cpp_Traceguids, Policy);
    }
    else if ( (unsigned int)(Priority - 1) > 2 )
    {
      WPP_IFR_SF_D(pFxDriverGlobals, 2u, 0xCu, 0x1Eu, WPP_FxInterruptApi_cpp_Traceguids, Priority);
    }
    else
    {
      if ( !PolicyAndGroup->TargetProcessorSetAndGroup.Reserved[0]
        && !PolicyAndGroup->TargetProcessorSetAndGroup.Reserved[1]
        && !PolicyAndGroup->TargetProcessorSetAndGroup.Reserved[2] )
      {
        FxInterrupt::SetPolicy(pFxInterrupt, Policy, Priority, &PolicyAndGroup->TargetProcessorSetAndGroup);
        return;
      }
      WPP_IFR_SF_(pFxDriverGlobals, 2u, 0xCu, 0x1Fu, WPP_FxInterruptApi_cpp_Traceguids);
    }
  }
  else
  {
    WPP_IFR_SF_qdd(
      pFxDriverGlobals,
      2u,
      0xCu,
      0x1Cu,
      WPP_FxInterruptApi_cpp_Traceguids,
      PolicyAndGroup,
      PolicyAndGroup->Size,
      32);
  }
  FxVerifierDbgBreakPoint(pFxDriverGlobals);
}
