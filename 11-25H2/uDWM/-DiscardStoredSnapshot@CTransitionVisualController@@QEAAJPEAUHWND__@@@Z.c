/*
 * XREFs of ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x1800030A8
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180027FE4 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x180029A54 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180003BD4 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?_DiscardStoredSnapshotByIndex@CTransitionVisualController@@IEAAJH@Z @ 0x18009A49C (-_DiscardStoredSnapshotByIndex@CTransitionVisualController@@IEAAJH@Z.c)
 */

__int64 __fastcall CTransitionVisualController::DiscardStoredSnapshot(CTransitionVisualController *this, HWND a2)
{
  int SnapshotIndex; // eax
  CTransitionVisualController *v3; // rcx

  SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(this, a2);
  if ( SnapshotIndex >= 0 )
    CTransitionVisualController::_DiscardStoredSnapshotByIndex(v3, SnapshotIndex);
  return 0LL;
}
