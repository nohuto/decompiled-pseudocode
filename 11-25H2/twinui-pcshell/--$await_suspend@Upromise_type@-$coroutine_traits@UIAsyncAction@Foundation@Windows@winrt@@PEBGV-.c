/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@@experimental@std@@@Z @ 0x180337F70
 * Callers:
 *     _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1::operator() @ 0x18026D840 (_lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x180283480 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x180339690 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180339690.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1 @ 0x180555370 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_180555370.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::impl::timespan_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9

  v2 = a2 - 112 + 32;
  v3 = v2 & -(__int64)(a2 != 112);
  if ( *(_BYTE *)(v3 + 0x10) )
  {
    *a1 = v3;
    *(_QWORD *)((v2 & -(__int64)(a2 != 112)) + 8) = a1;
    *(_QWORD *)v3 = _lambda_cc4fe2aa99c177bf5bc948fdc2bace84_::_lambda_invoker_cdecl_;
  }
  a1[3] = a2;
  winrt::impl::timespan_awaiter::create_threadpool_timer((winrt::impl::timespan_awaiter *)a1);
}
