/*
 * XREFs of _lambda_28f03d232961592d9fdef10e21370bce_::_lambda_invoker_cdecl_ @ 0x14021AC00
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_28f03d232961592d9fdef10e21370bce_::operator() @ 0x14021AC1C (_lambda_28f03d232961592d9fdef10e21370bce_--operator().c)
 */

__int64 __fastcall lambda_28f03d232961592d9fdef10e21370bce_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = (unsigned int)a2;
  LOBYTE(a2) = a1;
  return lambda_28f03d232961592d9fdef10e21370bce_::operator()(a1, a2, v2);
}
