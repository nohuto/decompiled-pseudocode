/*
 * XREFs of sub_14007AC70 @ 0x14007AC70
 * Callers:
 *     sub_14007ACA0 @ 0x14007ACA0 (sub_14007ACA0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_14007AC70(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Devices.ModuleCommandResult>",
           0x4Fu,
           a2);
}
