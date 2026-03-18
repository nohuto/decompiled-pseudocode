/*
 * XREFs of imp_WdfDeviceCreate @ 0x14001E450
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x14001FCC8 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT **DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        WDFDEVICE__ **Device)
{
  _FX_DRIVER_GLOBALS *v4; // rcx
  _FX_DRIVER_GLOBALS *v8; // rdi
  int result; // eax
  WDFDEVICE_INIT *v10; // rdx
  WDFDEVICE__ *v11; // rcx
  unsigned int _a1; // ebx
  unsigned __int16 v13; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pDevice = 0LL;
  if ( !DeviceInit )
    FxVerifierNullBugCheck(v4, retaddr);
  if ( !*DeviceInit )
    FxVerifierNullBugCheck(v4, retaddr);
  if ( !Device )
    FxVerifierNullBugCheck(v4, retaddr);
  v8 = (*DeviceInit)->DriverGlobals;
  *Device = 0LL;
  result = FxVerifierCheckIrqlLevel(v8, 0);
  if ( result >= 0 )
  {
    result = FxValidateObjectAttributes(v8, DeviceAttributes, 7u);
    if ( result >= 0 )
    {
      v10 = *DeviceInit;
      if ( (*DeviceInit)->CreatedDevice )
      {
        WPP_IFR_SF_q(v8, 2u, 0x12u, 0x19u, WPP_FxDeviceApi_cpp_Traceguids, Device);
        return -1073741436;
      }
      else
      {
        if ( (v10->Security.Sddl || v10->Security.DeviceClassSet)
          && !v10->DeviceName
          && (v10->Characteristics & 0x80u) == 0 )
        {
          _a1 = -1073741703;
          v13 = 26;
LABEL_19:
          WPP_IFR_SF_D(v8, 2u, 0x12u, v13, WPP_FxDeviceApi_cpp_Traceguids, _a1);
          return _a1;
        }
        if ( v10->RequiresSelfIoTarget && v10->InitType )
        {
          v13 = 27;
LABEL_28:
          _a1 = -1073741808;
          goto LABEL_19;
        }
        if ( v10->Pdo.NoPowerDependencyOnParent
          && v10->Pdo.EventCallbacks.Size
          && (v10->Pdo.EventCallbacks.EvtDeviceEnableWakeAtBus || v10->Pdo.EventCallbacks.EvtDeviceDisableWakeAtBus) )
        {
          v13 = 28;
          goto LABEL_28;
        }
        result = FxDevice::_Create(v8, DeviceInit, DeviceAttributes, &pDevice);
        if ( result >= 0 )
        {
          if ( pDevice->m_ObjectSize )
            v11 = (WDFDEVICE__ *)((unsigned __int64)pDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v11 = 0LL;
          *Device = v11;
        }
      }
    }
  }
  return result;
}
