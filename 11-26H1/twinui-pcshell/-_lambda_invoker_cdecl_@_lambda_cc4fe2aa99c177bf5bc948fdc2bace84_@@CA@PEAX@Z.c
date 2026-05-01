/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_cc4fe2aa99c177bf5bc948fdc2bace84_@@CA@PEAX@Z @ 0x1803251D0
 * Callers:
 *     <none>
 * Callees:
 *     ?fire_immediately@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x1803319D0 (-fire_immediately@timespan_awaiter@impl@winrt@@AEAAXXZ.c)
 */

void __fastcall _lambda_cc4fe2aa99c177bf5bc948fdc2bace84_::_lambda_invoker_cdecl_(volatile __int32 *a1)
{
  if ( _InterlockedExchange(a1 + 8, 2) == 1 )
    winrt::impl::timespan_awaiter::fire_immediately((winrt::impl::timespan_awaiter *)a1);
}
