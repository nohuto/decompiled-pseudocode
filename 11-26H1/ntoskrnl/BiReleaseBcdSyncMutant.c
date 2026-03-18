/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x1409D3F58
 * Callers:
 *     BiOpenStoreWithHash @ 0x140773404 (BiOpenStoreWithHash.c)
 *     BcdCreateObject @ 0x140774E00 (BcdCreateObject.c)
 *     BcdQueryObject @ 0x140779B20 (BcdQueryObject.c)
 *     BcdOpenSystemStore @ 0x14077B68C (BcdOpenSystemStore.c)
 *     BcdMarkAsSystemStore @ 0x140891044 (BcdMarkAsSystemStore.c)
 *     BcdDeleteObject @ 0x140891108 (BcdDeleteObject.c)
 *     BcdCloseStore @ 0x1409D0088 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x1409D0978 (BiDeleteElement.c)
 *     BiBindEfiBootManager @ 0x1409D2C60 (BiBindEfiBootManager.c)
 *     BcdSetElementDataWithFlags @ 0x1409D30C4 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1409D4B80 (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1409D4E38 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409D54D8 (BcdOpenObject.c)
 *     PopBcdSetPendingResume @ 0x140B4C7C4 (PopBcdSetPendingResume.c)
 *     BcdFlushStore @ 0x140B543DC (BcdFlushStore.c)
 *     BcdEnumerateObjects @ 0x140B5C474 (BcdEnumerateObjects.c)
 *     BcdForciblyUnloadStore @ 0x140B6A7AC (BcdForciblyUnloadStore.c)
 * Callees:
 *     ZwReleaseMutant @ 0x1407237F0 (ZwReleaseMutant.c)
 */

__int64 __fastcall BiReleaseBcdSyncMutant(char a1)
{
  __int64 result; // rax

  if ( !a1 && gLoadedDiffHivesLock.SchedulerSharedSystemSlot != (void *)-1LL )
    return ZwReleaseMutant((__int64)gLoadedDiffHivesLock.SchedulerSharedSystemSlot, 0LL);
  return result;
}
