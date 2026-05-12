/*
 * XREFs of RtlStringCchPrintfW @ 0x1400470E4
 * Callers:
 *     RaidCreateDeviceName @ 0x140047038 (RaidCreateDeviceName.c)
 *     NvmeCreateSymbolicLink @ 0x14008F714 (NvmeCreateSymbolicLink.c)
 *     NvmeDeleteSymbolicLink @ 0x14008F8E8 (NvmeDeleteSymbolicLink.c)
 *     StorCreateSymbolicLink @ 0x140096CB4 (StorCreateSymbolicLink.c)
 *     StorDeleteSymbolicLink @ 0x1400970DC (StorDeleteSymbolicLink.c)
 *     RaidUnitGetDeviceId @ 0x1400A7910 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetInstanceId @ 0x1400A80B4 (RaidUnitGetInstanceId.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1400B8A68 (StorpLogPhysicalTopologyInfo.c)
 *     NvmeNamespaceGetDeviceId @ 0x140106390 (NvmeNamespaceGetDeviceId.c)
 *     NvmeNamespaceGetDeviceIdEx @ 0x140106478 (NvmeNamespaceGetDeviceIdEx.c)
 *     NvmeNamespaceGetInstanceId @ 0x140106D58 (NvmeNamespaceGetInstanceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1401898F0 (RaUnitQueryDeviceTextIrp.c)
 *     NvmeNamespaceQueryDeviceTextIrp @ 0x1401A7B78 (NvmeNamespaceQueryDeviceTextIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v4; // rsi
  NTSTATUS v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
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
    v6 = _vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147483643;
      goto LABEL_5;
    }
    if ( v6 == v4 )
LABEL_5:
      pszDest[v4] = 0;
  }
  return v5;
}
