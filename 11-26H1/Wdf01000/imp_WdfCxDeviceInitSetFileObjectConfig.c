/*
 * XREFs of imp_WdfCxDeviceInitSetFileObjectConfig @ 0x140093210
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 *     FxValiateCx @ 0x140077070 (FxValiateCx.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfCxDeviceInitSetFileObjectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDFCX_FILEOBJECT_CONFIG *CxFileObjectConfig,
        _WDF_OBJECT_ATTRIBUTES *FileObjectAttributes)
{
  _FX_DRIVER_GLOBALS *v4; // rcx
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rdi
  _WDF_TRI_STATE AutoForwardCleanupClose; // ecx
  _WDF_FILEOBJECT_CLASS FileObjectClass; // edx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned __int16 v13; // r9
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !CxDeviceInit )
    FxVerifierNullBugCheck(v4, retaddr);
  ClientDriverGlobals = CxDeviceInit->ClientDriverGlobals;
  if ( (int)FxValiateCx(ClientDriverGlobals, v4) >= 0 )
  {
    if ( !CxFileObjectConfig )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( CxFileObjectConfig->Size != 40 )
    {
      WPP_IFR_SF_dd(
        ClientDriverGlobals,
        2u,
        0x12u,
        0xFu,
        WPP_FxCxDeviceInitApi_cpp_Traceguids,
        CxFileObjectConfig->Size,
        40);
LABEL_22:
      FxVerifierDbgBreakPoint(ClientDriverGlobals);
      return;
    }
    if ( (int)FxValidateObjectAttributes(ClientDriverGlobals, FileObjectAttributes, 7) < 0 )
      goto LABEL_22;
    AutoForwardCleanupClose = CxFileObjectConfig->AutoForwardCleanupClose;
    if ( AutoForwardCleanupClose && (unsigned int)(AutoForwardCleanupClose - 1) >= 2 )
    {
      WPP_IFR_SF_D(
        ClientDriverGlobals,
        2u,
        0x12u,
        0x10u,
        WPP_FxCxDeviceInitApi_cpp_Traceguids,
        CxFileObjectConfig->AutoForwardCleanupClose);
      goto LABEL_22;
    }
    CxDeviceInit->FileObject.Set = 1;
    CxDeviceInit->FileObject.AutoForwardCleanupClose = CxFileObjectConfig->AutoForwardCleanupClose;
    FileObjectClass = CxFileObjectConfig->FileObjectClass;
    v11 = FileObjectClass & 0x7FFFFFFF;
    if ( (FileObjectClass & 0x7FFFFFFF) == 0 || v11 > 4 )
    {
      v13 = 17;
      goto LABEL_21;
    }
    if ( FileObjectClass < WdfFileObjectInvalid )
    {
      v12 = v11 - 2;
      if ( v12 )
      {
        if ( v12 - 1 >= 2 )
        {
          v13 = 18;
LABEL_21:
          WPP_IFR_SF_D(
            ClientDriverGlobals,
            2u,
            0x12u,
            v13,
            WPP_FxCxDeviceInitApi_cpp_Traceguids,
            CxFileObjectConfig->FileObjectClass);
          goto LABEL_22;
        }
      }
    }
    CxDeviceInit->FileObject.Class = FileObjectClass;
    *(_OWORD *)&CxDeviceInit->FileObject.Callbacks.Size = *(_OWORD *)&CxFileObjectConfig->Size;
    *(_OWORD *)&CxDeviceInit->FileObject.Callbacks.EvtFileClose = *(_OWORD *)&CxFileObjectConfig->EvtFileClose;
    *(_QWORD *)&CxDeviceInit->FileObject.Callbacks.AutoForwardCleanupClose = *(_QWORD *)&CxFileObjectConfig->AutoForwardCleanupClose;
    if ( FileObjectAttributes )
    {
      *(_OWORD *)&CxDeviceInit->FileObject.Attributes.Size = *(_OWORD *)&FileObjectAttributes->Size;
      *(_OWORD *)&CxDeviceInit->FileObject.Attributes.EvtDestroyCallback = *(_OWORD *)&FileObjectAttributes->EvtDestroyCallback;
      *(_OWORD *)&CxDeviceInit->FileObject.Attributes.ParentObject = *(_OWORD *)&FileObjectAttributes->ParentObject;
      CxDeviceInit->FileObject.Attributes.ContextTypeInfo = FileObjectAttributes->ContextTypeInfo;
    }
  }
}
