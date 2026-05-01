/*
 * XREFs of ?Invoke@ItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAUISwitchItem@Multitasking@4Internal@Windows@@@Z @ 0x18067AB50
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_ItemCloseInvokedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@ItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJPE$AAUISwitchItem@Multitasking@5Internal@Windows@@@Z @ 0x18067D780 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_ItemCloseInvokedEventHandler___abi_I.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler::Invoke(
        _QWORD **a1)
{
  int v1; // eax

  if ( *a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler::`vftable'{for `__abi_IUnknown'} )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  }
  else
  {
    v1 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
    __abi_ThrowIfFailed(v1);
  }
}
