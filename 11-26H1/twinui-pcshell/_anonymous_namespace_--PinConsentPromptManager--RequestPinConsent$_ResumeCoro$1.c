/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x1805E84D0
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent @ 0x1805E890C (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180288564 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x180328DF0 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ??$PinConsentPromptCompleted@_N_N@PinManagerTelemetry@@SAX$$QEA_N0@Z @ 0x1805DFC24 (--$PinConsentPromptCompleted@_N_N@PinManagerTelemetry@@SAX$$QEA_N0@Z.c)
 *     ??$PinConsentPromptRequested@PEBG@PinManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x1805DFC94 (--$PinConsentPromptRequested@PEBG@PinManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@@experimental@std@@@Z @ 0x1805E12BC (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_1805E12BC.c)
 *     ??$emplace_back@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@?$vector@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@2@@std@@QEAAAEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@1@$$QEAU21@@Z @ 0x1805E18F4 (--$emplace_back@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReferen.c)
 *     _lambda_84c775889c05b89f12ed6d0ff428b333_::__lambda_84c775889c05b89f12ed6d0ff428b333_ @ 0x1805E3160 (_lambda_84c775889c05b89f12ed6d0ff428b333_--__lambda_84c775889c05b89f12ed6d0ff428b333_.c)
 *     wil::details::lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___::_lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___ @ 0x1805E32D4 (wil--details--lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___--_lambda_call__lambda_84c7.c)
 *     ??1?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAA@XZ @ 0x1805E33A8 (--1-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReference@_N@Foundati.c)
 *     std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type::_promise_type @ 0x1805E3A14 (std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncOperation_win_ea_1805E3A14.c)
 *     ?GetBoolean@?$consume_Windows_Foundation_IPropertyValue@U?$IReference@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805E5D10 (-GetBoolean@-$consume_Windows_Foundation_IPropertyValue@U-$IReference@_N@Foundation@Windows@winr.c)
 *     _anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation @ 0x1805E7218 (_anonymous_namespace_--PinConsentPromptManager--IsPromptOutstandingForPinOperation.c)
 *     ?PinConsentPromptShown@PinManagerTelemetry@@SAXXZ @ 0x1805E7D90 (-PinConsentPromptShown@PinManagerTelemetry@@SAXXZ.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x1805EC9E4 (-await_resume@-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@winrt@@@Fou.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::final_suspend_awaiter::await_suspend @ 0x1805ECA9C (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_1805ECA9C.c)
 *     ?RequestNotificationPinConsentAsync@@YA?AU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@Z @ 0x1805F0D0C (-RequestNotificationPinConsentAsync@@YA-AU-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
void __fastcall anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__ResumeCoro_1(__int64 a1)
{
  __int64 v2; // r14
  __int64 *v3; // rcx
  __int64 *v4; // r12
  RTL_SRWLOCK *v5; // r15
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  volatile signed __int32 *Ptr; // rax
  PVOID v11; // rcx
  volatile signed __int32 *v12; // r8
  _QWORD *v13; // r9
  _QWORD *v14; // r8
  const struct winrt::impl::slim_source_location *v15; // rax
  char Boolean; // al
  std::_Ref_count_base *v17; // rcx
  int v18; // [rsp+20h] [rbp-E8h]
  _QWORD *v19; // [rsp+28h] [rbp-E0h]
  _BYTE pExceptionObject[24]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v21; // [rsp+90h] [rbp-78h]
  __int64 v22; // [rsp+98h] [rbp-70h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v2 = a1 + 8;
  LOWORD(v18) = *(_WORD *)(a1 + 8);
  switch ( (__int16)v18 )
  {
    case -1:
    case 1:
    case 3:
      goto LABEL_17;
    case 2:
      v19 = (_QWORD *)(a1 + 320);
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
        (_QWORD *)(a1 + 24),
        *(_QWORD **)(a1 + 320));
      *(_QWORD *)(a1 + 16) = *(_QWORD *)PinRequestContext::RequestorBestAvailableAppId(*v3, (_OWORD *)(a1 + 40));
      PinManagerTelemetry::PinConsentPromptRequested<unsigned short const *>((const WCHAR **)(a1 + 16));
      if ( *(_QWORD *)(a1 + 32) )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)(a1 + 32));
      v4 = (__int64 *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = 0LL;
      *(_QWORD *)(a1 + 64) = 0LL;
      v5 = *(RTL_SRWLOCK **)(v2 + 304);
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 64), v5 + 2);
      v6 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
             (_QWORD *)(a1 + 72),
             (_QWORD *)(a1 + 320));
      if ( anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation((__int64)v5, v7, v6) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1DC,
          (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
          (const char *)0x8000000ELL,
          v18);
      v8 = (__int64 *)RequestNotificationPinConsentAsync(a1 + 88, *(_QWORD *)(a1 + 336));
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 56), v8);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
        (_QWORD *)(a1 + 96),
        v19);
      v21 = *v4;
      *(_QWORD *)(a1 + 112) = v21;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 112));
      std::vector<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>::emplace_back<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>(
        &v5[3].Ptr,
        (_QWORD *)(a1 + 96));
      std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::~pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>(a1 + 96);
      PinManagerTelemetry::PinConsentPromptShown(v9);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 64));
      *(_QWORD *)(a1 + 128) = 0LL;
      *(_QWORD *)(a1 + 136) = 0LL;
      *(_QWORD *)(a1 + 144) = 0LL;
      *(_QWORD *)(a1 + 152) = 0LL;
      Ptr = (volatile signed __int32 *)v5[1].Ptr;
      v11 = 0LL;
      v12 = 0LL;
      if ( Ptr )
      {
        v11 = v5->Ptr;
        _InterlockedIncrement(Ptr + 3);
        v12 = Ptr;
      }
      *(_QWORD *)(a1 + 160) = v11;
      *(_QWORD *)(a1 + 168) = v12;
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
        (_QWORD *)(a1 + 176),
        v19);
      *(_QWORD *)(a1 + 120) = *v13;
      *(_QWORD *)(a1 + 128) = *(_QWORD *)(a1 + 168);
      *v13 = 0LL;
      *(_QWORD *)(a1 + 168) = 0LL;
      *(_QWORD *)(a1 + 136) = *v14;
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(a1 + 184);
      *v14 = 0LL;
      *(_QWORD *)(a1 + 184) = 0LL;
      *(_BYTE *)(a1 + 152) = 1;
      lambda_84c775889c05b89f12ed6d0ff428b333_::__lambda_84c775889c05b89f12ed6d0ff428b333_((__int64)v13);
      *(_QWORD *)(a1 + 256) = a1 - 112;
      if ( *(_DWORD *)(a1 - 112 + 96) == 2 )
      {
        v15 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 272);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v15);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      *(_QWORD *)(a1 + 192) = 0LL;
      *(_QWORD *)(a1 + 200) = v4;
      *(_QWORD *)(a1 + 208) = 0LL;
      *(_BYTE *)(a1 + 216) = 1;
      *(_WORD *)v2 = 4;
      if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type>(
                              (__int64 *)(a1 + 192),
                              a1) )
        return;
      goto LABEL_13;
    case 4:
