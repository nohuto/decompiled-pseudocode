/*
 * XREFs of sub_14007AB50 @ 0x14007AB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_14007AB50(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Media.Devices.Internal.AudioDeviceBrokerChangedEventArgs", 0x40u, a2);
}
