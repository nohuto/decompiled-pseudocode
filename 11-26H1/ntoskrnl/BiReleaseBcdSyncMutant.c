/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x1409A4F38
 * Callers:
 *     BiOpenStoreWithHash @ 0x140776404 (BiOpenStoreWithHash.c)
 *     BcdCreateObject @ 0x140777E00 (BcdCreateObject.c)
 *     BcdQueryObject @ 0x14077CA50 (BcdQueryObject.c)
 *     BcdOpenSystemStore @ 0x14077E2CC (BcdOpenSystemStore.c)
 *     BcdMarkAsSystemStore @ 0x140897440 (BcdMarkAsSystemStore.c)
 *     BcdDeleteObject @ 0x140897504 (BcdDeleteObject.c)
 *     BcdCloseStore @ 0x1409A1068 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x1409A1958 (BiDeleteElement.c)
 *     BiBindEfiBootManager @ 0x1409A3C40 (BiBindEfiBootManager.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1409A5B60 (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1409A5E18 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409A64B8 (BcdOpenObject.c)
 *     PopBcdSetPendingResume @ 0x140B4E554 (PopBcdSetPendingResume.c)
 *     BcdFlushStore @ 0x140B56C7C (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140B6D9BC (BcdForciblyUnloadStore.c)
 *     BcdEnumerateObjects @ 0x140B6FB7C (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x1407283C0 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && gLoadedDiffHivesLock.PropagateBoostsEntry.Next != (struct _SINGLE_LIST_ENTRY *)-1LL )
    return ZwReleaseMutant(gLoadedDiffHivesLock.PropagateBoostsEntry.Next, 0LL);
  return result;
}
