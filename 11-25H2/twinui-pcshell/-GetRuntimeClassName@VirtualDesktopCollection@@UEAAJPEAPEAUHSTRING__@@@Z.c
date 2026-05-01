/*
 * XREFs of ?GetRuntimeClassName@VirtualDesktopCollection@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180484090
 * Callers:
 *     ?GetRuntimeClassName@VirtualDesktopCollection@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1804840C0 (-GetRuntimeClassName@VirtualDesktopCollection@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall VirtualDesktopCollection::GetRuntimeClassName(VirtualDesktopCollection *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.ComposableShell.Multitasking.VirtualDesktopCollection", 0x46u, a2);
}
