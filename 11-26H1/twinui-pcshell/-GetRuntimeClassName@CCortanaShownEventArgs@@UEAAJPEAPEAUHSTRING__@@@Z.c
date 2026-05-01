/*
 * XREFs of ?GetRuntimeClassName@CCortanaShownEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180372E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CCortanaShownEventArgs::GetRuntimeClassName(CCortanaShownEventArgs *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.CortanaShownEventArgs", 0x37u, a2);
}
