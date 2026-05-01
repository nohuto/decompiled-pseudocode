/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_535fe0d4889b9fd58d63caa6da13cd83_@@CA@PEAX@Z @ 0x180325120
 * Callers:
 *     <none>
 * Callees:
 *     ?fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x180331984 (-fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ.c)
 */

void __fastcall _lambda_535fe0d4889b9fd58d63caa6da13cd83_::_lambda_invoker_cdecl_(volatile __int32 *a1)
{
  if ( _InterlockedExchange(a1 + 12, 2) == 1 )
    winrt::impl::signal_awaiter::fire_immediately((winrt::impl::signal_awaiter *)a1);
}
