/*
 * XREFs of ?GetRuntimeClassName@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180495D80
 * Callers:
 *     ?GetRuntimeClassName@VirtualDesktop@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180495DB0 (-GetRuntimeClassName@VirtualDesktop@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall VirtualDesktop::GetRuntimeClassName(VirtualDesktop *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.ComposableShell.Multitasking.VirtualDesktop", 0x3Cu, a2);
}
