/*
 * XREFs of ?Invoke@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAUIVirtualDesktop@Multitasking@4Internal@Windows@@0@Z @ 0x180696490
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_VirtualDesktopInvokedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJPE$AAUIVirtualDesktop@Multitasking@5Internal@Windows@@0@Z @ 0x180696D50 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_VirtualDesktopInvokedEventHandler___.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::Invoke(
        _QWORD **a1)
{
  int v1; // eax

  if ( *a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::`vftable'{for `__abi_IUnknown'} )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  }
  else
  {
    v1 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
    __abi_ThrowIfFailed(v1);
  }
}
