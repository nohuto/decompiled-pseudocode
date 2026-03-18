/*
 * XREFs of ACPIEcInstallOpRegionHandler @ 0x1400AF0E0
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1400600F0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     RegisterOperationRegionHandler @ 0x1400D4214 (RegisterOperationRegionHandler.c)
 */

__int64 ACPIEcInstallOpRegionHandler()
{
  __int64 v0; // r10
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  AcpiGetDriverProxyWrappedEndpoint(&v2, (__int64)ACPIEcOpRegionHandler);
  return RegisterOperationRegionHandler(*(_QWORD *)(v0 + 56), 2, 3, v2, v0, v0 + 80);
}
