/*
 * XREFs of ?OnViewCloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18021BAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?EM_ViewCloakingActivity@ToastCenterTelemetry@@SAXXZ @ 0x18028EB20 (-EM_ViewCloakingActivity@ToastCenterTelemetry@@SAXXZ.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnViewCloaking(
        CToastCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  ToastCenterTelemetry::EM_ViewCloakingActivity();
  return 0LL;
}
