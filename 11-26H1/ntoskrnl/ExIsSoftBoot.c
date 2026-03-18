/*
 * XREFs of ExIsSoftBoot @ 0x14052A6C0
 * Callers:
 *     PoInitHiberServices @ 0x1407C8370 (PoInitHiberServices.c)
 *     PoClearTransitionMarker @ 0x1407C881C (PoClearTransitionMarker.c)
 *     EtwpSavePersistedLoggers @ 0x14082EE88 (EtwpSavePersistedLoggers.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14084C298 (CmpMountPreloadedHives.c)
 *     CmpReorganizeHive @ 0x140AE35CC (CmpReorganizeHive.c)
 *     BapdRecordFirmwareBootStats @ 0x140C07A44 (BapdRecordFirmwareBootStats.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (ExpSysDbgLock.SchedulerApcFill5[72] & 4) != 0;
}
