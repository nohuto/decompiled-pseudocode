/*
 * XREFs of ??1PnpDevice@@UEAA@XZ @ 0x1800687D0
 * Callers:
 *     ??_GPnpDevice@@UEAAPEAXI@Z @ 0x180068780 (--_GPnpDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 *     ?CloseInterface@PnpDevice@@QEAAXXZ @ 0x18006DEA8 (-CloseInterface@PnpDevice@@QEAAXXZ.c)
 *     ?UnregisterDeviceHandleNotifications@PnpDevice@@AEAAXXZ @ 0x1800E6338 (-UnregisterDeviceHandleNotifications@PnpDevice@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PnpDevice::~PnpDevice(HSTRING *this)
{
  InputContext *v2; // rcx

  *this = (HSTRING)&PnpDevice::`vftable';
  PnpDevice::UnregisterDeviceHandleNotifications((PnpDevice *)this);
  PnpDevice::CloseInterface((PnpDevice *)this);
  WindowsDeleteString(this[4]);
  this[4] = 0LL;
  WindowsDeleteString(this[3]);
  this[3] = 0LL;
  v2 = (InputContext *)this[2];
  if ( v2 )
  {
    this[2] = 0LL;
    InputContext::Release(v2);
  }
  *this = (HSTRING)&RefCountedObject::`vftable';
}
