/*
 * XREFs of ?NotifyWorkspaceRect@AccessibilityExperienceManager@@UEAAJXZ @ 0x18029A670
 * Callers:
 *     ?WorkAreaChanged@AccessibilityExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x180241260 (-WorkAreaChanged@AccessibilityExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     CreationThreadDispatcher::RunAsync__lambda_c3f882fe1fc0b6b080fac59404359f44___ @ 0x18029A698 (CreationThreadDispatcher--RunAsync__lambda_c3f882fe1fc0b6b080fac59404359f44___.c)
 */

__int64 __fastcall AccessibilityExperienceManager::NotifyWorkspaceRect(AccessibilityExperienceManager *this)
{
  CreationThreadDispatcher::RunAsync__lambda_c3f882fe1fc0b6b080fac59404359f44___(
    *((_QWORD *)this + 18),
    (char *)this - 144);
  return 0LL;
}
