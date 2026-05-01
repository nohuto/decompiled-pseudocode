/*
 * XREFs of ?OnViewCloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18035FC30
 * Callers:
 *     <none>
 * Callees:
 *     ?EM_ViewCloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18035E538 (-EM_ViewCloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnViewCloaking(
        CActionCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewCloakingActivity((__int64)this);
  return 0LL;
}
