/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x140B891A8
 * Callers:
 *     ViDeadlockPluginUnload @ 0x140608000 (ViDeadlockPluginUnload.c)
 *     VfDeadlockInitialize @ 0x140B87E0C (VfDeadlockInitialize.c)
 *     VfDeadlockPluginEntry @ 0x140B88260 (VfDeadlockPluginEntry.c)
 *     VfSettingsCheckForChanges @ 0x140B8B280 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViLowerIrql @ 0x1406082A8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1406082E0 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140B891F4 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140B8922C (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockEmptyDatabase @ 0x140B8925C (ViDeadlockEmptyDatabase.c)
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
