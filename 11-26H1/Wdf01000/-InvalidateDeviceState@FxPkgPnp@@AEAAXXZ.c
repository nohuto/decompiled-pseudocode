/*
 * XREFs of ?InvalidateDeviceState@FxPkgPnp@@AEAAXXZ @ 0x140080564
 * Callers:
 *     ?SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1400A6E54 (-SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z.c)
 *     ?SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z @ 0x1400A6EA4 (-SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z.c)
 * Callees:
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x140018EB8 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 */

void __fastcall FxPkgPnp::InvalidateDeviceState(FxPkgPnp *this)
{
  _DEVICE_OBJECT *SafePhysicalDevice; // rax

  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this->m_Device);
  if ( SafePhysicalDevice )
    IoInvalidateDeviceState(SafePhysicalDevice);
}
