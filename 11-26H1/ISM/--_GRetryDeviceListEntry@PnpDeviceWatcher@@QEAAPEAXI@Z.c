/*
 * XREFs of ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800E3720
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18005DB24 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?Clear@?$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x1800E386C (-Clear@-$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ.c)
 *     ??1?$unique_ptr@UDeviceListEntry@PnpDeviceWatcher@@U?$default_delete@UDeviceListEntry@PnpDeviceWatcher@@@std@@@std@@QEAA@XZ @ 0x1800E4868 (--1-$unique_ptr@UDeviceListEntry@PnpDeviceWatcher@@U-$default_delete@UDeviceListEntry@PnpDeviceW.c)
 *     ?Erase@?$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXPEAUDeviceListEntry@PnpDeviceWatcher@@@Z @ 0x1800E4888 (-Erase@-$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXPEAUDeviceListEntry@PnpDeviceWatcher@@.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
PnpDeviceWatcher::RetryDeviceListEntry *__fastcall PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(
        PnpDeviceWatcher::RetryDeviceListEntry *this)
{
  InputContext *v2; // rcx

  v2 = (InputContext *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    InputContext::Release(v2);
  }
  operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
