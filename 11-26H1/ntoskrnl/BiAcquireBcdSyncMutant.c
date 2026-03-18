/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x1409D415C
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
 *     ZwWaitForSingleObject @ 0x140723470 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenMutant @ 0x1407259F0 (ZwOpenMutant.c)
 */

int __fastcall BiAcquireBcdSyncMutant(char a1)
{
  void *SchedulerSharedSystemSlot; // rcx
  int result; // eax
  HANDLE Handle; // [rsp+68h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+20h] BYREF

  if ( a1 )
    return 0;
  SchedulerSharedSystemSlot = gLoadedDiffHivesLock.SchedulerSharedSystemSlot;
  Handle = 0LL;
  if ( !gLoadedDiffHivesLock.SchedulerSharedSystemSlot )
  {
    result = ZwOpenMutant((__int64)&Handle, 0x100000LL);
    if ( result == -1073741772 )
    {
      _InterlockedCompareExchange64(
        (volatile signed __int64 *)&gLoadedDiffHivesLock.SchedulerSharedSystemSlot,
        -1LL,
        0LL);
    }
    else
    {
      if ( result < 0 )
        return result;
      if ( _InterlockedCompareExchange64(
             (volatile signed __int64 *)&gLoadedDiffHivesLock.SchedulerSharedSystemSlot,
             (signed __int64)Handle,
             0LL) )
      {
        ZwClose(Handle);
      }
    }
    SchedulerSharedSystemSlot = gLoadedDiffHivesLock.SchedulerSharedSystemSlot;
  }
  if ( SchedulerSharedSystemSlot == (void *)-1LL )
    return 0;
  Timeout.QuadPart = -600000000LL;
  result = ZwWaitForSingleObject(SchedulerSharedSystemSlot, 0, &Timeout);
  if ( result == 258 )
    return -1073741823;
  return result;
}
