/*
 * XREFs of imp_WdfWmiProviderCreate @ 0x14008DA70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     FxIsEqualGuid @ 0x1400422A4 (FxIsEqualGuid.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x140057C7C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfWmiProviderCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_WMI_PROVIDER_CONFIG *WmiProviderConfig,
        _WDF_OBJECT_ATTRIBUTES *ProviderAttributes,
        WDFWMIPROVIDER__ **WmiProvider)
{
  _FX_DRIVER_GLOBALS *v5; // rbx
  WDFWMIPROVIDER__ **v9; // rsi
  FxPowerPolicyOwnerSettings *m_Owner; // rdi
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+60h] [rbp+8h] BYREF
  FxWmiProvider *pProvider; // [rsp+70h] [rbp+18h] BYREF

  v5 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pDevice = 0LL;
  pProvider = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  if ( !WmiProviderConfig )
    FxVerifierNullBugCheck(v5, retaddr);
  v9 = WmiProvider;
  if ( !WmiProvider )
    FxVerifierNullBugCheck(v5, retaddr);
  m_Owner = pDevice->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( !m_Owner
    || (!FxIsEqualGuid(&WmiProviderConfig->Guid, &GUID_POWER_DEVICE_ENABLE) || !m_Owner->m_IdleSettings.WmiInstance)
    && (!FxIsEqualGuid(&WmiProviderConfig->Guid, &GUID_POWER_DEVICE_WAKE_ENABLE) || !m_Owner->m_WakeSettings.WmiInstance) )
  {
    return FxWmiProvider::_Create(v5, Device, ProviderAttributes, WmiProviderConfig, v9, &pProvider);
  }
  WPP_IFR_SF_(v5, 2u, 0x12u, 0xAu, WPP_FxWmiAPI_cpp_Traceguids);
  return 3221226241LL;
}
