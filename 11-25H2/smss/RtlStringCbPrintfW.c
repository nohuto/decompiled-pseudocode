/*
 * XREFs of RtlStringCbPrintfW @ 0x1400058D0
 * Callers:
 *     SmpStartCsr @ 0x140004120 (SmpStartCsr.c)
 *     SmpParseCommandLine @ 0x140004FD0 (SmpParseCommandLine.c)
 *     SmpSaveOldPageFiles @ 0x140009FD0 (SmpSaveOldPageFiles.c)
 *     SmpClearTemporaryFiles @ 0x14000E0F8 (SmpClearTemporaryFiles.c)
 *     SmpCleanupStalePageFiles @ 0x14000F3F0 (SmpCleanupStalePageFiles.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14001078C (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpCreateTempFile @ 0x1400120D4 (SmpCreateTempFile.c)
 *     SmpGetCrashParameters @ 0x14001227C (SmpGetCrashParameters.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x1400143B0 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpInvokeAutoChk @ 0x140015CB8 (SmpInvokeAutoChk.c)
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS result; // eax
  unsigned __int64 v6; // rsi
  NTSTATUS v7; // ebx
  int v8; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
  {
    v6 = v3 - 1;
    v7 = 0;
    v8 = _vsnwprintf_s(pszDest, v3, v3 - 1, pszFormat, va);
    if ( v8 < 0 || v8 > v6 )
    {
      pszDest[v6] = 0;
      return -2147483643;
    }
    else if ( v8 == v6 )
    {
      pszDest[v6] = 0;
    }
    return v7;
  }
  else
  {
    result = -1073741811;
    if ( v3 )
      *pszDest = 0;
  }
  return result;
}
