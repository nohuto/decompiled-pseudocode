/*
 * XREFs of ?get@?Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@InvokeAnimationCoordinator@SwitcherControlBase@2345@UE$AAAPE$AAUIAnimationCoordinator@2345@XZ @ 0x1802AA410
 * Callers:
 *     ?BeginInvokeAnimation@TaskViewFrame@@UEAAXXZ @ 0x1802241E0 (-BeginInvokeAnimation@TaskViewFrame@@UEAAXXZ.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _get__Q__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__InvokeAnimationCoordinator_SwitcherControlBase_2345_UE_AAAPE_AAUIAnimationCoordinator_2345_XZ(
        __int64 (__fastcall ***a1)(_QWORD, void *, __int64 *))
{
  __int64 v1; // rdi
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h]

  v1 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a1 )
  {
    v2 = (**a1)(
           a1,
           &_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__,
           &v7);
    __abi_ThrowIfFailed(v2);
    v1 = v7;
  }
  v8 = v1;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 80LL))(v1, &v6);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v1);
  __abi_ThrowIfFailed(v3);
  v4 = __abi_winrt_ptr_ctor(v6);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v6);
  return v4;
}
