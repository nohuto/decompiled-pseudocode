/*
 * XREFs of ?CreateInstance@__IFadeMinimizedAndItemsOnOtherMonitorsDismissPolicyFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVFadeMinimizedAndItemsOnOtherMonitorsDismissPolicy@2345@PE$AAUIFilterAnimatable@2345@VRect@Foundation@Windows@@@Z @ 0x1802ABFE8
 * Callers:
 *     ?CreateDesktopInvokeAnimationProvider@SnapAssistAnimationProviderFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@SAPE$AAUIAnimationProvider@2345@PE$AAUIInvokeAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x18010A3E4 (-CreateDesktopInvokeAnimationProvider@SnapAssistAnimationProviderFactory@Switcher@Experiences@Co.c)
 *     ??0FadeNonVisibleItemsInvokePolicy@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@VRect@Foundation@8@@Z @ 0x18023F14C (--0FadeNonVisibleItemsInvokePolicy@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@.c)
 *     ??0FadeMinimizedAndItemsOnOtherMonitorsInvokePolicy@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@VRect@Foundation@8@@Z @ 0x1802ABF20 (--0FadeMinimizedAndItemsOnOtherMonitorsInvokePolicy@Switcher@Experiences@ComposableShell@Windows.c)
 *     ??0FadeMinimizedAndItemsOnOtherMonitorsDismissPolicy@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIFilterAnimatable@1234@VRect@Foundation@Windows@@@Z @ 0x1802AC044 (--0FadeMinimizedAndItemsOnOtherMonitorsDismissPolicy@Switcher@Experiences@ComposableShell@Window.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180021A28 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180021A7C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__IFadeMinimizedAndItemsOnOtherMonitorsDismissPolicyFactory::CreateInstance(
        __int64 *a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rbx
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = *a1;
  v7 = *a3;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64 *))(v3 + 48))(a1, a2, &v7, &v8);
  __abi_ThrowIfFailed(v4);
  v5 = __abi_winrt_ptr_ctor(v8);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v8);
  return v5;
}
