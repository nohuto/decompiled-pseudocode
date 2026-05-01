/*
 * XREFs of ??1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ @ 0x180409DF0
 * Callers:
 *     _lambda_fc6cce9727cf9f8deae1663544b26742_::__lambda_fc6cce9727cf9f8deae1663544b26742_ @ 0x180409CB4 (_lambda_fc6cce9727cf9f8deae1663544b26742_--__lambda_fc6cce9727cf9f8deae1663544b26742_.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x18040C520 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$0 @ 0x1806E9BD9 (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180380ACC (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTa.c)
 */

void __fastcall CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch(
        CommonPeopleTelemetry::PeoplePaneAppLaunch *this)
{
  *(_QWORD *)this = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
