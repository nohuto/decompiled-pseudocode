/*
 * XREFs of KsepLogInfo @ 0x1404CCB84
 * Callers:
 *     KseRegisterShimEx @ 0x1407BCFE0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1407BD330 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1407BD8BC (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1407BDDD4 (KsepResolveApplicableShimsForDriver.c)
 *     KseQueryDeviceData @ 0x1409E5A00 (KseQueryDeviceData.c)
 *     KseDriverUnloadImage @ 0x140A2501C (KseDriverUnloadImage.c)
 *     KsepGetShimsForDriver @ 0x140A255BC (KsepGetShimsForDriver.c)
 *     KsepGetShimCallbacksForDriver @ 0x140A25750 (KsepGetShimCallbacksForDriver.c)
 *     KseDriverLoadImage @ 0x140A25978 (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x140A26360 (KseShimDriverIoCallbacks.c)
 *     KseInitialize @ 0x140CCCEE0 (KseInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140CCD5F0 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140D0821C (KsepEngineReadFlags.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x1404CCBF4 (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va, 0LL);
}
