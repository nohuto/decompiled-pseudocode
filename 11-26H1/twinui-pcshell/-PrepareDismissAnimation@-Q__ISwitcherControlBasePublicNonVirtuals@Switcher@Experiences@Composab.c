/*
 * XREFs of ?PrepareDismissAnimation@?Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitcherControlBase@2345@UE$AAAXXZ @ 0x1802AC380
 * Callers:
 *     ?DismissAnimated@TaskViewFrame@@UEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x1801B6920 (-DismissAnimated@TaskViewFrame@@UEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 *     ?DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ @ 0x1806A1390 (-DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _PrepareDismissAnimation__Q__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__SwitcherControlBase_2345_UE_AAAXXZ(
        __int64 (__fastcall ***a1)(_QWORD, void *, __int64 *))
{
  __int64 v1; // rdi
  int v2; // eax
  int v3; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h]

  v1 = 0LL;
  v4 = 0LL;
  if ( a1 )
  {
    v2 = (**a1)(
           a1,
           &_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__,
           &v4);
    __abi_ThrowIfFailed(v2);
    v1 = v4;
  }
  v5 = v1;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 336LL))(v1);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v1);
  __abi_ThrowIfFailed(v3);
}
