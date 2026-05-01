/*
 * XREFs of ?DismissViewAnimated@GuidedSnapAssistViewController@@QE$AAAXW4DismissOptions@@@Z @ 0x18022BB4C
 * Callers:
 *     ?OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z @ 0x180682490 (-OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z.c)
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@UE$AAAX_N_K@Z @ 0x1806976A0 (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewControl.c)
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@UE$AAAXXZ @ 0x180697BA0 (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@UE$AAAXX.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005D894 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$query@UIXamlSnapAssistViewHostInternal@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIXamlSnapAssistViewHostInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x1802B4200 (--$query@UIXamlSnapAssistViewHostInternal@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_p.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GuidedSnapAssistViewController::DismissViewAnimated(__int64 a1, char a2)
{
  __int64 *v4; // rbx
  HWND v5; // rcx
  _QWORD *v6; // rax
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = (__int64 *)(a1 + 376);
  if ( *(_QWORD *)(a1 + 376) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)(a1 + 376));
    v8 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v4, &v8);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  }
  if ( (a2 & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 24LL))(*(_QWORD *)(a1 + 80));
    v5 = *(HWND *)(*(_QWORD *)(a1 + 384) + 120LL);
    if ( v5 )
      SetForegroundWindow(v5);
  }
  v6 = (_QWORD *)wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IXamlSnapAssistViewHostInternal>(
                   a1 + 56,
                   &v8);
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 32LL))(*v6);
  if ( v8 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return result;
}
