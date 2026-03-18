/*
 * XREFs of RtlStringCchPrintfA @ 0x140008FC0
 * Callers:
 *     LogError @ 0x140007244 (LogError.c)
 *     GetNameSpaceObjectNoLock @ 0x140007700 (GetNameSpaceObjectNoLock.c)
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     ConvertToString @ 0x140016ABC (ConvertToString.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x14003A130 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x14003A378 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x14003A76C (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIGetConvertToPnpIDWide @ 0x14003AC14 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x14004B568 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x14004C994 (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x14004CE50 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x14004F0C8 (ACPIGetConvertToStringWide.c)
 *     ACPIAmliDoubleToName @ 0x1400519AC (ACPIAmliDoubleToName.c)
 *     ACPIBuildDockExtension @ 0x1400579E0 (ACPIBuildDockExtension.c)
 *     ACPIBuildProcessorExtension @ 0x140059694 (ACPIBuildProcessorExtension.c)
 *     ACPICMButtonStartWorker @ 0x14005BE90 (ACPICMButtonStartWorker.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1400B6AA8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1400B6D14 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1400B6F30 (OSOpenAMLINamespaceOverrideHandle.c)
 *     ACPIInitReadRegistryKeys @ 0x1400D7F6C (ACPIInitReadRegistryKeys.c)
 *     ACPIRegDumpAcpiTable @ 0x1400DE28C (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  size_t v4; // rdi
  NTSTATUS v5; // ebx
  int v6; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v4 = cchDest - 1;
    v5 = 0;
    v6 = _vsnprintf(pszDest, cchDest - 1, pszFormat, va);
    if ( v6 < 0 || v6 > v4 )
    {
      pszDest[v4] = 0;
      return -2147483643;
    }
    else if ( v6 == v4 )
    {
      pszDest[v4] = 0;
    }
  }
  return v5;
}
