/*
 * XREFs of ?WorkAreaChanged@AccessibilityExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x180232380
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyWorkspaceRect@AccessibilityExperienceManager@@UEAAJXZ @ 0x1802C21C0 (-NotifyWorkspaceRect@AccessibilityExperienceManager@@UEAAJXZ.c)
 */

__int64 __fastcall AccessibilityExperienceManager::WorkAreaChanged(
        struct tagRECT *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  this[20] = *a3;
  AccessibilityExperienceManager::NotifyWorkspaceRect((AccessibilityExperienceManager *)&this[1]);
  return 0LL;
}
