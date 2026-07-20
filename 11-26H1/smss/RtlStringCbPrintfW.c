/*
 * XREFs of RtlStringCbPrintfW @ 0x140004B90
 * Callers:
 *     SmpStartCsr @ 0x1400032A0 (SmpStartCsr.c)
 *     SmpParseCommandLine @ 0x140004280 (SmpParseCommandLine.c)
 *     SmpSaveOldPageFiles @ 0x140009C20 (SmpSaveOldPageFiles.c)
 *     SmpClearTemporaryFiles @ 0x14000DDB4 (SmpClearTemporaryFiles.c)
 *     SmpCleanupStalePageFiles @ 0x14000F040 (SmpCleanupStalePageFiles.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x1400103C0 (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpCreateTempFile @ 0x140011D04 (SmpCreateTempFile.c)
 *     SmpGetCrashParameters @ 0x140011EA8 (SmpGetCrashParameters.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x140013FA0 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpInvokeAutoChk @ 0x1400158B8 (SmpInvokeAutoChk.c)
 *     SmpLoadDataFromRegistry @ 0x1400159FC (SmpLoadDataFromRegistry.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  unsigned __int64 v5; // rsi
  NTSTATUS v6; // ebx
  int v7; // eax
  NTSTATUS result; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 && v3 <= 0x7FFFFFFF )
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = _vsnwprintf_s(pszDest, v3, v3 - 1, pszFormat, va);
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
