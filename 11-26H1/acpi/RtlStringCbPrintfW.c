/*
 * XREFs of RtlStringCbPrintfW @ 0x14005B714
 * Callers:
 *     ACPIBusIrpQueryInstanceId @ 0x1400CADD4 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1400CC08C (ACPIBusIrpQueryDeviceId.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_0 @ 0x14004009C (RtlStringVPrintfWorkerW_0.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 && v3 <= 0x7FFFFFFF )
    return RtlStringVPrintfWorkerW_0(pszDest, v3, 0LL, pszFormat, va);
  result = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return result;
}
