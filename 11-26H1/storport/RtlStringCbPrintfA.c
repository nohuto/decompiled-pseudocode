/*
 * XREFs of RtlStringCbPrintfA @ 0x140038338
 * Callers:
 *     PortBuildRegKeyName @ 0x1400380DC (PortBuildRegKeyName.c)
 *     StorPortDebugPrint @ 0x140038240 (StorPortDebugPrint.c)
 *     NvmeControllerEssentialInitialize @ 0x1400F2C48 (NvmeControllerEssentialInitialize.c)
 *     NvmeControllerStoreSubsystemId @ 0x1400FB178 (NvmeControllerStoreSubsystemId.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  size_t v4; // rdi
  NTSTATUS v5; // ebx
  int v6; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cbDest - 1 > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    v4 = cbDest - 1;
    v5 = 0;
    v6 = _vsnprintf(pszDest, cbDest - 1, pszFormat, va);
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
