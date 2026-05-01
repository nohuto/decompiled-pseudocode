/*
 * XREFs of CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180635530
 * Callers:
 *     ?TrySendingCopilotHardwareKeyLongPressSignal@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180636100 (-TrySendingCopilotHardwareKeyLongPressSignal@CopilotHotkeyManager@@AEAA-AUfire_and_forget@winrt@.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800254EC (--1-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$integr.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002824C (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x180033DA8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?get_strong@?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@QEAA?AU?$com_ptr@VCopilotHotkeyManager@@@2@XZ @ 0x1801EBF6C (-get_strong@-$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWin.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028D400 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1802AB0D4 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x1802B5A0C (--0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x180328DF0 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180330894 (-await_resume@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QE.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindow@@UInputGestureOperation@Input@Internal@UI@Windows@2@AEBUInputGestureOperationEventArgs@56782@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindow@@UInputGestureOperation@Input@Internal@UI@Windows@2@AEBUInputGestureOperationEventArgs@56782@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@experimental@std@@@experimental@std@@@Z @ 0x1804991F0 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindo.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18053B130 (-await_resume@-$await_adapter@U-$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt.c)
 *     ??$CopilotHotkeyInvoked@AEAW4IMMERSIVE_HOT_KEY_ID@@PEBGIIAEAU_GUID@@@CopilotHotkeyManagerTelemetry@@SAXAEAW4IMMERSIVE_HOT_KEY_ID@@$$QEAPEBG$$QEAI2AEAU_GUID@@@Z @ 0x18061D948 (--$CopilotHotkeyInvoked@AEAW4IMMERSIVE_HOT_KEY_ID@@PEBGIIAEAU_GUID@@@CopilotHotkeyManagerTelemet.c)
 *     ??$CopilotHotkeyInvoked@HPEBGIIAEAU_GUID@@@CopilotHotkeyManagerTelemetry@@SAX$$QEAH$$QEAPEBG$$QEAI2AEAU_GUID@@@Z @ 0x18061DB58 (--$CopilotHotkeyInvoked@HPEBGIIAEAU_GUID@@@CopilotHotkeyManagerTelemetry@@SAX$$QEAH$$QEAPEBG$$QE.c)
 *     ??$CopilotHotkey_Output_Debug_String@PEBG@CopilotHotkeyManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x18061DFBC (--$CopilotHotkey_Output_Debug_String@PEBG@CopilotHotkeyManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$as@UIInitializeWithWindow@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x18061E7C0 (--$as@UIInitializeWithWindow@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCopilotHotkeyManager@@_N@experimental@std@@@?$await_adapter@U?$IAsyncOperation@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCopilotHotkeyManager@@_N@experimental@std@@@experimental@std@@@Z @ 0x18061E830 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCopilotHotkeyManag.c)
 *     ??0LauncherOptions@System@Windows@winrt@@QEAA@XZ @ 0x180622B6C (--0LauncherOptions@System@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180622F30 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x1806232F8 (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?CreateHiddenOwnerHwnd@CopilotHotkeyManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180623BC0 (-CreateHiddenOwnerHwnd@CopilotHotkeyManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource.c)
 *     ?IsTargetAppPackageInstalled@CopilotHotkeyManager@@QEAA_NXZ @ 0x18063241C (-IsTargetAppPackageInstalled@CopilotHotkeyManager@@QEAA_NXZ.c)
 *     ?LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@@Z @ 0x180633014 (-LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@.c)
 *     ?LaunchUriForResultsAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@@Z @ 0x18063308C (-LaunchUriForResultsAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOp.c)
 *     ?SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z @ 0x1806349D4 (-SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z.c)
 *     ?TargetApplicationPackageFamilyName@?$consume_Windows_System_ILauncherOptions2@ULauncherOptions@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180634F98 (-TargetApplicationPackageFamilyName@-$consume_Windows_System_ILauncherOptions2@ULauncherOptions@.c)
 *     ?UpdatePressAndHoldSignalSentFlag@CopilotHotkeyManager@@AEAAX_N@Z @ 0x180636198 (-UpdatePressAndHoldSignalSentFlag@CopilotHotkeyManager@@AEAAX_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55121036@@@details@wil@@QEAA_NXZ @ 0x1806365FC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55121036@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57343652@@@details@wil@@QEAA_NXZ @ 0x18063663C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57343652@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57832725@@@details@wil@@QEAA_NXZ @ 0x1806367B0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID57832725@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID59122885@@@details@wil@@QEAA_NXZ @ 0x1806367F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID59122885@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID60732016@@@details@wil@@QEAA_NXZ @ 0x180636868 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID60732016@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SkipRepeatedModifiers2@@@details@wil@@QEAA_NXZ @ 0x1806368E0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SkipRepeatedModifiers2@@@details@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=19
void __fastcall CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal__ResumeCoro_1(char *a1)
{
  char v2; // al
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // edx
  char v6; // r15
  CopilotHotkeyManager *v7; // rcx
  _QWORD *v8; // rax
  int v9; // eax
  _QWORD *v10; // r15
  char *v11; // rcx
  const unsigned __int16 *v12; // rdx
  const unsigned __int16 *v13; // rdx
  CopilotHotkeyManager *v14; // rbx
  __int64 v15; // rcx
  const struct winrt::Windows::Foundation::Uri *v16; // rax
  const struct winrt::Windows::Foundation::Uri *v17; // rax
  char IsEnabled; // al
  char *v19; // r8
  const struct winrt::Windows::System::LauncherOptions *v20; // rdx
  const struct winrt::Windows::Foundation::Uri *v21; // rax
  const struct winrt::Windows::Foundation::Uri *v22; // rax
  __int64 v23; // rcx
  void **v24; // rbx
  _QWORD *v25; // rbx
  const WCHAR *v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  void **v30; // rbx
  __int64 v31; // rbx
  _QWORD *v32; // rax
  int v33; // r12d
  __int64 v34; // r15
  __int64 v35; // rcx
  void **v36; // rbx
  __int128 *v37; // r10
  char *v38; // r9
  char *v39; // r8
  _QWORD *v40; // rax
  __int64 *v41; // rdx
  int *v42; // rcx
  char v43; // r15
  __int64 v44; // rcx
  const char *v45; // [rsp+28h] [rbp-130h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_106;
      case 2:
        if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55121036>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55121036>::GetImpl'::`2'::impl) )
          goto LABEL_20;
        v2 = a1[576];
        if ( v2 )
        {
          v3 = *((_QWORD *)a1 + 71);
          if ( !*(_BYTE *)(v3 + 344) )
            goto LABEL_20;
          v4 = *((_QWORD *)a1 + 71);
        }
        else
        {
          v4 = *((_QWORD *)a1 + 71);
          if ( !*(_BYTE *)(v4 + 384) )
            goto LABEL_20;
          v3 = *((_QWORD *)a1 + 71);
        }
        v5 = *(_DWORD *)((-(__int64)(v2 != 0) & 0xFFFFFFFFFFFFFFD8uLL) + v4 + 388);
        *((_QWORD *)a1 + 2) = 0LL;
        v6 = CopilotHotkeyManager::SendWindowMessageOnInvocation((CopilotHotkeyManager *)v3, v5, (HWND *)a1 + 2);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57832725>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID57832725>::GetImpl'::`2'::impl)
          && v6
          && (a1[576] || *(_DWORD *)(v3 + 628) != 4) )
        {
          *((_DWORD *)a1 + 6) = 1;
          *((_DWORD *)a1 + 7) = *(_DWORD *)(v3 + 628);
          v8 = (_QWORD *)(v3 + 208);
          if ( *(_QWORD *)(v3 + 232) > 7uLL )
            v8 = (_QWORD *)*v8;
          *((_QWORD *)a1 + 4) = v8;
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID60732016>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID60732016>::GetImpl'::`2'::impl) )
            v9 = *(_DWORD *)(v3 + 576);
          else
            v9 = 0;
          *((_DWORD *)a1 + 10) = v9;
          CopilotHotkeyManagerTelemetry::CopilotHotkeyInvoked<int,unsigned short const *,unsigned int,unsigned int,_GUID &>(
            (int *)a1 + 10,
            (__int64 *)a1 + 4,
            (__int64)(a1 + 28),
            (__int64)(a1 + 24),
            (__int128 *)(v3 + 180));
        }
        if ( v6 )
          goto LABEL_105;
LABEL_20:
        v10 = (_QWORD *)*((_QWORD *)a1 + 71);
        v11 = a1 + 48;
        if ( a1[576] )
          std::wstring::wstring((__int64)v11, v10 + 39);
        else
          std::wstring::wstring((__int64)v11, v10 + 44);
        if ( *((_QWORD *)a1 + 8) )
        {
          v12 = (const unsigned __int16 *)(a1 + 48);
          if ( *((_QWORD *)a1 + 9) > 7uLL )
            v12 = *(const unsigned __int16 **)v12;
          winrt::param::hstring::hstring((winrt::param::hstring *)(a1 + 88), v12);
          winrt::Windows::Foundation::Uri::Uri(
            (winrt::Windows::Foundation::Uri *)(a1 + 80),
            (const struct winrt::param::hstring *)(a1 + 88));
          winrt::Windows::System::LauncherOptions::LauncherOptions((struct IUnknown *)a1 + 15);
          std::wstring::wstring((__int64)(a1 + 160), v10 + 30);
          v13 = (const unsigned __int16 *)(a1 + 160);
          if ( *((_QWORD *)a1 + 23) > 7uLL )
            v13 = (const unsigned __int16 *)*((_QWORD *)a1 + 20);
          winrt::param::hstring::hstring((winrt::param::hstring *)(a1 + 128), v13);
          winrt::impl::consume_Windows_System_ILauncherOptions2<winrt::Windows::System::LauncherOptions>::TargetApplicationPackageFamilyName(
            (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a1 + 15,
            (_QWORD *)a1 + 16);
          std::wstring::_Tidy_deallocate((_QWORD *)a1 + 20);
          if ( ((unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57343652>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57343652>::GetImpl'::`2'::impl)
             || !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SkipRepeatedModifiers2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SkipRepeatedModifiers2>::GetImpl'::`2'::impl))
            && *(_DWORD *)(*((_QWORD *)a1 + 71) + 576LL) == 111 )
          {
            LockSetForegroundWindow(2 - (a1[576] != 0));
          }
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57343652>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57343652>::GetImpl'::`2'::impl) )
          {
            v14 = (CopilotHotkeyManager *)*((_QWORD *)a1 + 71);
            if ( !CopilotHotkeyManager::IsTargetAppPackageInstalled(v14) )
            {
LABEL_104:
              winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 120));
              winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 80));
              std::wstring::_Tidy_deallocate((_QWORD *)a1 + 6);
LABEL_105:
              CopilotHotkeyManager::UpdatePressAndHoldSignalSentFlag(v7, a1[576]);
              goto LABEL_106;
            }
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID59122885>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID59122885>::GetImpl'::`2'::impl) )
            {
              winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::get_strong(
                (__int64)v14,
                (_QWORD *)a1 + 24);
              winrt::Windows::Foundation::IUnknown::as<IInitializeWithWindow>(
                (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a1 + 15,
                (_QWORD *)a1 + 25);
              CopilotHotkeyManager::CreateHiddenOwnerHwnd(v15, (HWND *)a1 + 26);
              (*(void (**)(void))(**((_QWORD **)a1 + 25) + 24LL))();
              v16 = winrt::Windows::System::Launcher::LaunchUriForResultsAsync(
                      (const struct winrt::Windows::Foundation::Uri *)(a1 + 216),
                      (const struct winrt::Windows::System::LauncherOptions *)(a1 + 80),
                      (__int64 *)a1 + 15);
              *((_QWORD *)a1 + 28) = 0LL;
              *((_QWORD *)a1 + 29) = v16;
              *((_QWORD *)a1 + 30) = 0LL;
              a1[248] = 1;
              *((_WORD *)a1 + 4) = 4;
              if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriResult>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CopilotHotkeyManager *,bool>::promise_type>() )
                return;
LABEL_63:
              winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>::await_resume(
                (__int64)(a1 + 224),
                (winrt *)(a1 + 256));
              winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 28);
              winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 216));
              if ( !(unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View((__int64 *)a1 + 32) )
              {
                v29 = *((_QWORD *)a1 + 71) + 568LL;
                if ( a1[576] )
                {
                  v30 = (void **)(a1 + 264);
                  *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                                v29,
                                (__int64 *)a1 + 33)
                           + 341) = 1;
                }
                else
                {
                  v30 = (void **)(a1 + 272);
                  *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                                v29,
                                (__int64 *)a1 + 34)
                           + 342) = 1;
                }
                tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(v30);
              }
              if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57832725>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID57832725>::GetImpl'::`2'::impl)
                && (a1[576] || *(_DWORD *)(*((_QWORD *)a1 + 71) + 628LL) != 4) )
              {
                v31 = *((_QWORD *)a1 + 71);
                *((_DWORD *)a1 + 70) = CopilotHotkeyManager::m_launchResultToLaunchSuccessTypeMap[(unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View((__int64 *)a1 + 32)];
                *((_DWORD *)a1 + 71) = *(_DWORD *)(v31 + 628);
                v32 = (_QWORD *)(v31 + 208);
                if ( *(_QWORD *)(v31 + 232) > 7uLL )
                  v32 = (_QWORD *)*v32;
                *((_QWORD *)a1 + 36) = v32;
                CopilotHotkeyManagerTelemetry::CopilotHotkeyInvoked<enum IMMERSIVE_HOT_KEY_ID &,unsigned short const *,unsigned int,unsigned int,_GUID &>(
                  (int *)(v31 + 576),
                  (__int64 *)a1 + 36,
                  (__int64)(a1 + 284),
                  (__int64)(a1 + 280),
                  (__int128 *)(v31 + 180));
              }
              winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 256));
              wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>((HWND *)a1 + 26);
              if ( *((_QWORD *)a1 + 25) )
                winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)a1 + 25);
              if ( *((_QWORD *)a1 + 24) )
                winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 24);
              goto LABEL_104;
            }
            v17 = winrt::Windows::System::Launcher::LaunchUriAsync(
                    (const struct winrt::Windows::Foundation::Uri *)(a1 + 296),
                    (const struct winrt::Windows::System::LauncherOptions *)(a1 + 80),
                    (__int64)(a1 + 120));
            *((_QWORD *)a1 + 38) = 0LL;
            *((_QWORD *)a1 + 39) = v17;
            *((_QWORD *)a1 + 40) = 0LL;
            a1[328] = 1;
            *((_WORD *)a1 + 4) = 6;
            if ( winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CAppThumbnailWindow *,winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs const &,enum MultitaskingViewGestureHandlerHelpers::GestureDirection>::promise_type>(
                   (__int64)(a1 + 304),
                   (__int64)a1) )
            {
              return;
            }
LABEL_79:
            v33 = (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_resume((__int64)(a1 + 304));
            winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 38);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 296));
            v34 = *((_QWORD *)a1 + 71);
            v35 = v34 + 568;
            if ( a1[576] )
            {
              v36 = (void **)(a1 + 336);
              *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                            v35,
                            (__int64 *)a1 + 42)
                       + 341) = v33;
            }
            else
            {
              v36 = (void **)(a1 + 344);
              *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                            v35,
                            (__int64 *)a1 + 43)
                       + 342) = v33;
            }
            tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(v36);
            if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57832725>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID57832725>::GetImpl'::`2'::impl)
              || !a1[576] && *(_DWORD *)(v34 + 628) == 4 )
            {
              goto LABEL_104;
            }
            v37 = (__int128 *)(v34 + 180);
            v38 = a1 + 352;
            *((_DWORD *)a1 + 88) = v33;
            v39 = a1 + 356;
            *((_DWORD *)a1 + 89) = *(_DWORD *)(v34 + 628);
            v40 = (_QWORD *)(v34 + 208);
            if ( *(_QWORD *)(v34 + 232) > 7uLL )
              v40 = (_QWORD *)*v40;
            v41 = (__int64 *)(a1 + 360);
            v42 = (int *)(v34 + 576);
          }
          else
          {
            IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID59122885>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID59122885>::GetImpl'::`2'::impl);
            v19 = a1 + 120;
            v20 = (const struct winrt::Windows::System::LauncherOptions *)(a1 + 80);
            if ( IsEnabled )
            {
              v22 = winrt::Windows::System::Launcher::LaunchUriAsync(
                      (const struct winrt::Windows::Foundation::Uri *)(a1 + 368),
                      v20,
                      (__int64)v19);
              *((_QWORD *)a1 + 47) = 0LL;
              *((_QWORD *)a1 + 48) = v22;
              *((_QWORD *)a1 + 49) = 0LL;
              a1[400] = 1;
              *((_WORD *)a1 + 4) = 8;
              if ( winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CAppThumbnailWindow *,winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs const &,enum MultitaskingViewGestureHandlerHelpers::GestureDirection>::promise_type>(
                     (__int64)(a1 + 376),
                     (__int64)a1) )
              {
                return;
              }
LABEL_89:
              v43 = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_resume((__int64)(a1 + 376));
              winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 47);
              winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 368));
              if ( !v43 || !a1[576] && *(_DWORD *)(*((_QWORD *)a1 + 71) + 628LL) == 4 )
                goto LABEL_104;
              v44 = *((_QWORD *)a1 + 71);
              v37 = (__int128 *)(v44 + 180);
              v38 = a1 + 408;
              *((_DWORD *)a1 + 102) = 1;
              v39 = a1 + 412;
              *((_DWORD *)a1 + 103) = *(_DWORD *)(v44 + 628);
              v40 = (_QWORD *)(v44 + 208);
              if ( *(_QWORD *)(v44 + 232) > 7uLL )
                v40 = (_QWORD *)*v40;
              v41 = (__int64 *)(a1 + 416);
            }
            else
            {
              v21 = winrt::Windows::System::Launcher::LaunchUriAsync(
                      (const struct winrt::Windows::Foundation::Uri *)(a1 + 424),
                      v20,
                      (__int64)v19);
              *((_QWORD *)a1 + 54) = 0LL;
              *((_QWORD *)a1 + 55) = v21;
              *((_QWORD *)a1 + 56) = 0LL;
              a1[456] = 1;
              *((_WORD *)a1 + 4) = 10;
              if ( winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CAppThumbnailWindow *,winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs const &,enum MultitaskingViewGestureHandlerHelpers::GestureDirection>::promise_type>(
                     (__int64)(a1 + 432),
                     (__int64)a1) )
              {
                return;
              }
LABEL_96:
              winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_resume((__int64)(a1 + 432));
              winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 54);
              winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 424));
              if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57832725>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID57832725>::GetImpl'::`2'::impl)
                || !a1[576] && *(_DWORD *)(*((_QWORD *)a1 + 71) + 628LL) == 4 )
              {
                goto LABEL_104;
              }
              v44 = *((_QWORD *)a1 + 71);
              v37 = (__int128 *)(v44 + 180);
              v38 = a1 + 464;
              *((_DWORD *)a1 + 116) = 1;
              v39 = a1 + 468;
              *((_DWORD *)a1 + 117) = *(_DWORD *)(v44 + 628);
              v40 = (_QWORD *)(v44 + 208);
              if ( *(_QWORD *)(v44 + 232) > 7uLL )
                v40 = (_QWORD *)*v40;
              v41 = (__int64 *)(a1 + 472);
            }
            v42 = (int *)(v44 + 576);
          }
          *v41 = (__int64)v40;
          CopilotHotkeyManagerTelemetry::CopilotHotkeyInvoked<enum IMMERSIVE_HOT_KEY_ID &,unsigned short const *,unsigned int,unsigned int,_GUID &>(
            v42,
            v41,
            (__int64)v39,
            (__int64)v38,
            v37);
          goto LABEL_104;
        }
        v23 = (__int64)(v10 + 71);
        if ( a1[576] )
        {
          v24 = (void **)(a1 + 480);
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                        v23,
                        (__int64 *)a1 + 60)
                   + 281) = 1;
        }
        else
        {
          v24 = (void **)(a1 + 488);
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                        v23,
                        (__int64 *)a1 + 61)
                   + 282) = 1;
        }
        tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(v24);
        v25 = a1 + 496;
        std::wstring::wstring(
          (__int64)(a1 + 496),
          (__int64)L"No target URI found in TrySendingCopilotHardwareKeyLongPressSignal() with ");
        v26 = L"true";
        if ( !a1[576] )
          v26 = L"false";
        std::wstring::append((__int64)(a1 + 496), (__int64)v26);
        if ( *((_QWORD *)a1 + 65) > 7uLL )
          v25 = (_QWORD *)*v25;
        *((_QWORD *)a1 + 66) = v25;
        CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const *>((const WCHAR **)a1 + 66);
        wil::details::in1diag3::Log_HrMsg(
          retaddr,
          (void *)0x8B8,
          (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
          (const char *)0x8000FFFFLL,
          (unsigned __int64)"No target uri found.",
          v45);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57832725>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID57832725>::GetImpl'::`2'::impl)
          && (a1[576] || *(_DWORD *)(*((_QWORD *)a1 + 71) + 628LL) != 4) )
        {
          v27 = *((_QWORD *)a1 + 71);
          *((_DWORD *)a1 + 134) = 0;
          *((_DWORD *)a1 + 135) = *(_DWORD *)(v27 + 628);
          v28 = (_QWORD *)(v27 + 208);
          if ( *(_QWORD *)(v27 + 232) > 7uLL )
            v28 = (_QWORD *)*v28;
          *((_QWORD *)a1 + 68) = v28;
          CopilotHotkeyManagerTelemetry::CopilotHotkeyInvoked<enum IMMERSIVE_HOT_KEY_ID &,unsigned short const *,unsigned int,unsigned int,_GUID &>(
            (int *)(v27 + 576),
            (__int64 *)a1 + 68,
            (__int64)(a1 + 540),
            (__int64)(a1 + 536),
            (__int128 *)(v27 + 180));
        }
        std::wstring::_Tidy_deallocate((_QWORD *)a1 + 62);
        std::wstring::_Tidy_deallocate((_QWORD *)a1 + 6);
LABEL_106:
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0x250);
        break;
      case 4:
        goto LABEL_63;
      case 5:
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 28);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 216));
        wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>((HWND *)a1 + 26);
        if ( *((_QWORD *)a1 + 25) )
          winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)a1 + 25);
        if ( *((_QWORD *)a1 + 24) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 24);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 120));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 80));
        std::wstring::_Tidy_deallocate((_QWORD *)a1 + 6);
        goto LABEL_106;
      case 6:
        goto LABEL_79;
      case 7:
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 38);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 296));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 120));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 80));
        std::wstring::_Tidy_deallocate((_QWORD *)a1 + 6);
        goto LABEL_106;
      case 8:
        goto LABEL_89;
      case 9:
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 47);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 368));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 120));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 80));
        std::wstring::_Tidy_deallocate((_QWORD *)a1 + 6);
        goto LABEL_106;
      case 0xA:
        goto LABEL_96;
      case 0xB:
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 54);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 424));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 120));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 80));
        std::wstring::_Tidy_deallocate((_QWORD *)a1 + 6);
        goto LABEL_106;
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
