/*
 * XREFs of ?__abi_GetRuntimeClassName@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1806A3DC0
 * Callers:
 *     ?__abi_GetRuntimeClassName@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1806A3DE0 (-__abi_GetRuntimeClassName@ItemContextMenuRequestedHandler@Switcher@Experiences@Com_ea_1806A3DE0.c)
 *     ?__abi_GetRuntimeClassName@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1806A3DF0 (-__abi_GetRuntimeClassName@ItemContextMenuRequestedHandler@Switcher@Experiences@Com_ea_1806A3DF0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.ItemContextMenuRequestedHandler",
           0x54u,
           a2);
}
