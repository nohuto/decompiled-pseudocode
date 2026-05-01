/*
 * XREFs of ?copy_to_abi@winrt@@YAXAEBUIUnknown@Foundation@Windows@1@AEAPEAX@Z @ 0x1801F87E0
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1 @ 0x18032F980 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--T.c)
 *     ?TagWindowForSnapAnimation@CSnapAssistControllerBase@@UEAAJ_KURect@Foundation@Windows@@PEAPEAUISnapAnimationTag@WindowSnapping@Shell@Internal@4@@Z @ 0x1805A82D0 (-TagWindowForSnapAnimation@CSnapAssistControllerBase@@UEAAJ_KURect@Foundation@Windows@@PEAPEAUIS.c)
 *     ?GetTaskGroupsDataModel@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806C2580 (-GetTaskGroupsDataModel@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetTaskGroupsDataSourceAdapter@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806C2640 (-GetTaskGroupsDataSourceAdapter@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::copy_to_abi(struct IUnknownVtbl **this, const struct IUnknown *a2, void **a3)
{
  struct IUnknownVtbl *v3; // rcx

  v3 = *this;
  a2->lpVtbl = v3;
  if ( v3 )
    (*((void (__fastcall **)(struct IUnknownVtbl *, const struct IUnknown *, void **))v3->QueryInterface + 1))(
      v3,
      a2,
      a3);
}
