/*
 * XREFs of _lambda_125ce7e834e11fd92811414f264430c1_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_const_&_ @ 0x18045809C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_125ce7e834e11fd92811414f264430c1___::Invoke @ 0x180462510 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180462510.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B90F0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800C0E94 (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?Run@?$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180227A18 (-Run@-$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIIm.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180229FFC (-Result@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequ.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180246FE4 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     ?IsRunningOnServerSku@KeyboardHosting@@YA_NXZ @ 0x1802B5448 (-IsRunningOnServerSku@KeyboardHosting@@YA_NXZ.c)
 *     ?ShellViewToCoreKeyboardViewType@TouchKeyboardExperienceManager@@AEAA?AW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4ShellView@Shell@6WindowsUdk@winrt@@@Z @ 0x1804646A0 (-ShellViewToCoreKeyboardViewType@TouchKeyboardExperienceManager@@AEAA-AW4CoreKeyboardViewType@Co.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableNewKeyboardExperience@@@details@wil@@QEAA_NXZ @ 0x180468910 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableNewKeyboardExperience@@@de.c)
 *     ?OnShellViewCoordinatorHideRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEBUDismissShellViewRequestedEventArgs@Shell@7WindowsUdk@winrt@@@Z @ 0x18046E798 (-OnShellViewCoordinatorHideRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType.c)
 *     ?TryHideTabTip@KeyboardHosting@@YAJXZ @ 0x1804725EC (-TryHideTabTip@KeyboardHosting@@YAJXZ.c)
 *     ?IsInputAppEnabled@KeyboardHosting@@YA_NXZ @ 0x180472720 (-IsInputAppEnabled@KeyboardHosting@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_125ce7e834e11fd92811414f264430c1_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const___winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_const___(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  int v5; // eax
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebp
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  bool v13; // bl
  KeyboardHosting *v14; // rcx
  KeyboardHosting *v15; // rcx
  bool v16; // al
  int v17; // ebx
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rdx
  KeyboardHosting *v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF
  __int64 v23; // [rsp+48h] [rbp+10h] BYREF

  v23 = 0LL;
  v5 = Microsoft::WRL::WeakRef::As<IInspectable>(a1 + 1, &v23);
  if ( v5 >= 0 )
  {
    if ( !v23 )
      goto LABEL_3;
    v7 = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(a3);
    v9 = TouchKeyboardExperienceManager::ShellViewToCoreKeyboardViewType(v8, v7);
    v10 = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(a3);
    v12 = TouchKeyboardExperienceManager::ShellViewToCoreKeyboardViewType(v11, v10);
    v13 = !v12 || (unsigned int)(v12 - 7) <= 1;
    winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
      (__int64 **)a3,
      &v22);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableNewKeyboardExperience>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DisableNewKeyboardExperience>::GetImpl'::`2'::impl) )
    {
      v16 = KeyboardHosting::IsRunningOnServerSku(v14) || !KeyboardHosting::IsInputAppEnabled(v15);
      if ( v13 && v16 )
      {
        v17 = KeyboardHosting::TryHideTabTip(v15);
        v18 = retaddr;
        if ( v17 < 0 )
        {
          v19 = 3369LL;
LABEL_23:
          wil::details::in1diag3::_Log_Hr(
            v18,
            (void *)v19,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v17);
          goto LABEL_26;
        }
        goto LABEL_26;
      }
    }
    else if ( v13 && KeyboardHosting::IsRunningOnServerSku(v14) )
    {
      v17 = KeyboardHosting::TryHideTabTip(v20);
      v18 = retaddr;
      if ( v17 < 0 )
      {
        v19 = 3381LL;
        goto LABEL_23;
      }
LABEL_26:
      winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result(a3);
      winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::Run(&v22);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
      return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    }
    KeyboardHosting::TabTipAdapter::OnShellViewCoordinatorHideRequested(*(_QWORD *)(*a1 + 584LL), v9, a3);
    goto LABEL_26;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xD1A,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_3:
  winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result(a3);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
}
