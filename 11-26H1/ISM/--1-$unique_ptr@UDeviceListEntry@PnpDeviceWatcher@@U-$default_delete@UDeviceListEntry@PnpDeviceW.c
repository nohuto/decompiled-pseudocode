/*
 * XREFs of ??1?$unique_ptr@UDeviceListEntry@PnpDeviceWatcher@@U?$default_delete@UDeviceListEntry@PnpDeviceWatcher@@@std@@@std@@QEAA@XZ @ 0x1800E4868
 * Callers:
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180021A4C (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800E4B60 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 * Callees:
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800E3720 (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 */

PnpDeviceWatcher::RetryDeviceListEntry *__fastcall std::unique_ptr<PnpDeviceWatcher::DeviceListEntry>::~unique_ptr<PnpDeviceWatcher::DeviceListEntry>(
        PnpDeviceWatcher::RetryDeviceListEntry **a1)
{
  PnpDeviceWatcher::RetryDeviceListEntry *v1; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry *result; // rax

  v1 = *a1;
  if ( v1 )
    return PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v1);
  return result;
}
