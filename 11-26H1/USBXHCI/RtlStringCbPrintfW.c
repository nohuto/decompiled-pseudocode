/*
 * XREFs of RtlStringCbPrintfW @ 0x140045298
 * Callers:
 *     TelemetryData_CreateReport @ 0x140057444 (TelemetryData_CreateReport.c)
 *     Controller_SetDeviceDescription @ 0x140077958 (Controller_SetDeviceDescription.c)
 *     TelemetryData_pCreateDumpFile @ 0x14007F4F4 (TelemetryData_pCreateDumpFile.c)
 *     TelemetryData_pInitWerContext @ 0x14007F824 (TelemetryData_pInitWerContext.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x140045330 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 && v3 <= 0x7FFFFFFF )
    return RtlStringVPrintfWorkerW(pszDest, v3, (size_t *)pszFormat, pszFormat, va);
  result = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return result;
}
