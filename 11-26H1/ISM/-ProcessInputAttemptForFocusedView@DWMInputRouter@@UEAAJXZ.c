/*
 * XREFs of ?ProcessInputAttemptForFocusedView@DWMInputRouter@@UEAAJXZ @ 0x1801A3830
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x180048F50 (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 *     ?GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ @ 0x180161ABC (-GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ.c)
 */

__int64 __fastcall DWMInputRouter::ProcessInputAttemptForFocusedView(DWMInputRouter *this)
{
  __int64 v1; // rbx
  unsigned int ActiveViewInstanceId; // eax

  v1 = *((_QWORD *)this + 36);
  ActiveViewInstanceId = *(_DWORD *)(v1 + 72);
  if ( !ActiveViewInstanceId )
    ActiveViewInstanceId = ViewHierarchyWithWindowManager::GetActiveViewInstanceId(*(ViewHierarchyWithWindowManager **)(v1 + 64));
  InputAttemptedTargetManager::ProcessInputAttempt((InputAttemptedTargetManager *)(v1 + 64), ActiveViewInstanceId);
  return 0LL;
}
