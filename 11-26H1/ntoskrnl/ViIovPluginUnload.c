/*
 * XREFs of ViIovPluginUnload @ 0x140646580
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     IopUpdateFunctionPointers @ 0x1405CD450 (IopUpdateFunctionPointers.c)
 *     IovCleanupAiDb @ 0x140645F6C (IovCleanupAiDb.c)
 *     IovFreeIrpStackTracker @ 0x140C30A5C (IovFreeIrpStackTracker.c)
 *     IovFreeIrpTracker @ 0x140C30AA4 (IovFreeIrpTracker.c)
 *     IovUtilUninitialize @ 0x140C37208 (IovUtilUninitialize.c)
 *     VfMajorInit @ 0x140C373C0 (VfMajorInit.c)
 *     VfIrpDatabaseUninitialize @ 0x140C3FEB8 (VfIrpDatabaseUninitialize.c)
 */

void ViIovPluginUnload()
{
  _InterlockedAnd64(&ExpPoolFlags, 0xFFFFFFFFFFFFFFEFuLL);
  IopUpdateFunctionPointers(1, 0, 0);
  _InterlockedExchange(&IovpDisabledWithoutReboot, 1);
  IovUtilUninitialize();
  VfMajorInit();
  ExWaitForRundownProtectionRelease(&IovRundown);
  _InterlockedExchange64((volatile __int64 *)&IovRundown, 1LL);
  IovFreeIrpStackTracker();
  IovFreeIrpTracker();
  IovCleanupAiDb();
  if ( !ViPacketCount )
    VfIrpDatabaseUninitialize();
}
