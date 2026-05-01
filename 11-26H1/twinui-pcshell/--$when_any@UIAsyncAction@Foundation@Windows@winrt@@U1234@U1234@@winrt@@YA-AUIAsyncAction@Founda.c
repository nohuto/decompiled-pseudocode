/*
 * XREFs of ??$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@U1234@@winrt@@YA?AUIAsyncAction@Foundation@Windows@0@AEBU1230@00@Z @ 0x180340A08
 * Callers:
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1 @ 0x180355FA0 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old$_ResumeCoro$1 @ 0x1803563D0 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync_old$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_ @ 0x180340680 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncAction_winrt--Windo_ea_180340680.c)
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1803416CC (--0-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVG.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall winrt::when_any<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  _QWORD v12[3]; // [rsp+28h] [rbp-40h] BYREF

  v8 = operator new(0x140uLL);
  v9 = (__int64)(v8 + 14);
  v8[37] = a2;
  v8[38] = a3;
  v8[39] = a4;
  v8[14] = winrt::when_any__ResumeCoro_1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_;
  *((_DWORD *)v8 + 30) = 65538;
  v10 = v8;
  memset_0(v8, 0, 0x68uLL);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(v9 - 112);
  *v10 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  *a1 = (__int64)(v10 + 2);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  v12[0] = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v12);
  *(_BYTE *)(v9 + 176) = 0;
  winrt::when_any__ResumeCoro_1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_(v9);
  return a1;
}
