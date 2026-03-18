/*
 * XREFs of imp_WdfWmiInstanceCreate @ 0x140057970
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x14003F684 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_DDd @ 0x140055DDC (WPP_IFR_SF_DDd.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x140057C7C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x140058014 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     WPP_IFR_SF_qqqd @ 0x14006A614 (WPP_IFR_SF_qqqd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfWmiInstanceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_WMI_INSTANCE_CONFIG *InstanceConfig,
        _WDF_OBJECT_ATTRIBUTES *InstanceAttributes,
        WDFWMIINSTANCE__ **Instance)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  WDFWMIPROVIDER__ *Provider; // rdx
  FxPowerPolicyOwnerSettings *m_Owner; // rsi
  int result; // eax
  FxWmiProvider *v13; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v15; // eax
  FxWmiInstanceExternal *v16; // rsi
  int v17; // edi
  _WDF_WMI_PROVIDER_CONFIG *ProviderConfig; // rax
  FxWmiInstanceExternal *pInstance; // [rsp+50h] [rbp-20h] BYREF
  WDFWMIINSTANCE__ *hInstance; // [rsp+58h] [rbp-18h] BYREF
  WDFWMIPROVIDER__ *hProvider; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  FxDevice *pDevice; // [rsp+A0h] [rbp+30h] BYREF
  FxWmiProvider *pProvider; // [rsp+B0h] [rbp+40h] BYREF

  pProvider = 0LL;
  v5 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pDevice = (FxDevice *)&DriverGlobals[-8];
  hInstance = 0LL;
  pInstance = 0LL;
  if ( !InstanceConfig )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( InstanceConfig->Size != 64 )
  {
    WPP_IFR_SF_DDd(
      v5,
      (unsigned __int8)WPP_FxWmiAPI_cpp_Traceguids,
      0x12u,
      0xBu,
      WPP_FxWmiAPI_cpp_Traceguids,
      InstanceConfig->Size,
      0x40u,
      -1073741820);
    return -1073741820;
  }
  Provider = InstanceConfig->Provider;
  if ( Provider )
  {
    ProviderConfig = InstanceConfig->ProviderConfig;
    if ( !ProviderConfig )
    {
      FxObjectHandleGetPtrAndGlobals(
        v5,
        (unsigned __int64)Provider,
        0x1004u,
        (void **)&pProvider,
        (_FX_DRIVER_GLOBALS **)&pDevice);
      m_Globals = (_FX_DRIVER_GLOBALS *)pDevice;
      v13 = pProvider;
LABEL_10:
      v15 = FxWmiInstanceExternal::_Create(m_Globals, v13, InstanceConfig, InstanceAttributes, &hInstance, &pInstance);
      v16 = pInstance;
      v17 = v15;
      if ( v15 < 0 || InstanceConfig->Register && (v17 = FxWmiProvider::AddInstance(pProvider, pInstance, 0), v17 < 0) )
      {
        if ( v16 )
          FxObject::DeleteFromFailedCreate(v16);
        if ( InstanceConfig->ProviderConfig )
          FxObject::DeleteFromFailedCreate(pProvider);
      }
      else if ( Instance )
      {
        *Instance = hInstance;
      }
      return v17;
    }
    WPP_IFR_SF_qqqd(
      v5,
      2u,
      0x12u,
      0xDu,
      WPP_FxWmiAPI_cpp_Traceguids,
      InstanceConfig,
      Provider,
      ProviderConfig,
      -1073741811);
    return -1073741811;
  }
  if ( !InstanceConfig->ProviderConfig )
  {
    WPP_IFR_SF_qd(v5, 2u, 0x12u, 0xCu, WPP_FxWmiAPI_cpp_Traceguids, InstanceConfig, -1073741811);
    return -1073741811;
  }
  pDevice = (FxDevice *)InstanceConfig->Provider;
  hProvider = 0LL;
  FxObjectHandleGetPtr(v5, (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Owner = pDevice->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner
    && (RtlCompareMemory(&InstanceConfig->ProviderConfig->Guid, &GUID_POWER_DEVICE_ENABLE, 0x10uLL) == 16
     && m_Owner->m_IdleSettings.WmiInstance
     || RtlCompareMemory(&InstanceConfig->ProviderConfig->Guid, &GUID_POWER_DEVICE_WAKE_ENABLE, 0x10uLL) == 16
     && m_Owner->m_WakeSettings.WmiInstance) )
  {
    WPP_IFR_SF_((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], 2u, 0x12u, 0xEu, WPP_FxWmiAPI_cpp_Traceguids);
    return -1073741055;
  }
  result = FxWmiProvider::_Create(v5, Device, 0LL, InstanceConfig->ProviderConfig, &hProvider, &pProvider);
  if ( result >= 0 )
  {
    v13 = pProvider;
    m_Globals = pProvider->m_Globals;
    goto LABEL_10;
  }
  return result;
}
