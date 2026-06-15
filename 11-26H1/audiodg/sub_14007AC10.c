/*
 * XREFs of sub_14007AC10 @ 0x14007AC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_14007AC10(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Media.Devices.AudioDeviceModulesManager", 0x2Fu, a2);
}
