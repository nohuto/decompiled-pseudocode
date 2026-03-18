/*
 * XREFs of imp_WdfDeviceAssignS0IdleSettings @ 0x14003F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x14003FA3C (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x140055DDC (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceAssignS0IdleSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *Settings)
{
  unsigned __int8 v5; // dl
  unsigned __int16 v6; // r9
  int _a2; // ebx
  unsigned int v8; // r8d
  unsigned int Size; // ecx
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps; // edx
  _WDF_TRI_STATE PowerUpIdleDeviceOnSystemWake; // eax
  unsigned __int16 v13; // r9
  void *retaddr; // [rsp+48h] [rbp+8h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+10h] BYREF
  FxDevice *pDevice; // [rsp+60h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( !Settings )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( !pDevice->m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    v6 = 11;
    _a2 = -1073741808;
    v8 = 12;
LABEL_4:
    WPP_IFR_SF_qd(pFxDriverGlobals, 2u, v8, v6, WPP_FxDeviceApi_cpp_Traceguids, Device, _a2);
    return _a2;
  }
  Size = Settings->Size;
  if ( Settings->Size != 36 && ((Size - 24) & 0xFFFFFFFB) != 0 )
  {
    _a2 = -1073741820;
    WPP_IFR_SF_DDd(pFxDriverGlobals, v5, 0x12u, 0xCu, WPP_FxDeviceApi_cpp_Traceguids, 0x24u, Size, -1073741820);
    return _a2;
  }
  if ( (unsigned int)(Settings->DxState - 2) > 3
    || (IdleCaps = Settings->IdleCaps, (unsigned int)(IdleCaps - 1) > 2)
    || (unsigned int)(Settings->UserControlOfIdleSettings - 1) > 1
    || Settings->Enabled > (unsigned int)WdfUseDefault )
  {
    v13 = 13;
    goto LABEL_25;
  }
  if ( Size > 0x18 )
  {
    PowerUpIdleDeviceOnSystemWake = Settings->PowerUpIdleDeviceOnSystemWake;
    if ( (unsigned int)PowerUpIdleDeviceOnSystemWake > WdfUseDefault )
    {
      v13 = 14;
      goto LABEL_25;
    }
    if ( PowerUpIdleDeviceOnSystemWake != WdfUseDefault && IdleCaps != IdleCannotWakeFromS0 )
    {
      v13 = 15;
LABEL_25:
      _a2 = -1073741811;
      WPP_IFR_SF_D(pFxDriverGlobals, 2u, 0x12u, v13, WPP_FxDeviceApi_cpp_Traceguids, 0xC000000D);
      return _a2;
    }
  }
  if ( Size > 0x1C && Settings->IdleTimeoutType > SystemManagedIdleTimeoutWithHint )
  {
    v6 = 16;
    _a2 = -1073741811;
    v8 = 18;
    goto LABEL_4;
  }
  return FxPkgPnp::PowerPolicySetS0IdleSettings(pDevice->m_PkgPnp, Settings);
}
