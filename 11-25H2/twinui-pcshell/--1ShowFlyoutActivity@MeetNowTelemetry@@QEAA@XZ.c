/*
 * XREFs of ??1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ @ 0x1803B7CB0
 * Callers:
 *     ??1MeetNowExperienceManager@@UEAA@XZ @ 0x1803B7BC8 (--1MeetNowExperienceManager@@UEAA@XZ.c)
 *     ??4ShowFlyoutActivity@MeetNowTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803B7DA8 (--4ShowFlyoutActivity@MeetNowTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?OnIdleStateChanged@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x1803BA3C0 (-OnIdleStateChanged@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@_N@Z.c)
 *     ?OnSetForegroundFailed@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803BA710 (-OnSetForegroundFailed@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803BB200 (-OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z @ 0x1803BC828 (-ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z.c)
 *     _MeetNowExperienceManager::MeetNowExperienceManager_::_1_::dtor$10 @ 0x1806C077D (_MeetNowExperienceManager--MeetNowExperienceManager_--_1_--dtor$10.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803B87F4 (-Destroy@-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall MeetNowTelemetry::ShowFlyoutActivity::~ShowFlyoutActivity(MeetNowTelemetry::ShowFlyoutActivity *this)
{
  *(_QWORD *)this = &MeetNowTelemetry::ShowFlyoutActivity::`vftable';
  wil::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
