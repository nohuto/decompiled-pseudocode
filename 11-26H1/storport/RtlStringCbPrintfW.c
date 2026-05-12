/*
 * XREFs of RtlStringCbPrintfW @ 0x14004308C
 * Callers:
 *     PortMapDeleteAdapterEntry @ 0x140042F7C (PortMapDeleteAdapterEntry.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009F164 (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorAddChildAdapter @ 0x14012EDD8 (StorAddChildAdapter.c)
 *     PortMapDeleteLunEntry @ 0x14012FD10 (PortMapDeleteLunEntry.c)
 *     NvmeDumpCreateDumpDriverInfo @ 0x1401A1ED0 (NvmeDumpCreateDumpDriverInfo.c)
 *     NvmeNativeDumpCreateDumpDriverInfo @ 0x1401A3264 (NvmeNativeDumpCreateDumpDriverInfo.c)
 *     PortOpenDeviceKey @ 0x1401B71D8 (PortOpenDeviceKey.c)
 *     RaidAdapterCreateDriverInfo @ 0x1401BD5E4 (RaidAdapterCreateDriverInfo.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  unsigned __int64 v5; // rdi
  NTSTATUS v6; // ebx
  int v7; // eax
  NTSTATUS result; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 && v3 <= 0x7FFFFFFF )
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = _vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 || v7 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v7 == v5 )
    {
      pszDest[v5] = 0;
    }
    return v6;
  }
  else
  {
    result = -1073741811;
    if ( v3 )
      *pszDest = 0;
  }
  return result;
}
