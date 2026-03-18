/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x140C37414
 * Callers:
 *     ViDeadlockPluginUnload @ 0x1406470E0 (ViDeadlockPluginUnload.c)
 *     VfDeadlockInitialize @ 0x140C36058 (VfDeadlockInitialize.c)
 *     VfDeadlockPluginEntry @ 0x140C364B0 (VfDeadlockPluginEntry.c)
 *     VfSettingsCheckForChanges @ 0x140C39130 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViLowerIrql @ 0x14064738C (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1406473C4 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140C37460 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140C37498 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockEmptyDatabase @ 0x140C374CC (ViDeadlockEmptyDatabase.c)
 */

__int64 __fastcall ViDeadlockDetectionApplySettings(int a1)
{
  unsigned __int8 v1; // bl

  if ( !a1 )
    return ViDeadlockEmptyDatabase();
  v1 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  ViDeadlockDetectionEnabled = 1;
  ViDeadlockDetectionUnlock(1LL);
  return ViLowerIrql(v1);
}
