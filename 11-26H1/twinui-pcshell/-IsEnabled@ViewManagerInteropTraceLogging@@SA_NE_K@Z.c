/*
 * XREFs of ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x18004DF74
 * Callers:
 *     _lambda_7e2780c5544860c2230bb0766c4bf63e_::operator() @ 0x180439A38 (_lambda_7e2780c5544860c2230bb0766c4bf63e_--operator().c)
 *     _lambda_d0edc6b8eea04ad0c12ef80d845b920d_::operator() @ 0x18043A768 (_lambda_d0edc6b8eea04ad0c12ef80d845b920d_--operator().c)
 *     _lambda_20c9707ab79eec934759cb2bec9fa53e_::operator() @ 0x180444E74 (_lambda_20c9707ab79eec934759cb2bec9fa53e_--operator().c)
 *     _lambda_a977afc9c59ce0858e320274f367b95a_::operator() @ 0x180446234 (_lambda_a977afc9c59ce0858e320274f367b95a_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAAPEAVViewManagerInteropTraceLogging@@P6AXXZ@Z @ 0x18004E0D8 (-get@-$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAAPEAVViewManagerInteropTrac.c)
 */

bool __fastcall ViewManagerInteropTraceLogging::IsEnabled(__int64 a1)
{
  _DWORD *v1; // rcx
  bool result; // al

  v1 = *(_DWORD **)(wil::details::static_lazy<ViewManagerInteropTraceLogging>::get(
                      a1,
                      _lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_)
                  + 8);
  result = 0;
  if ( v1 )
    return *v1 != 0;
  return result;
}
