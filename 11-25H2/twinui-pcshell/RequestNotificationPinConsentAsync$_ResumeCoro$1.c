/*
 * XREFs of RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805CC3C0
 * Callers:
 *     RequestNotificationPinConsentAsync$_InitCoro$2 @ 0x1805CC2A8 (RequestNotificationPinConsentAsync$_InitCoro$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1800A2F70 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 *     ??$?0W4EventOptions@wil@@@?$shared_any_t@V?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAA@$$QEAW4EventOptions@1@@Z @ 0x1800A32A4 (--$-0W4EventOptions@wil@@@-$shared_any_t@V-$event_t@V-$shared_storage@V-$unique_any_t@V-$event_t.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800C40C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@AEBU?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@3@@Z @ 0x180242D50 (-Completed@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UTileCollection@Start.c)
 *     ?CreateToastNotifier@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x1802BF390 (-CreateToastNotifier@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@AEBUhstring@par.c)
 *     ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x1802CF7AC (-value@-$optional@_N@std@@QEGAAAEA_NXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031B410 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@experimental@std@@@Z @ 0x1803296AC (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@Foundation.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x18032BE28 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ @ 0x180331794 (-await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x1803318B8 (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180331904 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180331904.c)
 *     ??1promise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@UEAA@XZ @ 0x180341BD0 (--1promise_type@-$coroutine_traits@U-$IAsyncOperation@UValueSet@Collections@Foundation@Windows@w.c)
 *     ?make@?$reference_traits@_N@impl@winrt@@SA@_N@Z @ 0x18049A328 (-make@-$reference_traits@_N@impl@winrt@@SA@_N@Z.c)
 *     ??0ToastNotification@Notifications@UI@Windows@winrt@@QEAA@AEBUXmlDocument@Dom@Xml@Data@34@@Z @ 0x180561F6C (--0ToastNotification@Notifications@UI@Windows@winrt@@QEAA@AEBUXmlDocument@Dom@Xml@Data@34@@Z.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_3e03a3c31af621875be24bd5f43287a8___ @ 0x1805C9788 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--ToastNotificati.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_48a0e4ee9c2bd8c262121ffa5f26b805___ @ 0x1805C97E4 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--To_ea_1805C97E4.c)
 *     winrt::delegate__::delegate____lambda_5379dc71073ba96e17a1dbc2c7eea796___ @ 0x1805C9840 (winrt--delegate__--delegate____lambda_5379dc71073ba96e17a1dbc2c7eea796___.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_b9fb6b4cac821505fcfb549513b2a1e2___ @ 0x1805C98EC (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--To_ea_1805C98EC.c)
 *     ??$PinConsentNotificationCompleted@_N_N@PinManagerTelemetry@@SAX$$QEA_N0@Z @ 0x1805C9A1C (--$PinConsentNotificationCompleted@_N_N@PinManagerTelemetry@@SAX$$QEA_N0@Z.c)
 *     ??$make_shared@V?$optional@_N@std@@$$V@std@@YA?AV?$shared_ptr@V?$optional@_N@std@@@0@XZ @ 0x1805C9F64 (--$make_shared@V-$optional@_N@std@@$$V@std@@YA-AV-$shared_ptr@V-$optional@_N@std@@@0@XZ.c)
 *     ??1?$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@?$abi@UIToastNotification@Notifications@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x1805CA0CC (--1-$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@-$abi@UIToastNot.c)
 *     ??1?$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@?$abi@UIToastNotification@Notifications@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGA@AA@impl@winrt@@QEAA@XZ @ 0x1805CA128 (--1-$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@-$a_ea_1805CA128.c)
 *     ??1?$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@?$abi@UIToastNotification@Notifications@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAA@XZ @ 0x1805CA184 (--1-$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@-$a_ea_1805CA184.c)
 *     ??1?$tuple@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@V123@@std@@QEAA@XZ @ 0x1805CA208 (--1-$tuple@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@V123@@std@@.c)
 *     std::tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_______::_tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_______ @ 0x1805CA230 (std--tuple_std--filesystem--path_wil--unique_any_t_wil--details--unique_storage_wil--details--ha.c)
 *     wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle___::_unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle___ @ 0x1805CA264 (wil--details--unique_storage_wil--details--handle_invalid_resource_policy_void_(__cdecl_)(void__.c)
 *     wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_____::operator_ @ 0x1805CA2B0 (wil--unique_any_t_wil--details--unique_storage_wil--details--handle_invalid_resourc_ea_1805CA2B0.c)
 *     ?Activated@?$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UToastNotification@Notifications@UI@Windows@winrt@@UIInspectable@Foundation@45@@Foundation@Windows@3@@Z @ 0x1805CA5A0 (-Activated@-$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notificatio.c)
 *     _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1805CA7C8 (_anonymous_namespace_--CreateConsentToastXmlDocument.c)
 *     ?Dismissed@?$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UToastNotification@Notifications@UI@Windows@winrt@@UToastDismissedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1805CB760 (-Dismissed@-$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notificatio.c)
 *     ?Failed@?$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UToastNotification@Notifications@UI@Windows@winrt@@UToastFailedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1805CB7D8 (-Failed@-$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notifications@.c)
 *     _anonymous_namespace_::GetLogoFileFromContent @ 0x1805CB8A0 (_anonymous_namespace_--GetLogoFileFromContent.c)
 *     _anonymous_namespace_::GetPromptText @ 0x1805CB94C (_anonymous_namespace_--GetPromptText.c)
 *     ?PinConsentNotificationShowing@PinManagerTelemetry@@SAXXZ @ 0x1805CC0C4 (-PinConsentNotificationShowing@PinManagerTelemetry@@SAXXZ.c)
 *     ?callback@?$cancellation_token@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@impl@winrt@@QEBAX$$QEAU?$delegate@$$V@3@@Z @ 0x1805CCD98 (-callback@-$cancellation_token@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=20 #try_helpers=1
void __fastcall RequestNotificationPinConsentAsync__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // r13
  __int64 v3; // rdx
  const unsigned __int16 *v4; // rbx
  __int64 v5; // r8
  __int64 **v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  const struct winrt::impl::slim_source_location *v15; // rax
  char v16; // cl
  char v17; // dl
  void (__fastcall **v18)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  _BYTE pExceptionObject[24]; // [rsp+80h] [rbp-148h] BYREF
  __int64 *v23; // [rsp+98h] [rbp-130h]
  __int64 v24; // [rsp+A0h] [rbp-128h]
  char *v25; // [rsp+A8h] [rbp-120h]
  std::_Ref_count_base *v26; // [rsp+B0h] [rbp-118h]
  const unsigned __int16 *v27; // [rsp+B8h] [rbp-110h]
  unsigned __int64 v28; // [rsp+D0h] [rbp-F8h]
  const unsigned __int16 *v29; // [rsp+D8h] [rbp-F0h]
  const unsigned __int16 *v30; // [rsp+F0h] [rbp-D8h]

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_42;
    case 2:
      anonymous_namespace_::GetPromptText((_QWORD *)(a1 + 16), *(_QWORD **)(a1 + 625));
      v3 = *(_QWORD *)(a1 + 625) + (*(_BYTE *)(*(_QWORD *)(a1 + 625) + 104LL) != 0 ? 88LL : 32LL);
      v4 = (const unsigned __int16 *)(a1 + 64);
      *(_OWORD *)(a1 + 64) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
      *(_QWORD *)(a1 + 88) = 7LL;
      *(_WORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 96) = -1LL;
      if ( *(_BYTE *)(v3 + 16) )
      {
        anonymous_namespace_::GetLogoFileFromContent(a1 + 104, v3);
        std::wstring::operator=((char *)(a1 + 64), (char *)(a1 + 112), v5);
        wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle_____::operator_(
          (void **)(a1 + 96),
          (void **)(a1 + 104));
        std::tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle_______::_tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle_______(a1 + 104);
      }
      v28 = *(_QWORD *)(a1 + 88);
      if ( v28 > 7 )
      {
        v4 = *(const unsigned __int16 **)v4;
        v27 = v4;
      }
      v29 = *(const unsigned __int16 **)(a1 + 16);
      v30 = *(const unsigned __int16 **)(a1 + 40);
      anonymous_namespace_::CreateConsentToastXmlDocument((struct IUnknown *)(a1 + 144), v30, v29, v4);
      winrt::Windows::UI::Notifications::ToastNotification::ToastNotification(
        (winrt::Windows::UI::Notifications::ToastNotification *)(a1 + 152),
        (const struct winrt::Windows::Data::Xml::Dom::XmlDocument *)(a1 + 144));
      *(_OWORD *)(a1 + 160) = 0LL;
      std::make_shared<std::optional<bool>,>(a1 + 160);
      v6 = (__int64 **)(a1 + 176);
      *(_OWORD *)(a1 + 176) = 0LL;
      *(_DWORD *)(a1 + 192) = 1;
      ____0W4EventOptions_wil_____shared_any_t_V__event_t_V__shared_storage_V__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil___wil___details_wil__Uerr_exception_policy_3__wil___wil__QEAA___QEAW4EventOptions_1__Z(
        (_QWORD *)(a1 + 176),
        (unsigned int *)(a1 + 192));
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
        (_QWORD *)(a1 + 208),
        (_QWORD *)(a1 + 160));
      *(_QWORD *)(a1 + 224) = 0LL;
      *(_QWORD *)(a1 + 232) = 0LL;
      v24 = *(_QWORD *)(a1 + 184);
      if ( v24 )
      {
        v24 = *(_QWORD *)(a1 + 184);
        _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
      }
      v23 = *v6;
      *(_QWORD *)(a1 + 224) = v23;
      v24 = *(_QWORD *)(a1 + 184);
      *(_QWORD *)(a1 + 232) = v24;
      winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_3e03a3c31af621875be24bd5f43287a8___(
        a1 + 200,
        v7);
      winrt::impl::consume_Windows_UI_Notifications_IToastNotification<winrt::Windows::UI::Notifications::IToastNotification>::Activated(
        (__int64 **)(a1 + 152),
        (_QWORD *)(a1 + 240),
        v8,
        (__int64 *)(a1 + 200));
      if ( *(_QWORD *)(a1 + 200) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 200));
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
        (_QWORD *)(a1 + 264),
        (_QWORD *)(a1 + 160));
      *(_QWORD *)(a1 + 280) = 0LL;
      *(_QWORD *)(a1 + 288) = 0LL;
      v24 = *(_QWORD *)(a1 + 184);
      if ( v24 )
      {
        v24 = *(_QWORD *)(a1 + 184);
        _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
      }
      v23 = *v6;
      *(_QWORD *)(a1 + 280) = v23;
      v24 = *(_QWORD *)(a1 + 184);
      *(_QWORD *)(a1 + 288) = v24;
      winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_48a0e4ee9c2bd8c262121ffa5f26b805___(
        a1 + 256,
        v9);
      winrt::impl::consume_Windows_UI_Notifications_IToastNotification<winrt::Windows::UI::Notifications::IToastNotification>::Dismissed(
        (__int64 **)(a1 + 152),
        (_QWORD *)(a1 + 296),
        v10,
        (__int64 *)(a1 + 256));
      if ( *(_QWORD *)(a1 + 256) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 256));
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
        (_QWORD *)(a1 + 320),
        (_QWORD *)(a1 + 160));
      *(_QWORD *)(a1 + 336) = 0LL;
      *(_QWORD *)(a1 + 344) = 0LL;
      v24 = *(_QWORD *)(a1 + 184);
      if ( v24 )
      {
        v24 = *(_QWORD *)(a1 + 184);
        _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
      }
      v23 = *v6;
      *(_QWORD *)(a1 + 336) = v23;
      v24 = *(_QWORD *)(a1 + 184);
      *(_QWORD *)(a1 + 344) = v24;
      winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_b9fb6b4cac821505fcfb549513b2a1e2___(
        a1 + 312,
        v11);
      winrt::impl::consume_Windows_UI_Notifications_IToastNotification<winrt::Windows::UI::Notifications::IToastNotification>::Failed(
        (__int64 **)(a1 + 152),
        (_QWORD *)(a1 + 352),
        v12,
        (__int64 *)(a1 + 312));
      if ( *(_QWORD *)(a1 + 312) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 312));
      winrt::param::hstring::hstring((winrt::param::hstring *)(a1 + 368), L"Windows.SystemToast.PinConsent");
      winrt::Windows::UI::Notifications::ToastNotificationManager::CreateToastNotifier(
        (const struct winrt::param::hstring *)(a1 + 400),
        (__int64 *)(a1 + 368));
      winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::WindowsUdk::UI::StartScreen::TileCollection>::Completed(
        (__int64 *)(a1 + 400),
        (__int64 *)(a1 + 152));
      *(_QWORD *)(a1 + 528) = a1 - 112;
      *(_QWORD *)(a1 + 408) = a1 - 112;
      *(_QWORD *)(a1 + 424) = *(_QWORD *)(a1 + 400);
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 424));
      *(_QWORD *)(a1 + 432) = *(_QWORD *)(a1 + 152);
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 432));
      winrt::delegate__::delegate____lambda_5379dc71073ba96e17a1dbc2c7eea796___(
        (_QWORD *)(a1 + 416),
        (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 424));
      winrt::impl::cancellation_token<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type>::callback(
        a1 + 408,
        a1 + 416);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 416));
      PinManagerTelemetry::PinConsentNotificationShowing(v13);
      v23 = *v6;
      if ( v23 )
      {
        v23 = *v6;
        v14 = *v23;
      }
      else
      {
        v14 = 0LL;
      }
      *(_QWORD *)(a1 + 440) = 0LL;
      *(_QWORD *)(a1 + 448) = 0LL;
      *(_QWORD *)(a1 + 456) = 0LL;
      *(_QWORD *)(a1 + 464) = v14;
      *(_DWORD *)(a1 + 472) = 0;
      *(_QWORD *)(a1 + 480) = 0LL;
      *(_DWORD *)(a1 + 488) = 0;
      if ( *(_DWORD *)(a1 - 16) == 2 )
      {
        v15 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 544);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v15);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      if ( winrt::impl::signal_awaiter::await_ready((HANDLE *)(a1 + 440)) )
        goto LABEL_28;
      *v2 = 6;
      winrt::impl::signal_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type>(
        (__int64 *)(a1 + 440),
        a1);
      return;
    case 6:
LABEL_28:
      winrt::impl::signal_awaiter::await_resume((winrt::impl::signal_awaiter *)(a1 + 440));
      winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 440));
      v25 = *(char **)(a1 + 160);
      if ( v25[1] )
      {
        v25 = *(char **)(a1 + 160);
        v16 = *v25;
      }
      else
      {
        v16 = 0;
      }
      *(_BYTE *)(a1 + 496) = v16;
      v25 = *(char **)(a1 + 160);
      *(_BYTE *)(a1 + 497) = v25[1];
      PinManagerTelemetry::PinConsentNotificationCompleted<bool,bool>((char *)(a1 + 497), (char *)(a1 + 496));
      v25 = *(char **)(a1 + 160);
      if ( v25[1] )
      {
        v25 = *(char **)(a1 + 160);
        v17 = *(_BYTE *)std::optional<bool>::value((__int64)v25);
      }
      else
      {
        v17 = 0;
      }
      v18 = *winrt::impl::reference_traits<bool>::make(
               (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))(a1 + 568),
               v17);
      if ( v18 )
      {
        *(_QWORD *)(a1 + 576) = 0LL;
        *(_DWORD *)(a1 + 584) = 0;
        *(_QWORD *)(a1 + 592) = 0LL;
        *(_QWORD *)(a1 + 600) = 0LL;
        v20 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))*v18)(
                v18,
                &winrt::impl::guid_v<winrt::Windows::Foundation::IReference<bool>>,
                a1 + 576);
        winrt::check_hresult((int *)(a1 + 608), v20, a1 + 584);
        v19 = *(_QWORD *)(a1 + 576);
      }
      else
      {
        v19 = 0LL;
      }
      *(_QWORD *)(a1 + 504) = v19;
      if ( *(_QWORD *)(a1 + 568) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 568));
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(
        (__int64 *)(*(_QWORD *)(a1 + 528) + 104LL),
        (__int64 *)(a1 + 504));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 504));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 400));
      __1__event_revoker_UIToastNotification_Notifications_UI_Windows_winrt___MP8type___abi_UIToastNotification_Notifications_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 352));
      __1__event_revoker_UIToastNotification_Notifications_UI_Windows_winrt___MP8type___abi_UIToastNotification_Notifications_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 296));
      __1__event_revoker_UIToastNotification_Notifications_UI_Windows_winrt___MP8type___abi_UIToastNotification_Notifications_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 240));
      std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(a1 + 176);
      v26 = *(std::_Ref_count_base **)(a1 + 168);
      if ( v26 )
      {
        v26 = *(std::_Ref_count_base **)(a1 + 168);
        std::_Ref_count_base::_Decref(v26);
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 152));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 144));
      wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle___::_unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle___((void **)(a1 + 96));
      std::wstring::_Tidy_deallocate((void **)(a1 + 64));
      std::tuple<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::~tuple<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>(a1 + 16);
      *(_QWORD *)(a1 + 512) = a1 - 112;
      *v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              (__int64 *)(a1 + 512),
              v21) )
        goto LABEL_42;
      return;
    case 7:
      winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 440));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 400));
      __1__event_revoker_UIToastNotification_Notifications_UI_Windows_winrt___MP8type___abi_UIToastNotification_Notifications_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 352));
      __1__event_revoker_UIToastNotification_Notifications_UI_Windows_winrt___MP8type___abi_UIToastNotification_Notifications_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 296));
      __1__event_revoker_UIToastNotification_Notifications_UI_Windows_winrt___MP8type___abi_UIToastNotification_Notifications_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 240));
      std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(a1 + 176);
      v26 = *(std::_Ref_count_base **)(a1 + 168);
      if ( v26 )
      {
        v26 = *(std::_Ref_count_base **)(a1 + 168);
        std::_Ref_count_base::_Decref(v26);
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 152));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 144));
      wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle___::_unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle___((void **)(a1 + 96));
      std::wstring::_Tidy_deallocate((void **)(a1 + 64));
      std::tuple<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::~tuple<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>(a1 + 16);
LABEL_42:
      std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type::~promise_type((__int64 *)(a1 - 112));
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x2F0);
      break;
    default:
      __debugbreak();
      break;
  }
}
