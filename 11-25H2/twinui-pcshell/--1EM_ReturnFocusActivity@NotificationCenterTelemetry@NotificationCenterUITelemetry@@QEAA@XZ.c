/*
 * XREFs of ??1EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18035D318
 * Callers:
 *     ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x1803606C8 (-ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     _CActionCenterExperienceManager::ReturnFocus_::_1_::dtor$0 @ 0x1806BE6BB (_CActionCenterExperienceManager--ReturnFocus_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180045418 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::~EM_ReturnFocusActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
