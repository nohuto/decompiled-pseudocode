/*
 * XREFs of ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x1800248B4
 * Callers:
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x18003349C (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x1800371BC (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x180030A4C (_vsnwprintf.c)
 */

__int64 __fastcall StringCchVPrintfW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, va_list a4)
{
  unsigned __int64 v5; // rsi
  unsigned int v6; // edi
  int v7; // eax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v6 = -2147024809;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v5 = a2 - 1;
    v6 = 0;
    v7 = vsnwprintf(a1, a2 - 1, a3, a4);
    if ( v7 < 0 || v7 > v5 )
    {
      v6 = -2147024774;
      goto LABEL_5;
    }
    if ( v7 == v5 )
LABEL_5:
      a1[v5] = 0;
  }
  return v6;
}
