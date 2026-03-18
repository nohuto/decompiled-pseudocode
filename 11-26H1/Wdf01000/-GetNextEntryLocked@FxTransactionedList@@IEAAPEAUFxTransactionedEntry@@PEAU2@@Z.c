/*
 * XREFs of ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x140044A3C
 * Callers:
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x140023540 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x14003C0F8 (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ @ 0x1400434F8 (-PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140044670 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x140045404 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x14006001C (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?ChildListNotifyRemove@FxPkgPnp@@QEAAXPEAJ@Z @ 0x1400724A8 (-ChildListNotifyRemove@FxPkgPnp@@QEAAXPEAJ@Z.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x140074924 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1400778E8 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfPdoClearEjectionRelationsDevices @ 0x14008BB40 (imp_WdfPdoClearEjectionRelationsDevices.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1400928D0 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14009B2B4 (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z @ 0x1400AC900 (-ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z.c)
 * Callees:
 *     <none>
 */

FxTransactionedEntry *__fastcall FxTransactionedList::GetNextEntryLocked(
        FxTransactionedList *this,
        FxTransactionedEntry *Entry)
{
  FxTransactionedEntry *p_m_ListHead; // rcx
  FxTransactionedEntry *result; // rax

  p_m_ListHead = (FxTransactionedEntry *)&this->m_ListHead;
  if ( !Entry )
    Entry = p_m_ListHead;
  for ( result = (FxTransactionedEntry *)Entry->m_ListLink.Flink;
        result != p_m_ListHead;
        result = (FxTransactionedEntry *)result->m_ListLink.Flink )
  {
    if ( result->m_Transaction == FxTransactionActionNothing )
      return result;
  }
  return 0LL;
}
