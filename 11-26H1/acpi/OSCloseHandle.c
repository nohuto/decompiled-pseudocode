/*
 * XREFs of OSCloseHandle @ 0x1400D1E58
 * Callers:
 *     ACPIRootPowerCallBack @ 0x140043150 (ACPIRootPowerCallBack.c)
 *     AMLIAddNamespaceOverride @ 0x14006D664 (AMLIAddNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverride @ 0x14006D790 (AMLIAddNextNamespaceOverride.c)
 *     OSReadAcpiConfigurationData @ 0x1400D7CF8 (OSReadAcpiConfigurationData.c)
 *     ACPIInitReadRegistryKeys @ 0x1400D7F6C (ACPIInitReadRegistryKeys.c)
 *     ACPIInitGetPlatformOverrides @ 0x1400D8538 (ACPIInitGetPlatformOverrides.c)
 *     AcpiDiagInitialize @ 0x1400D8B98 (AcpiDiagInitialize.c)
 *     ACPIRegDumpAcpiTable @ 0x1400DE28C (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OSCloseHandle(void *a1)
{
  return ZwClose(a1);
}
