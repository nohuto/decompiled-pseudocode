/*
 * XREFs of ?GetRuntimeClassName@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800177E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::System::AppMemoryUsageLimitChangingEventArgs::GetRuntimeClassName(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.System.AppMemoryUsageLimitChangingEventArgs", 0x33u, a2);
}
