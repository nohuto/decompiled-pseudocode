/*
 * XREFs of ViIovPluginUnload @ 0x1406429A0
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     IopUpdateFunctionPointers @ 0x1405CAB80 (IopUpdateFunctionPointers.c)
 *     IovCleanupAiDb @ 0x14064238C (IovCleanupAiDb.c)
 *     IovFreeIrpStackTracker @ 0x140C2AA4C (IovFreeIrpStackTracker.c)
 *     IovFreeIrpTracker @ 0x140C2AA94 (IovFreeIrpTracker.c)
 *     IovUtilUninitialize @ 0x140C311F8 (IovUtilUninitialize.c)
 *     VfMajorInit @ 0x140C313B0 (VfMajorInit.c)
 *     VfIrpDatabaseUninitialize @ 0x140C39EA8 (VfIrpDatabaseUninitialize.c)
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
