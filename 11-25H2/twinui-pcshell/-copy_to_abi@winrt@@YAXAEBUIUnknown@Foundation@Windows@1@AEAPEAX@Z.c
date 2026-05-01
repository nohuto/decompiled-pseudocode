/*
 * XREFs of ?copy_to_abi@winrt@@YAXAEBUIUnknown@Foundation@Windows@1@AEAPEAX@Z @ 0x180204450
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1 @ 0x180330A10 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180330A10.c)
 *     ?TagWindowForSnapAnimation@CSnapAssistControllerBase@@UEAAJ_KURect@Foundation@Windows@@PEAPEAUISnapAnimationTag@WindowSnapping@Shell@Internal@4@@Z @ 0x180584480 (-TagWindowForSnapAnimation@CSnapAssistControllerBase@@UEAAJ_KURect@Foundation@Windows@@PEAPEAUIS.c)
 *     ?GetTaskGroupsDataModel@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18069A7E0 (-GetTaskGroupsDataModel@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetTaskGroupsDataSourceAdapter@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18069A8A0 (-GetTaskGroupsDataSourceAdapter@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
