/*
 * XREFs of ?CreateDesktopTaskViewDismissAnimationProvider@__ITaskViewAnimationProviderFactoryStatics@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIAnimationProvider@2345@PE$AAUIDismissAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x1802B9B9C
 * Callers:
 *     ?CreateDesktopTaskViewDismissAnimationProvider@TaskViewAnimationProviderFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@SAPE$AAUIAnimationProvider@2345@PE$AAUIDismissAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x1802307DC (-CreateDesktopTaskViewDismissAnimationProvider@TaskViewAnimationProviderFactory@Switcher@Experie.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewAnimationProviderFactoryStatics::CreateDesktopTaskViewDismissAnimationProvider(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  int v3; // eax
  __int64 v4; // rbx
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v6 = *a3;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, __int64 *))(*(_QWORD *)a1 + 80LL))(a1, a2, &v6, &v7);
  __abi_ThrowIfFailed(v3);
  v4 = __abi_winrt_ptr_ctor(v7);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v7);
  return v4;
}
