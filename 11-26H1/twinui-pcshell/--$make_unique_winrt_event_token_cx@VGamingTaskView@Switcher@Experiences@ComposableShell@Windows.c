/*
 * XREFs of ??$make_unique_winrt_event_token_cx@VGamingTaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@P8SwitcherControlBase@2345@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVRoutedEventHandler@Xaml@UI@9@@ZP862345@E$AAAXV789@@ZVRoutedEventHandler@Xaml@UI@9@@details@wil@@YA?AV?$unique_winrt_event_token_cx@VGamingTaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@PE$AAVGamingTaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@P8SwitcherControlBase@4567@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVRoutedEventHandler@Xaml@UI@Windows@@@ZP884567@E$AAAXV9Foundation@Windows@@@Z1@Z @ 0x18069FC14
 * Callers:
 *     ?RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ @ 0x1806A1F80 (-RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801A2AD0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::details::make_unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::GamingTaskView,Windows::Foundation::EventRegistrationToken (WindowsInternal::ComposableShell::Experiences::Switcher::SwitcherControlBase::*)(Windows::UI::Xaml::RoutedEventHandler __gc *)__gc ,void (WindowsInternal::ComposableShell::Experiences::Switcher::SwitcherControlBase::*)(Windows::Foundation::EventRegistrationToken)__gc ,Windows::UI::Xaml::RoutedEventHandler>(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64, __int64 *),
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v9; // rbx
  __int128 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h]

  v12 = a1;
  v9 = __abi_winrt_cast_to(
         0,
         a2,
         (__int64)&_uuidof__AVSwitcherControlBase_Switcher_Experiences_ComposableShell_WindowsInternal__);
  v13 = v9;
  (*(void (__fastcall **)(__int64, __int64 *, __int64))a3)(v9 + *(int *)(a3 + 8), &v12, a5);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v9);
  *(_QWORD *)&v11 = *(_QWORD *)a4;
  DWORD2(v11) = *(_DWORD *)(a4 + 8) + 8;
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 8) = Platform::Details::GetWeakReference(a2);
  *(_OWORD *)(a1 + 16) = v11;
  *(_QWORD *)(a1 + 32) = 0LL;
  return a1;
}
