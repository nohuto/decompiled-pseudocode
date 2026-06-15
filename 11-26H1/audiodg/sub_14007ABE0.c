/*
 * XREFs of sub_14007ABE0 @ 0x14007ABE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_14007ABE0(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Media.Devices.AudioDeviceModuleNotificationEventArgs", 0x3Cu, a2);
}