LABEL_13:
      winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,1>::await_resume(
        a1 + 192,
        a1 + 224);
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 192));
      if ( *(_QWORD *)(a1 + 224) )
        Boolean = winrt::impl::consume_Windows_Foundation_IPropertyValue<winrt::Windows::Foundation::IReference<bool>>::GetBoolean((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 224));
      else
        Boolean = 0;
      *(_BYTE *)(a1 + 232) = Boolean;
      v22 = *(_QWORD *)(a1 + 224);
      *(_BYTE *)(a1 + 233) = v22 != 0;
      PinManagerTelemetry::PinConsentPromptCompleted<bool,bool>((char *)(a1 + 233), (char *)(a1 + 232));
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(
        (__int64 *)(*(_QWORD *)(a1 + 256) + 104LL),
        (__int64 *)(a1 + 224));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 224));
      wil::details::lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___::_lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___(a1 + 120);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
      *(_QWORD *)(a1 + 240) = a1 - 112;
      *(_WORD *)v2 = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::final_suspend_awaiter::await_suspend() )
        goto LABEL_17;
      return;
    case 5:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 192));
      wil::details::lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___::_lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___(a1 + 120);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
LABEL_17:
      std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type::_promise_type((__int64 *)(a1 - 112));
      v17 = *(std::_Ref_count_base **)(a1 + 328);
      if ( v17 )
        std::_Ref_count_base::_Decref(v17);
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x1D0);
      break;
    default:
      __debugbreak();
      break;
  }
}
