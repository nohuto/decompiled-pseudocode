/*
 * XREFs of ??1EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180364170
 * Callers:
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180366E30 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CActionCenterExperienceManager::OnViewUncloaking_::_1_::dtor$0 @ 0x1806E6414 (_CActionCenterExperienceManager--OnViewUncloaking_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180066200 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::~EM_ViewUncloakingActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
