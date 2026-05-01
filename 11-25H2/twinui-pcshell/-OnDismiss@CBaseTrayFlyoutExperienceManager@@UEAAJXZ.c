/*
 * XREFs of ?OnDismiss@CBaseTrayFlyoutExperienceManager@@UEAAJXZ @ 0x1803BA090
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x18065BC80 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnDismiss(CBaseTrayFlyoutExperienceManager *this)
{
  CSingleViewShellExperience::DestroyView((CBaseTrayFlyoutExperienceManager *)((char *)this + 64));
  return 0LL;
}
