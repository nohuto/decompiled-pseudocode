/*
 * XREFs of ??_EBluetoothBroadcastProvider@@UEAAPEAXI@Z @ 0x1800EB0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BluetoothBroadcastProvider@@UEAA@XZ @ 0x1800EA010 (--1BluetoothBroadcastProvider@@UEAA@XZ.c)
 */

BluetoothBroadcastProvider *__fastcall BluetoothBroadcastProvider::`vector deleting destructor'(
        BluetoothBroadcastProvider *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  char v2; // bl

  v2 = (char)a2;
  BluetoothBroadcastProvider::~BluetoothBroadcastProvider(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
