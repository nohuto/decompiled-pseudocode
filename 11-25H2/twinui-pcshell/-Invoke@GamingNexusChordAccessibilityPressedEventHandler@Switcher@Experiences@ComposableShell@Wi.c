/*
 * XREFs of ?Invoke@GamingNexusChordAccessibilityPressedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAUISwitchItem@Multitasking@4Internal@Windows@@@Z @ 0x18067AB00
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_GamingNexusChordAccessibilityPressedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@GamingNexusChordAccessibilityPressedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJPE$AAUISwitchItem@Multitasking@5Internal@Windows@@@Z @ 0x18067D750 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_GamingNexusChordAccessibilityPressed.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::GamingNexusChordAccessibilityPressedEventHandler::Invoke(
        _QWORD **a1)
{
  int v1; // eax

  if ( *a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::GamingNexusChordAccessibilityPressedEventHandler::`vftable'{for `__abi_IUnknown'} )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  }
  else
  {
    v1 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
    __abi_ThrowIfFailed(v1);
  }
}
