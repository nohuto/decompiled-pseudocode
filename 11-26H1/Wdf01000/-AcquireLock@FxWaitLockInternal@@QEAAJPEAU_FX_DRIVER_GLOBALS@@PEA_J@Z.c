/*
 * XREFs of ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1400421F0
 * Callers:
 *     ?_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x140021650 (-_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 *     ?PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ @ 0x140040544 (-PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ.c)
 *     ?AcquireInterfaceIterationLock@FxUsbDevice@@IEAAXXZ @ 0x1400405C4 (-AcquireInterfaceIterationLock@FxUsbDevice@@IEAAXXZ.c)
 *     ?PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ @ 0x140040ED0 (-PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ.c)
 *     ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x140041148 (-PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x140041338 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x140041C20 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x140041D20 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     ?_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z @ 0x1400427F0 (-_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x14006DCE0 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x14006DFE0 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 *     ?PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ @ 0x14006E1A4 (-PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ.c)
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x14006EE28 (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x14006F010 (imp_WdfDeviceCreateDeviceInterface.c)
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x140074560 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 *     ?AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z @ 0x140083660 (-AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z.c)
 *     imp_WdfInterruptTryToAcquireLock @ 0x1400A3090 (imp_WdfInterruptTryToAcquireLock.c)
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1400A6D2C (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1400AB1B0 (-_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWaitLockInternal::AcquireLock(
        FxWaitLockInternal *this,
        _FX_DRIVER_GLOBALS *Timeout,
        _LARGE_INTEGER *FxDriverGlobals)
{
  _LARGE_INTEGER *p_li; // rax
  unsigned int v6; // edi
  _LARGE_INTEGER li; // [rsp+48h] [rbp+10h] BYREF

  li.QuadPart = 0LL;
  if ( FxDriverGlobals )
    li = *FxDriverGlobals;
  KeEnterCriticalRegion();
  p_li = &li;
  if ( !FxDriverGlobals )
    p_li = 0LL;
  v6 = KeWaitForSingleObject(this, Executive, 0, 0, p_li);
  if ( v6 == 258 )
  {
    KeLeaveCriticalRegion();
    return 258LL;
  }
  else
  {
    this->m_OwningThread = KeGetCurrentThread();
    return v6;
  }
}
