/*
 * XREFs of ??1?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QE$AAA@XZ @ 0x18068B988
 * Callers:
 *     ?_Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAXXZ @ 0x18068A3E4 (-_Dispose_@-QIDisposable@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experie.c)
 * Callees:
 *     ?_Dispose_@?QIDisposable@Platform@@?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAXXZ @ 0x18068A430 (-_Dispose_@-QIDisposable@Platform@@-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switche.c)
 */

__int64 __fastcall Platform::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::~Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = a1 + 32;
  if ( v1 )
    return __Dispose___QIDisposable_Platform____WriteOnlyArray_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_2_UE_AAAXXZ(v1);
  return result;
}
