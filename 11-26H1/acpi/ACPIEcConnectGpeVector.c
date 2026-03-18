/*
 * XREFs of ACPIEcConnectGpeVector @ 0x1400AED98
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x14005FC00 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcConnectInterrupt @ 0x1400AEED8 (ACPIEcConnectInterrupt.c)
 * Callees:
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     ACPIVectorConnect @ 0x14006AC70 (ACPIVectorConnect.c)
 */

__int64 ACPIEcConnectGpeVector()
{
  __int64 v0; // r10
  __int64 v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  AcpiGetDriverProxyWrappedEndpoint(&v2, (__int64)ACPIEcGpeServiceRoutine);
  return ACPIVectorConnect(0LL, *(_DWORD *)(v0 + 48), 1, 0, v2, v0, (char **)(v0 + 72));
}
