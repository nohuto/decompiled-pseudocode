/*
 * XREFs of ??1PnpDeviceWatcher@@QEAA@XZ @ 0x1800E348C
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800E336C (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 * Callees:
 *     ?Clear@?$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x1800E386C (-Clear@-$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ.c)
 */

void __fastcall PnpDeviceWatcher::~PnpDeviceWatcher(PnpDeviceWatcher *this)
{
  NtList<PnpDeviceWatcher::DeviceListEntry>::Clear((char *)this + 88);
  NtList<PnpDeviceWatcher::DeviceListEntry>::Clear((char *)this + 64);
  NtList<PnpDeviceWatcher::NotificationListEntry>::Clear((char *)this + 32);
}
