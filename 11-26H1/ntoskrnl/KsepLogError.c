/*
 * XREFs of KsepLogError @ 0x1404C635C
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x140602270 (KseKPSOHookDriverTargeted.c)
 *     KseRegisterShimEx @ 0x1407C0040 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1407C0390 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1407C091C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1407C0E34 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDeletePatchSdb @ 0x1407C1488 (KsepDeletePatchSdb.c)
 *     KsepSdbBootInitialize @ 0x1407C153C (KsepSdbBootInitialize.c)
 *     KsepSdbMapToMemory @ 0x1409D65BC (KsepSdbMapToMemory.c)
 *     KseAddHardwareId @ 0x1409D80D0 (KseAddHardwareId.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A38400 (KsepEngineGetShimsFromRegistry.c)
 *     KsepGetShimCallbacksForDriver @ 0x140A387F0 (KsepGetShimCallbacksForDriver.c)
 *     KsepShimDatabaseTime @ 0x140AFFCFC (KsepShimDatabaseTime.c)
 *     KseInitialize @ 0x140CD3040 (KseInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140CD3A58 (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140CD3BC0 (KseShimDatabaseBootInitialize.c)
 *     KseVersionLieInitialize @ 0x140CD3DB4 (KseVersionLieInitialize.c)
 *     KsepEngineReadFlags @ 0x140D0E4EC (KsepEngineReadFlags.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x1404C6394 (KsepLogEtwMessage.c)
 */

__int64 KsepLogError(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 0LL, a2, (__int64 *)va, 0LL);
}
