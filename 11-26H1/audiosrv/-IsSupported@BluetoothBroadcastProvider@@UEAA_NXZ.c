/*
 * XREFs of ?IsSupported@BluetoothBroadcastProvider@@UEAA_NXZ @ 0x1800EBFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall BluetoothBroadcastProvider::IsSupported(BluetoothBroadcastProvider *this)
{
  return *((_BYTE *)this + 16);
}
