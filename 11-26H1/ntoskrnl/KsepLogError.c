/*
 * XREFs of KsepLogError @ 0x1404CCBBC
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1405FF820 (KseKPSOHookDriverTargeted.c)
 *     KseRegisterShimEx @ 0x1407BCFE0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1407BD330 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1407BD8BC (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1407BDDD4 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDeletePatchSdb @ 0x1407BE428 (KsepDeletePatchSdb.c)
 *     KsepSdbBootInitialize @ 0x1407BE4DC (KsepSdbBootInitialize.c)
 *     KseAddHardwareId @ 0x1409E4D00 (KseAddHardwareId.c)
 *     KsepSdbMapToMemory @ 0x1409E6578 (KsepSdbMapToMemory.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A25360 (KsepEngineGetShimsFromRegistry.c)
 *     KsepGetShimCallbacksForDriver @ 0x140A25750 (KsepGetShimCallbacksForDriver.c)
 *     KsepShimDatabaseTime @ 0x140AFDC8C (KsepShimDatabaseTime.c)
 *     KseInitialize @ 0x140CCCEE0 (KseInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140CCD8F8 (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140CCDA60 (KseShimDatabaseBootInitialize.c)
 *     KseVersionLieInitialize @ 0x140CCDC54 (KseVersionLieInitialize.c)
 *     KsepEngineReadFlags @ 0x140D0821C (KsepEngineReadFlags.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x1404CCBF4 (KsepLogEtwMessage.c)
 */

__int64 KsepLogError(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 0LL, a2, (__int64 *)va, 0LL);
}
