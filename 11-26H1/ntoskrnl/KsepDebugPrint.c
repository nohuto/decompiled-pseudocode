/*
 * XREFs of KsepDebugPrint @ 0x14050EC24
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1405FF820 (KseKPSOHookDriverTargeted.c)
 *     KseRegisterShimEx @ 0x1407BCFE0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1407BD330 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1407BD8BC (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1407BDDD4 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDeletePatchSdb @ 0x1407BE428 (KsepDeletePatchSdb.c)
 *     KsepSdbBootInitialize @ 0x1407BE4DC (KsepSdbBootInitialize.c)
 *     KseAddHardwareId @ 0x1409E4D00 (KseAddHardwareId.c)
 *     KseQueryDeviceData @ 0x1409E5A00 (KseQueryDeviceData.c)
 *     KsepSdbMapToMemory @ 0x1409E6578 (KsepSdbMapToMemory.c)
 *     KseDriverUnloadImage @ 0x140A2501C (KseDriverUnloadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A25360 (KsepEngineGetShimsFromRegistry.c)
 *     KsepGetShimsForDriver @ 0x140A255BC (KsepGetShimsForDriver.c)
 *     KsepGetShimCallbacksForDriver @ 0x140A25750 (KsepGetShimCallbacksForDriver.c)
 *     KseDriverLoadImage @ 0x140A25978 (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x140A26360 (KseShimDriverIoCallbacks.c)
 *     KsepShimDatabaseTime @ 0x140AFDC8C (KsepShimDatabaseTime.c)
 *     KseInitialize @ 0x140CCCEE0 (KseInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140CCD5F0 (KsepMatchInitBiosInfo.c)
 *     KsepMatchInitMachineInfo @ 0x140CCD8F8 (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140CCDA60 (KseShimDatabaseBootInitialize.c)
 *     KseVersionLieInitialize @ 0x140CCDC54 (KseVersionLieInitialize.c)
 *     KsepEngineReadFlags @ 0x140D0821C (KsepEngineReadFlags.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403975BC (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, int a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((int)&File, 101, 0, a2, va, 1);
}
