/*
 * XREFs of ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x18009F340
 * Callers:
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x18008E014 (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x18009E064 (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x180082F7C (StringVPrintfWorkerW.c)
 */

HRESULT __fastcall StringCchVPrintfW(unsigned __int16 *a1, size_t a2, size_t *a3, va_list argList)
{
  HRESULT result; // eax

  if ( a2 - 1 <= 0x7FFFFFFE )
    return StringVPrintfWorkerW(a1, a2, a3, (STRSAFE_LPCWSTR)a3, argList);
  result = -2147024809;
  if ( a2 )
    *a1 = 0;
  return result;
}
