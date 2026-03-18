/*
 * XREFs of imp_WdfDeviceGetSystemPowerAction @ 0x140044E90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetSystemPowerAction@FxPkgPnp@@QEAA?AW4POWER_ACTION@@XZ @ 0x1400454F4 (-GetSystemPowerAction@FxPkgPnp@@QEAA-AW4POWER_ACTION@@XZ.c)
 */

POWER_ACTION __fastcall imp_WdfDeviceGetSystemPowerAction(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  return FxPkgPnp::GetSystemPowerAction(pDevice->m_PkgPnp);
}
