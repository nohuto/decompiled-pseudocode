/*
 * XREFs of _lambda_315ad92e5be98155a16179dc024b8a3c_::_lambda_invoker_cdecl_ @ 0x1402DDF50
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_315ad92e5be98155a16179dc024b8a3c_::operator() @ 0x14014C890 (_lambda_315ad92e5be98155a16179dc024b8a3c_--operator().c)
 */

bool __fastcall lambda_315ad92e5be98155a16179dc024b8a3c_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  int v2; // r8d

  v2 = a2;
  LOBYTE(a2) = a1;
  return lambda_315ad92e5be98155a16179dc024b8a3c_::operator()(a1, a2, v2);
}
