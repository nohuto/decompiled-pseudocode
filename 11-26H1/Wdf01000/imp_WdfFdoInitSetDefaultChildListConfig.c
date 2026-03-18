/*
 * XREFs of imp_WdfFdoInitSetDefaultChildListConfig @ 0x140091130
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x14008CCBC (-_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z.c)
 */

void __fastcall imp_WdfFdoInitSetDefaultChildListConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_CHILD_LIST_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *DefaultDeviceListAttributes)
{
  _FX_DRIVER_GLOBALS *v7; // rdi
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 totalDescriptionSize; // [rsp+48h] [rbp+10h] BYREF

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v7 = DeviceInit->DriverGlobals;
  totalDescriptionSize = 0LL;
  if ( !Config )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( (int)FxVerifierCheckIrqlLevel(v7, 0) >= 0 )
  {
    if ( DeviceInit->InitType )
    {
      WPP_IFR_SF_(v7, 2u, 0x12u, 0x2Eu, WPP_FxDeviceInitApi_cpp_Traceguids);
    }
    else if ( (int)FxChildList::_ValidateConfig(v7, Config, &totalDescriptionSize) >= 0 )
    {
      if ( DefaultDeviceListAttributes )
      {
        if ( (int)FxValidateObjectAttributes(v7, DefaultDeviceListAttributes, 1) < 0 )
          goto LABEL_8;
        *(_OWORD *)&DeviceInit->Fdo.ListConfigAttributes.Size = *(_OWORD *)&DefaultDeviceListAttributes->Size;
        *(_OWORD *)&DeviceInit->Fdo.ListConfigAttributes.EvtDestroyCallback = *(_OWORD *)&DefaultDeviceListAttributes->EvtDestroyCallback;
        *(_OWORD *)&DeviceInit->Fdo.ListConfigAttributes.ParentObject = *(_OWORD *)&DefaultDeviceListAttributes->ParentObject;
        DeviceInit->Fdo.ListConfigAttributes.ContextTypeInfo = DefaultDeviceListAttributes->ContextTypeInfo;
      }
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.Size = *(_OWORD *)&Config->Size;
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListCreateDevice = *(_OWORD *)&Config->EvtChildListCreateDevice;
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListIdentificationDescriptionCopy = *(_OWORD *)&Config->EvtChildListIdentificationDescriptionCopy;
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListIdentificationDescriptionCleanup = *(_OWORD *)&Config->EvtChildListIdentificationDescriptionCleanup;
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListAddressDescriptionCopy = *(_OWORD *)&Config->EvtChildListAddressDescriptionCopy;
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListAddressDescriptionCleanup = *(_OWORD *)&Config->EvtChildListAddressDescriptionCleanup;
      return;
    }
LABEL_8:
    FxVerifierDbgBreakPoint(v7);
  }
}
