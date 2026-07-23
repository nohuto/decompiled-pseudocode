/*
 * XREFs of KsepDebugPrint @ 0x140508694
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x140602270 (KseKPSOHookDriverTargeted.c)
 *     KseRegisterShimEx @ 0x1407C0040 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1407C0390 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1407C091C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1407C0E34 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDeletePatchSdb @ 0x1407C1488 (KsepDeletePatchSdb.c)
 *     KsepSdbBootInitialize @ 0x1407C153C (KsepSdbBootInitialize.c)
 *     KsepSdbMapToMemory @ 0x1409D65BC (KsepSdbMapToMemory.c)
 *     KseQueryDeviceData @ 0x1409D6F80 (KseQueryDeviceData.c)
 *     KseAddHardwareId @ 0x1409D80D0 (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x140A380BC (KseDriverUnloadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A38400 (KsepEngineGetShimsFromRegistry.c)
 *     KsepGetShimsForDriver @ 0x140A3865C (KsepGetShimsForDriver.c)
 *     KsepGetShimCallbacksForDriver @ 0x140A387F0 (KsepGetShimCallbacksForDriver.c)
 *     KseDriverLoadImage @ 0x140A38A18 (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x140A39400 (KseShimDriverIoCallbacks.c)
 *     KsepShimDatabaseTime @ 0x140AFFCFC (KsepShimDatabaseTime.c)
 *     KseInitialize @ 0x140CD3040 (KseInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140CD3750 (KsepMatchInitBiosInfo.c)
 *     KsepMatchInitMachineInfo @ 0x140CD3A58 (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140CD3BC0 (KseShimDatabaseBootInitialize.c)
 *     KseVersionLieInitialize @ 0x140CD3DB4 (KseVersionLieInitialize.c)
 *     KsepEngineReadFlags @ 0x140D0E4EC (KsepEngineReadFlags.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14039933C (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, int a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((int)&File, 101, 0, a2, va, 1);
}
