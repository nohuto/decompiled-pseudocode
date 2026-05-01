/*
 * XREFs of ??1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18036B250
 * Callers:
 *     ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x180112D10 (-Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z.c)
 *     ?OnDismiss@CControlCenterExperienceManager@@UEAAJXZ @ 0x18036D3E0 (-OnDismiss@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     _CControlCenterExperienceManager::OnDismiss_::_1_::dtor$0 @ 0x1806D491D (_CControlCenterExperienceManager--OnDismiss_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18036BE80 (-Destroy@-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::~DismissControlCenterV1(
        ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1 *this)
{
  *(_QWORD *)this = &ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::`vftable';
  wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
