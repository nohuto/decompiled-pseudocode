/*
 * XREFs of ??$from_cx@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA?AUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x1806AB210
 * Callers:
 *     _lambda_28e2deb1c60008eafa8d487ea9ad6bb5_::operator() @ 0x1806AC6C4 (_lambda_28e2deb1c60008eafa8d487ea9ad6bb5_--operator().c)
 *     ?CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x1806B3E44 (-CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUIS.c)
 *     ?HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1806B58F4 (-HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableSh.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
winrt *__fastcall from_cx<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>(
        winrt *a1,
        struct IUnknown *a2)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  void **v5; // rax
  int v6; // eax
  int v8; // [rsp+28h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)a1 = 0LL;
  if ( a2 )
  {
    v8 = 0;
    v9 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    v5 = winrt::put_abi(a1, a2);
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, void *, void **))QueryInterface)(
           a2,
           &winrt::impl::guid_v<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,
           v5);
    winrt::check_hresult(&v10, v6, (__int64)&v8);
  }
  return a1;
}
