/*
 * XREFs of ??1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18035D3C8
 * Callers:
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x180360D40 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180361720 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 *     _CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$11 @ 0x1806BE912 (_CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1_--_1_--dtor$11.c)
 *     _CActionCenterExperienceManager::StartSwipe_::_1_::dtor$1 @ 0x1806BE9B3 (_CActionCenterExperienceManager--StartSwipe_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18035DF78 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::~LaunchActionCenter(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::`vftable';
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
