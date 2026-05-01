/*
 * XREFs of _lambda_c0ce33e06c92a42a96b12c6bd24e1411_::operator()_winrt::Windows::UI::Input::GestureRecognizer_ @ 0x18058E618
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Input::GestureRecognizer_winrt::Windows::UI::Input::HoldingEventArgs___lambda_c0ce33e06c92a42a96b12c6bd24e1411___::Invoke @ 0x180591C30 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Input--G.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?FailureReason@?$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A5D0 (-FailureReason@-$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndC.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0DismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x18020A248 (--0DismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 *     ??0ShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1802A73D8 (--0ShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?TryDismissAsync@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUDismissShellViewOptions@Shell@UI@WindowsUdk@3@@Z @ 0x18038EAB0 (-TryDismissAsync@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shel.c)
 *     ?PlatedSizeInRawPixels@?$consume_WindowsUdk_UI_StartScreen_ILogoLoadOptions@UILogoLoadOptions@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUSize@Foundation@Windows@3@@Z @ 0x1805398D8 (-PlatedSizeInRawPixels@-$consume_WindowsUdk_UI_StartScreen_ILogoLoadOptions@UILogoLoadOptions@St.c)
 *     ?ContactCount@?$consume_Windows_UI_Input_IHoldingEventArgs2@UHoldingEventArgs@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180590A6C (-ContactCount@-$consume_Windows_UI_Input_IHoldingEventArgs2@UHoldingEventArgs@Input@UI@Windows@w.c)
 *     ?Context@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180590BE4 (-Context@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@Win.c)
 *     ?IsC2DDisabledByUserSetting@AIXPolicyHelper@@YA_NXZ @ 0x180592190 (-IsC2DDisabledByUserSetting@AIXPolicyHelper@@YA_NXZ.c)
 *     ?TransferForegroundRights@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions3@UShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180593230 (-TransferForegroundRights@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions3@UShowShellViewOpt.c)
 *     ?TryShowAsync@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUShowShellViewOptions@Shell@UI@WindowsUdk@3@@Z @ 0x18059339C (-TryShowAsync@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_c0ce33e06c92a42a96b12c6bd24e1411_::operator()_winrt::Windows::UI::Input::GestureRecognizer_(
        AIXPolicyHelper *a1,
        __int64 a2,
        __int64 *a3)
{
  int v5; // eax
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  int v12; // [rsp+28h] [rbp-28h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp+18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+28h] BYREF

  v14 = a2;
  if ( !AIXPolicyHelper::IsC2DDisabledByUserSetting(a1)
    && (unsigned int)winrt::impl::consume_Windows_UI_Input_IHoldingEventArgs2<winrt::Windows::UI::Input::HoldingEventArgs>::ContactCount(a3) == 2 )
  {
    v5 = winrt::impl::consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult<winrt::Windows::Internal::Shell::MeetAndChat::IMeetAndChatInstallResult>::FailureReason(a3);
    if ( v5 )
    {
      if ( v5 == 2 )
      {
        v6 = *(_QWORD *)a1;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 128LL) )
        {
          v7 = (__int64 *)winrt::WindowsUdk::UI::Shell::DismissShellViewOptions::DismissShellViewOptions((winrt::WindowsUdk::UI::Shell::DismissShellViewOptions *)&v15);
          winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::TryDismissAsync(
            (__int64 **)(v6 + 128),
            &v14,
            v7);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
        }
      }
    }
    else
    {
      winrt::WindowsUdk::UI::Shell::ShowShellViewOptions::ShowShellViewOptions((winrt::WindowsUdk::UI::Shell::ShowShellViewOptions *)&v15);
      v11 = 0LL;
      v8 = *a3;
      v12 = 0;
      v13 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 56LL))(v8, &v11);
      winrt::check_hresult((int *)&v14, v9, (__int64)&v12);
      winrt::impl::consume_WindowsUdk_UI_StartScreen_ILogoLoadOptions<winrt::WindowsUdk::UI::StartScreen::ILogoLoadOptions>::PlatedSizeInRawPixels(
        &v15,
        (unsigned int *)&v11);
      winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions3<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions>::TransferForegroundRights(&v15);
      winrt::param::hstring::hstring((winrt::param::hstring *)&v12, L"TwoFingerPressAndHold");
      winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::Context(
        &v15,
        &v12);
      v10 = (_QWORD *)(*(_QWORD *)a1 + 128LL);
      if ( *v10 )
      {
        winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::TryShowAsync(
          v10,
          &v14,
          &v15);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
    }
  }
}
