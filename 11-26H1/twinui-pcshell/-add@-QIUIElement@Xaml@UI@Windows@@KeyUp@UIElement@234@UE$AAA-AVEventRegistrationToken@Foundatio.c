/*
 * XREFs of ?add@?QIUIElement@Xaml@UI@Windows@@KeyUp@UIElement@234@UE$AAA?AVEventRegistrationToken@Foundation@4@PE$AAVKeyEventHandler@Input@234@@Z @ 0x18009EFB4
 * Callers:
 *     ?RegisterForEvents@?QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D1D0 (-RegisterForEvents@-QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHo.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall _add__QIUIElement_Xaml_UI_Windows__KeyUp_UIElement_234_UE_AAA_AVEventRegistrationToken_Foundation_4_PE_AAVKeyEventHandler_Input_234__Z(
        __int64 (__fastcall ***a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rdi
  int v6; // eax
  int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h]

  *a2 = 0LL;
  v5 = 0LL;
  v9 = 0LL;
  if ( a1 )
  {
    v6 = (**a1)(a1, &_uuidof__AUIUIElement_Xaml_UI_Windows__, &v9);
    __abi_ThrowIfFailed(v6);
    v5 = v9;
  }
  v10 = v5;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v5 + 328LL))(v5, a3, a2);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v5);
  __abi_ThrowIfFailed(v7);
  return a2;
}
