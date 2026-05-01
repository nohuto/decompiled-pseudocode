/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@@experimental@std@@@Z @ 0x1805E12BC
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x1805E84D0 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x1805E8F60 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r9

  v2 = (a2 - 80) & -(__int64)(a2 != 112);
  if ( *(_BYTE *)(v2 + 0x10) )
  {
    *a1 = v2;
    *(_QWORD *)(((a2 - 80) & -(__int64)(a2 != 112)) + 8) = a1;
    *(_QWORD *)v2 = _lambda_4cff5cac03f7c41104750b1d0579036a_::_lambda_invoker_cdecl_;
  }
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,1>::register_completed_callback();
}
