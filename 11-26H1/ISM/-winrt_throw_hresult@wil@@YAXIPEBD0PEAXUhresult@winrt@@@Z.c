/*
 * XREFs of ?winrt_throw_hresult@wil@@YAXIPEBD0PEAXUhresult@winrt@@@Z @ 0x1800DEF30
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z @ 0x18008F858 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z.c)
 */

__int64 __fastcall wil::winrt_throw_hresult(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  wil::details *v6; // [rsp+30h] [rbp-18h]

  LODWORD(v6) = a5;
  return wil::details::ReportFailure_Hr<2>(0LL, a1, a2, a3, 0LL, a4, v6);
}
