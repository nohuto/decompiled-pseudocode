/*
 * XREFs of ?__abi_GetRuntimeClassName@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x180696C20
 * Callers:
 *     ?__abi_GetRuntimeClassName@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x180696C40 (-__abi_GetRuntimeClassName@VirtualDesktopInvokedEventHandler@Switcher@Experiences@C_ea_180696C40.c)
 *     ?__abi_GetRuntimeClassName@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x180696C50 (-__abi_GetRuntimeClassName@VirtualDesktopInvokedEventHandler@Switcher@Experiences@C_ea_180696C50.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.VirtualDesktopInvokedEventHandler",
           0x56u,
           a2);
}
