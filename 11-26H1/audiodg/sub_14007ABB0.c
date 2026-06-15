/*
 * XREFs of sub_14007ABB0 @ 0x14007ABB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_14007ABB0(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Media.Devices.AudioDeviceModule", 0x27u, a2);
}
