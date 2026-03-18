/*
 * XREFs of ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140043578
 * Callers:
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x140023540 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x14003C0F8 (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x140042D64 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ @ 0x1400434F8 (-PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140044670 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x140045404 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x14006001C (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x14006DDCC (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?ChildListNotifyRemove@FxPkgPnp@@QEAAXPEAJ@Z @ 0x1400724A8 (-ChildListNotifyRemove@FxPkgPnp@@QEAAXPEAJ@Z.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x140074924 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1400778E8 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfPdoClearEjectionRelationsDevices @ 0x14008BB40 (imp_WdfPdoClearEjectionRelationsDevices.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1400928D0 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxTransactionedList::LockForEnum(FxTransactionedList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxTransactionedList_vtbl *v2; // rax
  FxTransactionedList_vtbl *v5; // rax
  __int64 v6; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  v2 = this->__vftable;
  irql = 0;
  v2->AcquireLock(this, FxDriverGlobals, &irql);
  v5 = this->__vftable;
  ++this->m_ListLockedRecursionCount;
  LOBYTE(v6) = irql;
  v5->ReleaseLock(this, FxDriverGlobals, v6);
}
