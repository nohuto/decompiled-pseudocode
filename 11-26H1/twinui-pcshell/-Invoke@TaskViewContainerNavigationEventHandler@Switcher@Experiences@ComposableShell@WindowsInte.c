/*
 * XREFs of ?Invoke@TaskViewContainerNavigationEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXI@Z @ 0x1806A1A20
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_TaskViewContainerNavigationEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@TaskViewContainerNavigationEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJI@Z @ 0x1806A4660 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_TaskViewContainerNavigationEventHand.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewContainerNavigationEventHandler::Invoke(
        _QWORD **a1)
{
  int v1; // eax

  if ( *a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewContainerNavigationEventHandler::`vftable'{for `__abi_IUnknown'} )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  }
  else
  {
    v1 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
    __abi_ThrowIfFailed(v1);
  }
}
