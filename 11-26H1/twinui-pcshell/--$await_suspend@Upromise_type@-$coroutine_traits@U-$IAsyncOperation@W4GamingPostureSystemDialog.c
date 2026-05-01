/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@PEAUGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@34@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@PEAUGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x1803379C8
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x1803391B0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureSystemDialog-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog *>::promise_type>(
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
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,1>::register_completed_callback();
}
