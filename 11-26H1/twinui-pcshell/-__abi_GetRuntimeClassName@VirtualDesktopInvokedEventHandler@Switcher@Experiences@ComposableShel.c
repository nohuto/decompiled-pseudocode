/*
 * XREFs of ?__abi_GetRuntimeClassName@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1806BE350
 * Callers:
 *     ?__abi_GetRuntimeClassName@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1806BE370 (-__abi_GetRuntimeClassName@VirtualDesktopInvokedEventHandler@Switcher@Experiences@C_ea_1806BE370.c)
 *     ?__abi_GetRuntimeClassName@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1806BE380 (-__abi_GetRuntimeClassName@VirtualDesktopInvokedEventHandler@Switcher@Experiences@C_ea_1806BE380.c)
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
