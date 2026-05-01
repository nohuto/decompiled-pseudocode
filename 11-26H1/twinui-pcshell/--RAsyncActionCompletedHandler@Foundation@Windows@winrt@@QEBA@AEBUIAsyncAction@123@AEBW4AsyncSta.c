/*
 * XREFs of ??RAsyncActionCompletedHandler@Foundation@Windows@winrt@@QEBA@AEBUIAsyncAction@123@AEBW4AsyncStatus@123@@Z @ 0x1802343FC
 * Callers:
 *     ??$invoke@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@4@W4AsyncStatus@234@@impl@winrt@@YA_NAEBU?$AsyncOperationCompletedHandler@_N@Foundation@Windows@1@AEBU?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@01@AEBW4AsyncStatus@341@@Z @ 0x1800E636C (--$invoke@U-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U-$promise_base@Upromis.c)
 *     winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void__enum_winrt::Windows::Foundation::AsyncStatus_ @ 0x1800E6414 (winrt--impl--invoke_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--Windows--S.c)
 *     ??$invoke@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@UPackageVolume@Deployment@Management@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@4@W4AsyncStatus@234@@impl@winrt@@YA_NAEBU?$AsyncOperationCompletedHandler@_N@Foundation@Windows@1@AEBU?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@UPackageVolume@Deployment@Management@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@01@AEBW4AsyncStatus@341@@Z @ 0x1803266B8 (--$invoke@U-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U-$promise_ea_1803266B8.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_ba75d073cae0acf3ccac3e624697c660_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x18032CCB0 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@W4GamingPostureSystemDialogResult@Posture@G.c)
 *     winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool____winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void__enum_winrt::Windows::Foundation::AsyncStatus_ @ 0x18033FEC0 (winrt--impl--invoke_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--Windows--F.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_332fbc8fdd319b527f6e6768730b6f54_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x18034BA20 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@U-$IReference@_N@Foundation@Windows@winrt@@.c)
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@V_lambda_3388fa7f0a5c6f3f4a8233dcf615ab87_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x18035B890 (-Invoke@-$delegate@U-$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@win.c)
 *     ??$invoke@U?$EventHandler@I@Foundation@Windows@winrt@@UProcessTracker@implementation@Shell@Internal@34@I@impl@winrt@@YA_NAEBU?$EventHandler@I@Foundation@Windows@1@AEBUProcessTracker@implementation@Shell@Internal@41@AEBI@Z @ 0x18065FCA0 (--$invoke@U-$EventHandler@I@Foundation@Windows@winrt@@UProcessTracker@implementation@Shell@Inter.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::Windows::Foundation::AsyncActionCompletedHandler::operator()(
        __int64 **a1,
        __int64 *a2,
        unsigned int *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // eax
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = *a3;
  v5 = *a2;
  v9 = 0;
  v6 = *v3;
  v10 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v6 + 24))(v3, v5, v4);
  return winrt::check_hresult(&v11, v7, &v9);
}
