/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180082F30
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180082D1C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x180082E80 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x18008E014 (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18009D470 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x18009E338 (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@stdext@@PEAG_K@Z @ 0x18009E3C8 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@stdext@@PEAG_K@Z.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x180082F7C (StringVPrintfWorkerW.c)
 */

HRESULT StringCchPrintfW(unsigned __int16 *a1, size_t a2, size_t *a3, ...)
{
  HRESULT result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( a2 - 1 <= 0x7FFFFFFE )
    return StringVPrintfWorkerW(a1, a2, a3, (STRSAFE_LPCWSTR)a3, va);
  result = -2147024809;
  if ( a2 )
    *a1 = 0;
  return result;
}
