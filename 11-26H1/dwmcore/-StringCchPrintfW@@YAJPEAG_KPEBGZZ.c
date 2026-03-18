/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800795B8
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180078E04 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x1800792F0 (-OpenDxBltEvent@@YAJ_KPEAPEAX@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180080E30 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1801D4168 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18020A440 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180222AEC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ??$ReportFailure_Msg@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x18025C248 (--$ReportFailure_Msg@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x180293AE8 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x1802215D8 (_vsnwprintf.c)
 */

__int64 StringCchPrintfW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147024774;
    }
    else if ( v6 != v4 )
    {
      return v5;
    }
    a1[v4] = 0;
    return v5;
  }
  v5 = -2147024809;
  if ( a2 )
    *a1 = 0;
  return v5;
}
