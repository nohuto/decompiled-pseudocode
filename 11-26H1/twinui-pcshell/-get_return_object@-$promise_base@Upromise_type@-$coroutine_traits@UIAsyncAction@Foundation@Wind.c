/*
 * XREFs of ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@XZ @ 0x180331D1C
 * Callers:
 *     ?EnterGamingPostureAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@67@XZ @ 0x18032AA94 (-EnterGamingPostureAsync@GamingPostureController@implementation@Posture@GamingExperiences@Intern.c)
 *     ?ExitGamingPostureAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@67@XZ @ 0x18032AF44 (-ExitGamingPostureAsync@GamingPostureController@implementation@Posture@GamingExperiences@Interna.c)
 *     ?WaitForOobeToComplete@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@67@XZ @ 0x180330468 (-WaitForOobeToComplete@GamingPostureController@implementation@Posture@GamingExperiences@Internal.c)
 *     ?WaitForResultsOperationAcknowledgedAsync@GamingOverlayExperienceManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@Z @ 0x1803562B8 (-WaitForResultsOperationAcknowledgedAsync@GamingOverlayExperienceManager@@AEAA-AUIAsyncAction@Fo.c)
 *     ?WaitForResultsOperationAcknowledgedAsync_old@GamingOverlayExperienceManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@Z @ 0x18035669C (-WaitForResultsOperationAcknowledgedAsync_old@GamingOverlayExperienceManager@@AEAA-AUIAsyncActio.c)
 *     ?WaitForResultsOperationCompletedAsync@GamingOverlayExperienceManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@Z @ 0x180356A38 (-WaitForResultsOperationCompletedAsync@GamingOverlayExperienceManager@@AEAA-AUIAsyncAction@Found.c)
 *     ?WaitForResultsOperationCompletedAsync_old@GamingOverlayExperienceManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@Z @ 0x180356DAC (-WaitForResultsOperationCompletedAsync_old@GamingOverlayExperienceManager@@AEAA-AUIAsyncAction@F.c)
 *     ?IsPackageVolumeSupportedForInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@Z @ 0x1805D4C10 (-IsPackageVolumeSupportedForInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA-AU-$IAsyncOpera.c)
 *     ?TryEnableVolumeForPackageInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@Z @ 0x1805D8908 (-TryEnableVolumeForPackageInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA-AU-$IAsyncOperati.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::get_return_object(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  *a2 = a1 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  v4 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
  return a2;
}
