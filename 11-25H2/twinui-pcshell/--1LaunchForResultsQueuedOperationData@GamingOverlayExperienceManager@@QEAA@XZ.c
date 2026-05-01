/*
 * XREFs of ??1LaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@QEAA@XZ @ 0x180341B24
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@EEAAXXZ @ 0x180351DC0 (-_Destroy@-$_Ref_count_obj2@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800A51D4 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 */

void __fastcall GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData::~LaunchForResultsQueuedOperationData(
        wil::details **this)
{
  void *v2; // rdx
  void *v3; // rdx

  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(this + 2));
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    this + 1,
    v2);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    this,
    v3);
}
