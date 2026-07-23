/*
 * XREFs of KsepLogInfo @ 0x1404C6324
 * Callers:
 *     KseRegisterShimEx @ 0x1407C0040 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1407C0390 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1407C091C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1407C0E34 (KsepResolveApplicableShimsForDriver.c)
 *     KseQueryDeviceData @ 0x1409D6F80 (KseQueryDeviceData.c)
 *     KseDriverUnloadImage @ 0x140A380BC (KseDriverUnloadImage.c)
 *     KsepGetShimsForDriver @ 0x140A3865C (KsepGetShimsForDriver.c)
 *     KsepGetShimCallbacksForDriver @ 0x140A387F0 (KsepGetShimCallbacksForDriver.c)
 *     KseDriverLoadImage @ 0x140A38A18 (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x140A39400 (KseShimDriverIoCallbacks.c)
 *     KseInitialize @ 0x140CD3040 (KseInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140CD3750 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140D0E4EC (KsepEngineReadFlags.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x1404C6394 (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va, 0LL);
}
