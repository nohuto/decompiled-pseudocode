/*
 * XREFs of ??0?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1803416CC
 * Callers:
 *     ??$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@@winrt@@YA?AUIAsyncAction@Foundation@Windows@0@AEBU1230@0@Z @ 0x18034091C (--$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@@winrt@@YA-AUIAsyncAction@Foundation@W.c)
 *     ??$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@U1234@@winrt@@YA?AUIAsyncAction@Foundation@Windows@0@AEBU1230@00@Z @ 0x180340A08 (--$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@U1234@@winrt@@YA-AUIAsyncAction@Founda.c)
 *     ?WaitForResultsOperationAcknowledgedAsync@GamingOverlayExperienceManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@Z @ 0x1803562B8 (-WaitForResultsOperationAcknowledgedAsync@GamingOverlayExperienceManager@@AEAA-AUIAsyncAction@Fo.c)
 *     ?WaitForResultsOperationAcknowledgedAsync_old@GamingOverlayExperienceManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@Z @ 0x18035669C (-WaitForResultsOperationAcknowledgedAsync_old@GamingOverlayExperienceManager@@AEAA-AUIAsyncActio.c)
 *     ?WaitForResultsOperationCompletedAsync@GamingOverlayExperienceManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@Z @ 0x180356A38 (-WaitForResultsOperationCompletedAsync@GamingOverlayExperienceManager@@AEAA-AUIAsyncAction@Found.c)
 *     ?WaitForResultsOperationCompletedAsync_old@GamingOverlayExperienceManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@Z @ 0x180356DAC (-WaitForResultsOperationCompletedAsync_old@GamingOverlayExperienceManager@@AEAA-AUIAsyncAction@F.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(
        __int64 a1)
{
  _QWORD *v2; // rcx

  *(_QWORD *)(a1 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction>::`vftable';
  *(_QWORD *)(a1 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction const &,winrt::Windows::Foundation::IAsyncAction const &>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 48) = 0;
  v2 = (_QWORD *)(a1 + 56);
  *v2 = 0LL;
  v2[1] = 0LL;
  __ExceptionPtrCreate(v2);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_BYTE *)(a1 + 100) = 0;
  return a1;
}
