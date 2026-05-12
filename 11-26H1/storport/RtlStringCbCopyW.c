/*
 * XREFs of RtlStringCbCopyW @ 0x14003DB18
 * Callers:
 *     NvmeDumpCreateDumpDriverInfo @ 0x1401A1ED0 (NvmeDumpCreateDumpDriverInfo.c)
 *     NvmeNativeDumpCreateDumpDriverInfo @ 0x1401A3264 (NvmeNativeDumpCreateDumpDriverInfo.c)
 *     RaidAdapterCreateDriverInfo @ 0x1401BD5E4 (RaidAdapterCreateDriverInfo.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x14003DB54 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCbCopyW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // rdx
  NTSTATUS result; // eax
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = cbDest >> 1;
  if ( v3 && v3 <= 0x7FFFFFFF )
    return RtlStringCopyWorkerW(pszDest, v3, (size_t *)pszSrc, pszSrc, v5);
  result = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return result;
}
