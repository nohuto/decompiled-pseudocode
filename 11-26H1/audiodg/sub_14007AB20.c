/*
 * XREFs of sub_14007AB20 @ 0x14007AB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_14007AB20(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Media.Devices.Internal.AudioDeviceBroker", 0x30u, a2);
}
