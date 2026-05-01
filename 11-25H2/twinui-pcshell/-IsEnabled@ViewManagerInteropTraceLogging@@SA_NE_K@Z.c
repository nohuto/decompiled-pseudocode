/*
 * XREFs of ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x18011216C
 * Callers:
 *     _lambda_7e2780c5544860c2230bb0766c4bf63e_::operator() @ 0x18042D7EC (_lambda_7e2780c5544860c2230bb0766c4bf63e_--operator().c)
 *     _lambda_d0edc6b8eea04ad0c12ef80d845b920d_::operator() @ 0x18042E4F4 (_lambda_d0edc6b8eea04ad0c12ef80d845b920d_--operator().c)
 *     _lambda_20c9707ab79eec934759cb2bec9fa53e_::operator() @ 0x180438808 (_lambda_20c9707ab79eec934759cb2bec9fa53e_--operator().c)
 *     _lambda_a977afc9c59ce0858e320274f367b95a_::operator() @ 0x180439E08 (_lambda_a977afc9c59ce0858e320274f367b95a_--operator().c)
 * Callees:
 *     ?Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ @ 0x180112194 (-Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ.c)
 */

bool __fastcall ViewManagerInteropTraceLogging::IsEnabled()
{
  _DWORD *v0; // rcx
  bool result; // al

  v0 = (_DWORD *)*((_QWORD *)ViewManagerInteropTraceLogging::Instance() + 1);
  result = 0;
  if ( v0 )
    return *v0 != 0;
  return result;
}
