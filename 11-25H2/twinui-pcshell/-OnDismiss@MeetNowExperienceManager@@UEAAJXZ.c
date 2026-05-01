/*
 * XREFs of ?OnDismiss@MeetNowExperienceManager@@UEAAJXZ @ 0x1803BA0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x18065BC80 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall MeetNowExperienceManager::OnDismiss(MeetNowExperienceManager *this)
{
  CSingleViewShellExperience::DestroyView((MeetNowExperienceManager *)((char *)this + 168));
  return 0LL;
}
