/*
 * XREFs of ??1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x180378510
 * Callers:
 *     ?OnMessage@CPeopleBarFlyoutExperienceManager@@UEAAJI_K_J@Z @ 0x1801DB4C0 (-OnMessage@CPeopleBarFlyoutExperienceManager@@UEAAJI_K_J@Z.c)
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x1803783B8 (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18037875C (--4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?OnViewDestroyed@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180379BB0 (-OnViewDestroyed@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180379CF0 (-OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180379DE0 (-OnViewShown@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x18037A1C0 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 *     _CPeopleBarFlyoutExperienceManager::OnViewShown_::_1_::dtor$0 @ 0x1806B2BB5 (_CPeopleBarFlyoutExperienceManager--OnViewShown_--_1_--dtor$0.c)
 *     _CPeopleBarFlyoutExperienceManager::OnViewShowing_::_1_::dtor$0 @ 0x1806BEDAA (_CPeopleBarFlyoutExperienceManager--OnViewShowing_--_1_--dtor$0.c)
 *     _CPeopleBarFlyoutExperienceManager::ShowFlyout_::_1_::dtor$0 @ 0x1806BEDCE (_CPeopleBarFlyoutExperienceManager--ShowFlyout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180378C18 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTa.c)
 */

void __fastcall CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout(
        CommonPeopleTelemetry::ShowPeopleBarFlyout *this)
{
  *(_QWORD *)this = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
