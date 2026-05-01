/*
 * XREFs of CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180610010
 * Callers:
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_InitCoro$2 @ 0x18060FFAC (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_InitCoro$2.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800287E0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1802B277C (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x1802C0138 (--0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032BAD8 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180331830 (-await_resume@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QE.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindow@@UInputGestureOperation@Input@Internal@UI@Windows@2@AEBUInputGestureOperationEventArgs@56782@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindow@@UInputGestureOperation@Input@Internal@UI@Windows@2@AEBUInputGestureOperationEventArgs@56782@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@experimental@std@@@experimental@std@@@Z @ 0x180488614 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindo.c)
 *     ??$CopilotHotkey_Output_Debug_String@PEBG@CopilotHotkeyManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x1805F989C (--$CopilotHotkey_Output_Debug_String@PEBG@CopilotHotkeyManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??0LauncherOptions@System@Windows@winrt@@QEAA@XZ @ 0x1805FDBB0 (--0LauncherOptions@System@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805FDF84 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x1805FE2DC (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?IsTargetAppPackageInstalled@CopilotHotkeyManager@@QEAA_NXZ @ 0x18060D5B4 (-IsTargetAppPackageInstalled@CopilotHotkeyManager@@QEAA_NXZ.c)
 *     ?LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@@Z @ 0x18060DEEC (-LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@.c)
 *     ?SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z @ 0x18060F41C (-SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z.c)
 *     ?TargetApplicationPackageFamilyName@?$consume_Windows_System_ILauncherOptions2@ULauncherOptions@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18060FA48 (-TargetApplicationPackageFamilyName@-$consume_Windows_System_ILauncherOptions2@ULauncherOptions@.c)
 *     ?UpdatePressAndHoldSignalSentFlag@CopilotHotkeyManager@@AEAAX_N@Z @ 0x1806105F4 (-UpdatePressAndHoldSignalSentFlag@CopilotHotkeyManager@@AEAAX_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55121036@@@details@wil@@QEAA_NXZ @ 0x180610978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55121036@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57343652@@@details@wil@@QEAA_NXZ @ 0x1806109F4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57343652@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SkipRepeatedModifiers2@@@details@wil@@QEAA_NXZ @ 0x180610C18 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SkipRepeatedModifiers2@@@details@.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal__ResumeCoro_1(char *a1)
{
  __int64 v2; // rax
  int v3; // edx
  CopilotHotkeyManager *v4; // rcx
  CopilotHotkeyManager *v5; // r14
  char *v6; // rcx
  const unsigned __int16 *v7; // rdx
  const unsigned __int16 *v8; // rdx
  const struct winrt::Windows::Foundation::Uri *v9; // rax
  const struct winrt::Windows::Foundation::Uri *v10; // rax
  __int64 v11; // rcx
  void **v12; // rbx
  WCHAR *v13; // rdx
  unsigned __int64 v14; // r8
  char *v15; // rdx
  char v16; // r14
  __int64 v17; // rcx
  void **v18; // rbx
  const char *v19; // [rsp+28h] [rbp-D0h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_47;
      case 2:
        if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55121036>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55121036>::GetImpl'::`2'::impl) )
          goto LABEL_10;
        v2 = *(_QWORD *)(a1 + 321);
        if ( a1[329] )
        {
          if ( !*(_BYTE *)(v2 + 328) )
            goto LABEL_10;
          v3 = *(_DWORD *)(v2 + 332);
        }
        else
        {
          if ( !*(_BYTE *)(v2 + 368) )
            goto LABEL_10;
          v3 = *(_DWORD *)(*(_QWORD *)(a1 + 321) + 372LL);
        }
        *((_QWORD *)a1 + 2) = 0LL;
        if ( CopilotHotkeyManager::SendWindowMessageOnInvocation(
               *(CopilotHotkeyManager **)(a1 + 321),
               v3,
               (HWND *)a1 + 2) )
        {
LABEL_46:
          CopilotHotkeyManager::UpdatePressAndHoldSignalSentFlag(v4, a1[329]);
          goto LABEL_47;
        }
LABEL_10:
        v5 = *(CopilotHotkeyManager **)(a1 + 321);
        v6 = a1 + 24;
        if ( a1[329] )
          std::wstring::wstring((__int64)v6, (__int64)v5 + 296);
        else
          std::wstring::wstring((__int64)v6, (__int64)v5 + 336);
        if ( *((_QWORD *)a1 + 5) )
        {
          v7 = (const unsigned __int16 *)(a1 + 24);
          if ( *((_QWORD *)a1 + 6) > 7uLL )
            v7 = *(const unsigned __int16 **)v7;
          winrt::param::hstring::hstring((winrt::param::hstring *)(a1 + 64), v7);
          winrt::Windows::Foundation::Uri::Uri(
            (winrt::Windows::Foundation::Uri *)(a1 + 56),
            (const struct winrt::param::hstring *)(a1 + 64));
          winrt::Windows::System::LauncherOptions::LauncherOptions((struct IUnknown *)a1 + 12);
          std::wstring::wstring((__int64)(a1 + 136), (__int64)v5 + 224);
          v8 = (const unsigned __int16 *)(a1 + 136);
          if ( *((_QWORD *)a1 + 20) > 7uLL )
            v8 = (const unsigned __int16 *)*((_QWORD *)a1 + 17);
          winrt::param::hstring::hstring((winrt::param::hstring *)(a1 + 104), v8);
          winrt::impl::consume_Windows_System_ILauncherOptions2<winrt::Windows::System::LauncherOptions>::TargetApplicationPackageFamilyName(
            (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a1 + 12,
            (_QWORD *)a1 + 13);
          std::wstring::_Tidy_deallocate((void **)a1 + 17);
          if ( ((unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57343652>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57343652>::GetImpl'::`2'::impl)
             || !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SkipRepeatedModifiers2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SkipRepeatedModifiers2>::GetImpl'::`2'::impl))
            && *((_DWORD *)v5 + 110) == 111 )
          {
            LockSetForegroundWindow(2 - (a1[329] != 0));
          }
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57343652>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57343652>::GetImpl'::`2'::impl) )
          {
            if ( CopilotHotkeyManager::IsTargetAppPackageInstalled(v5) )
            {
              v9 = winrt::Windows::System::Launcher::LaunchUriAsync(
                     (const struct winrt::Windows::Foundation::Uri *)(a1 + 168),
                     (const struct winrt::Windows::System::LauncherOptions *)(a1 + 56),
                     (__int64)(a1 + 96));
              *((_QWORD *)a1 + 22) = 0LL;
              *((_QWORD *)a1 + 23) = v9;
              *((_QWORD *)a1 + 24) = 0LL;
              a1[200] = 1;
              *((_WORD *)a1 + 4) = 4;
              if ( winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CAppThumbnailWindow *,winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs const &,enum MultitaskingViewGestureHandlerHelpers::GestureDirection>::promise_type>(
                     (__int64)(a1 + 176),
                     (__int64)a1) )
              {
                return;
              }
LABEL_39:
              v16 = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_resume((__int64)(a1 + 176));
              winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 22);
              winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 168));
              v17 = *(_QWORD *)(a1 + 321) + 432LL;
              if ( a1[329] )
              {
                v18 = (void **)(a1 + 208);
                *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                              v17,
                              (__int64 *)a1 + 26)
                         + 333) = v16;
              }
              else
              {
                v18 = (void **)(a1 + 216);
                *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                              v17,
                              (__int64 *)a1 + 27)
                         + 334) = v16;
              }
              tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(v18);
            }
          }
          else
          {
            v10 = winrt::Windows::System::Launcher::LaunchUriAsync(
                    (const struct winrt::Windows::Foundation::Uri *)(a1 + 224),
                    (const struct winrt::Windows::System::LauncherOptions *)(a1 + 56),
                    (__int64)(a1 + 96));
            *((_QWORD *)a1 + 29) = 0LL;
            *((_QWORD *)a1 + 30) = v10;
            *((_QWORD *)a1 + 31) = 0LL;
            a1[256] = 1;
            *((_WORD *)a1 + 4) = 6;
            if ( winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CAppThumbnailWindow *,winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs const &,enum MultitaskingViewGestureHandlerHelpers::GestureDirection>::promise_type>(
                   (__int64)(a1 + 232),
                   (__int64)a1) )
            {
              return;
            }
LABEL_44:
            winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_resume((__int64)(a1 + 232));
            winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 29);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 224));
          }
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 96));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
          std::wstring::_Tidy_deallocate((void **)a1 + 3);
          goto LABEL_46;
        }
        v11 = (__int64)v5 + 432;
        if ( a1[329] )
        {
          v12 = (void **)(a1 + 264);
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                        v11,
                        (__int64 *)a1 + 33)
                   + 273) = 1;
        }
        else
        {
          v12 = (void **)(a1 + 272);
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                        v11,
                        (__int64 *)a1 + 34)
                   + 274) = 1;
        }
        tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(v12);
        std::wstring::wstring(
          (char **)a1 + 35,
          L"No target URI found in TrySendingCopilotHardwareKeyLongPressSignal() with ");
        v13 = (WCHAR *)L"true";
        if ( !a1[329] )
          v13 = (WCHAR *)L"false";
        v14 = -1LL;
        do
          ++v14;
        while ( v13[v14] );
        std::wstring::append((_QWORD *)a1 + 35, v13, v14);
        v15 = a1 + 280;
        if ( *((_QWORD *)a1 + 38) > 7uLL )
          v15 = (char *)*((_QWORD *)a1 + 35);
        *((_QWORD *)a1 + 39) = v15;
        CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const *>((const WCHAR **)a1 + 39);
        wil::details::in1diag3::Log_HrMsg(
          retaddr,
          (void *)0x58B,
          (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
          (const char *)0x8000FFFFLL,
          (unsigned __int64)"No target uri found.",
          v19);
        std::wstring::_Tidy_deallocate((void **)a1 + 35);
        std::wstring::_Tidy_deallocate((void **)a1 + 3);
LABEL_47:
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0x160);
        break;
      case 4:
        goto LABEL_39;
      case 5:
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 22);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 168));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 96));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
        std::wstring::_Tidy_deallocate((void **)a1 + 3);
        goto LABEL_47;
      case 6:
        goto LABEL_44;
      case 7:
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 29);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 224));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 96));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
        std::wstring::_Tidy_deallocate((void **)a1 + 3);
        goto LABEL_47;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
