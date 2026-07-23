/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x140C3D424
 * Callers:
 *     ViDeadlockPluginUnload @ 0x14064ACC0 (ViDeadlockPluginUnload.c)
 *     VfDeadlockInitialize @ 0x140C3C068 (VfDeadlockInitialize.c)
 *     VfDeadlockPluginEntry @ 0x140C3C4C0 (VfDeadlockPluginEntry.c)
 *     VfSettingsCheckForChanges @ 0x140C3F140 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViLowerIrql @ 0x14064AF6C (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14064AFA4 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140C3D470 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140C3D4A8 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockEmptyDatabase @ 0x140C3D4DC (ViDeadlockEmptyDatabase.c)
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
