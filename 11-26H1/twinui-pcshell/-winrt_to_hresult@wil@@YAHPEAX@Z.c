/*
 * XREFs of ?winrt_to_hresult@wil@@YAHPEAX@Z @ 0x1802D9A80
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180050D98 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::winrt_to_hresult(wil *this, void *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]

  return wil::details::ReportFailure_CaughtException<1>(0LL, 0, 0LL, a4, v5, (__int64)this);
}
