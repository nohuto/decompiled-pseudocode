/*
 * XREFs of sub_14007AB80 @ 0x14007AB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_14007AB80(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Media.Devices.Internal.AudioDeviceBrokerDevice", 0x36u, a2);
}
