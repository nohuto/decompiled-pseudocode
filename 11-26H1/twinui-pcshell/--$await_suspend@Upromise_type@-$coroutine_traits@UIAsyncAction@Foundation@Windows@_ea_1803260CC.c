/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@@experimental@std@@@Z @ 0x1803260CC
 * Callers:
 *     _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1::operator() @ 0x180265950 (_lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x18027A580 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032DD20 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--S.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x1803391B0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureSystemDialog-.c)
 *     _lambda_939cc389e5d3bee984e430b9134c7b2f_$_ResumeCoro$1::operator() @ 0x180344000 (_lambda_939cc389e5d3bee984e430b9134c7b2f_$_ResumeCoro$1--operator().c)
 *     _lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf_$_ResumeCoro$1::operator() @ 0x180344270 (_lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf_$_ResumeCoro$1--operator().c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1 @ 0x180579460 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulatorComponent--.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::impl::timespan_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r9

  v2 = (a2 - 80) & -(__int64)(a2 != 112);
  if ( *(_BYTE *)(v2 + 0x10) )
  {
    *a1 = v2;
    *(_QWORD *)(((a2 - 80) & -(__int64)(a2 != 112)) + 8) = a1;
    *(_QWORD *)v2 = _lambda_cc4fe2aa99c177bf5bc948fdc2bace84_::_lambda_invoker_cdecl_;
  }
  a1[3] = a2;
  winrt::impl::timespan_awaiter::create_threadpool_timer((winrt::impl::timespan_awaiter *)a1);
}
