/*
 * XREFs of ??1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180364094
 * Callers:
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180364E40 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     ?OnDismiss@CActionCenterExperienceManager@@UEAAJXZ @ 0x180366990 (-OnDismiss@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180368790 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 *     _CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$11 @ 0x1806E634B (_CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1_--_1_--dtor$11.c)
 *     _CActionCenterExperienceManager::StartSwipe_::_1_::dtor$0 @ 0x1806E63CC (_CActionCenterExperienceManager--StartSwipe_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180364DA0 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::~DismissActionCenter(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::`vftable';
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
