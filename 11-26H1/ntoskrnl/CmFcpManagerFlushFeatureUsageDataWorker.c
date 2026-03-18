/*
 * XREFs of CmFcpManagerFlushFeatureUsageDataWorker @ 0x140ABF640
 * Callers:
 *     <none>
 * Callees:
 *     CmFcpManagerProcessUsageDataProviders @ 0x140ABF658 (CmFcpManagerProcessUsageDataProviders.c)
 */

__int64 __fastcall CmFcpManagerFlushFeatureUsageDataWorker(__int64 a1, __int64 a2)
{
  return CmFcpManagerProcessUsageDataProviders(a2);
}
