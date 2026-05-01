/*
 * XREFs of CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x180360D40
 * Callers:
 *     CActionCenterExperienceManager::ShowRequested$_InitCoro$2 @ 0x180360CD8 (CActionCenterExperienceManager--ShowRequested$_InitCoro$2.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180063FE8 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InputDeviceKindToInputTypeConverter@@YA?AW4InputType@NotificationCenterUITelemetry@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801E8DE4 (-InputDeviceKindToInputTypeConverter@@YA-AW4InputType@NotificationCenterUITelemetry@@W4InputDevi.c)
 *     ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180223CCC (-Size@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?Run@?$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180227A18 (-Run@-$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIIm.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180229FFC (-Result@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequ.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x18024634C (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180246FE4 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     ?WindowAction@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802470A0 (-WindowAction@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@S.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031CCF0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180352F78 (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ??$NotificationCenterLaunchMonitor@K@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAX$$QEAK@Z @ 0x18035C6E8 (--$NotificationCenterLaunchMonitor@K@NotificationCenterTelemetry@NotificationCenterUITelemetry@@.c)
 *     ??$Start@AEAW4InvokeMethod@NotificationCenterUITelemetry@@AEAW4InputType@2@W4StateOnInvoke@2@@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@AEAW4InvokeMethod@2@AEAW4InputType@2@$$QEAW4StateOnInvoke@2@@Z @ 0x18035C97C (--$Start@AEAW4InvokeMethod@NotificationCenterUITelemetry@@AEAW4InputType@2@W4StateOnInvoke@2@@La.c)
 *     ??1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18035D3C8 (--1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?AnimationData@?$consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties@UIShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18035DAB0 (-AnimationData@-$consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties@UIShellViewAnimationP.c)
 *     ?AnimationProperties@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions2@UShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18035DBB8 (-AnimationProperties@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions2@UShowShellViewOptions@.c)
 *     ?GetMonitorFromLastInvocationPoint@CActionCenterExperienceManager@@AEAAPEAUHMONITOR__@@XZ @ 0x18035EA20 (-GetMonitorFromLastInvocationPoint@CActionCenterExperienceManager@@AEAAPEAUHMONITOR__@@XZ.c)
 *     ?WorkAreaOffset@?$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18035F07C (-WorkAreaOffset@-$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManag.c)
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1803609C0 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180361878 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@QEAA_NXZ @ 0x180362B98 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@QEAA_NXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x180362DB4 (-unconditional_release_ref@-$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
void __fastcall CActionCenterExperienceManager::ShowRequested__ResumeCoro_1(char *a1)
{
  volatile int *v2; // rdx
  __int64 v3; // r8
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  __int64 *v6; // rax
  int v7; // r15d
  char *v8; // r15
  _QWORD *v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // r13
  _QWORD *v15; // rax
  __int64 *v16; // rax
  _QWORD *v17; // rax
  __int64 *v18; // rax
  unsigned int *v19; // rdx
  _QWORD *v20; // rax
  __int64 *v21; // rax
  int *v22; // rax
  int v23; // xmm0_4
  int v24; // xmm1_4
  __int64 v25; // rax
  CActionCenterExperienceManager *v26; // rbx
  int v27; // eax
  HMONITOR MonitorFromLastInvocationPoint; // rax
  const char *v29; // r9
  const char *v30; // r9
  int v31; // [rsp+20h] [rbp-D8h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  try
  {
    LOWORD(v31) = *((_WORD *)a1 + 4);
    switch ( (__int16)v31 )
    {
      case -1:
      case 3:
        goto LABEL_31;
      case 2:
        *((_QWORD *)a1 + 74) = a1 + 9;
        *((_QWORD *)a1 + 72) = a1 + 9;
        winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
          (__int64 **)(a1 + 617),
          (_QWORD *)a1 + 2);
        *((_QWORD *)a1 + 3) = 0LL;
        v3 = *(_QWORD *)(a1 + 609);
        if ( !v3 )
          goto LABEL_10;
        *((_QWORD *)a1 + 3) = v3;
        v4 = *(_QWORD *)(v3 + 104);
        break;
      case 4:
        goto LABEL_15;
      case 5:
        if ( *((_QWORD *)a1 + 3) )
          winrt::com_ptr<CActionCenterExperienceManager>::unconditional_release_ref();
        goto LABEL_30;
      default:
        __debugbreak();
        return;
    }
    while ( v4 >= 0 )
    {
      if ( (_DWORD)v4 != 0x7FFFFFFF )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 104), v4 + 1, v4);
        if ( v5 != v4 )
          continue;
      }
      goto LABEL_10;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v4 + 16), v2);
LABEL_10:
    *((_QWORD *)a1 + 4) = v3 + 840;
    *((_QWORD *)a1 + 5) = 0LL;
    *((_WORD *)a1 + 4) = 4;
    if ( !winrt::impl::apartment_awaiter::await_suspend((__int64 **)a1 + 4, (void (*)(void *, void *))a1) )
    {
LABEL_15:
      winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 32));
      v6 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
             (__int64 **)(*((_QWORD *)a1 + 74) + 608LL),
             (_QWORD *)a1 + 6);
      v7 = winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowAction(v6);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 48));
      *((_DWORD *)a1 + 14) = InputDeviceKindToInputTypeConverter(v7);
      *((_DWORD *)a1 + 15) = 2;
      v8 = a1 + 9;
      *((_QWORD *)a1 + 74) = a1 + 9;
      v9 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
             (__int64 **)(a1 + 617),
             (_QWORD *)a1 + 8);
      v10 = *winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions2<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions>::AnimationProperties(
               (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v9,
               (_QWORD *)a1 + 9);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 64));
      if ( v10 )
      {
        v11 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                (__int64 **)(*((_QWORD *)a1 + 72) + 608LL),
                (_QWORD *)a1 + 10);
        v12 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions2<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions>::AnimationProperties(
                (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v11,
                (_QWORD *)a1 + 11);
        v13 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size(v12);
        v14 = *(_QWORD **)(a1 + 609);
        v14[92] = v13;
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 80));
        *((_QWORD *)a1 + 74) = v8;
        v15 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                (__int64 **)(a1 + 617),
                (_QWORD *)a1 + 12);
        v16 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions2<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions>::AnimationProperties(
                (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v15,
                (_QWORD *)a1 + 13);
        v14[93] = *winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties<winrt::WindowsUdk::UI::Shell::IShellViewAnimationProperties>::AnimationData(
                     v16,
                     (_QWORD *)a1 + 14);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 104));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 96));
        *((_QWORD *)a1 + 74) = v8;
        v17 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                (__int64 **)(a1 + 617),
                (_QWORD *)a1 + 16);
        v18 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions2<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions>::AnimationProperties(
                (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v17,
                (_QWORD *)a1 + 17);
        v14[94] = winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties<winrt::WindowsUdk::UI::Shell::IShellViewAnimationProperties>::AnimationData(
                    v18,
                    (_QWORD *)a1 + 18)[1];
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 136));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 128));
        v19 = (unsigned int *)(a1 + 60);
        *((_DWORD *)a1 + 15) = 3;
      }
      else
      {
        v20 = *(_QWORD **)(a1 + 609);
        v20[92] = 0LL;
        v20[93] = 0LL;
        v20[94] = 0LL;
        v19 = (unsigned int *)(a1 + 60);
      }
      *((_DWORD *)a1 + 40) = 2;
      NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::Start<enum NotificationCenterUITelemetry::InvokeMethod &,enum NotificationCenterUITelemetry::InputType &,enum NotificationCenterUITelemetry::StateOnInvoke>(
        (struct wil::details::IFailureCallback *)(a1 + 176),
        v19,
        (unsigned int *)a1 + 14,
        (unsigned int *)a1 + 40);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_38762814>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_38762814>::GetImpl'::`2'::impl) )
      {
        *((_QWORD *)a1 + 74) = v8;
        v21 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                (__int64 **)(a1 + 617),
                (_QWORD *)a1 + 64);
        v22 = (int *)winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::WorkAreaOffset(
                       v21,
                       (_QWORD *)a1 + 65);
        v23 = *v22;
        v24 = v22[1];
        v25 = *(_QWORD *)(a1 + 609);
        *(_DWORD *)(v25 + 856) = v23;
        *(_DWORD *)(v25 + 860) = v24;
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 512));
      }
      v26 = *(CActionCenterExperienceManager **)(a1 + 609);
      v27 = CActionCenterExperienceManager::Show(v26);
      if ( v27 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x344,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v27,
          v31);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_38762814>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_38762814>::GetImpl'::`2'::impl) )
      {
        MonitorFromLastInvocationPoint = CActionCenterExperienceManager::GetMonitorFromLastInvocationPoint(v26);
        if ( MonitorFromLastInvocationPoint == (HMONITOR)-1LL )
          wil::details::in1diag3::_Throw_GetLastError(
            retaddr,
            (void *)0x34A,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            v29);
        *((_DWORD *)a1 + 132) = 40;
        *(_OWORD *)(a1 + 532) = 0LL;
        *(_OWORD *)(a1 + 548) = 0LL;
        *((_DWORD *)a1 + 141) = 0;
        if ( !GetMonitorInfoW(MonitorFromLastInvocationPoint, (LPMONITORINFO)(a1 + 528)) )
          wil::details::in1diag3::_Throw_GetLastError(
            retaddr,
            (void *)0x34C,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            v30);
        *((_DWORD *)a1 + 142) = *((_DWORD *)a1 + 141) & 1;
        NotificationCenterUITelemetry::NotificationCenterTelemetry::NotificationCenterLaunchMonitor<unsigned long>((_DWORD *)a1 + 142);
      }
      wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 176);
      winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result((__int64 *)(*((_QWORD *)a1 + 72) + 608LL));
      winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::Run((__int64 *)a1 + 2);
      NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::~LaunchActionCenter((NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter *)(a1 + 176));
      if ( *((_QWORD *)a1 + 3) )
        winrt::com_ptr<CActionCenterExperienceManager>::unconditional_release_ref();
LABEL_30:
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
LABEL_31:
      *((_QWORD *)a1 + 74) = a1 + 9;
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 617));
      if ( *((_WORD *)a1 + 5) )
        operator delete(a1, (const struct std::nothrow_t *)0x280);
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
