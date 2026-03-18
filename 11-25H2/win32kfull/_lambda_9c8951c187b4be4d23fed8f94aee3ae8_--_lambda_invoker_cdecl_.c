/*
 * XREFs of _lambda_9c8951c187b4be4d23fed8f94aee3ae8_::_lambda_invoker_cdecl_ @ 0x1402DDF70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_9c8951c187b4be4d23fed8f94aee3ae8_::operator() @ 0x140224C04 (_lambda_9c8951c187b4be4d23fed8f94aee3ae8_--operator().c)
 */

bool __fastcall lambda_9c8951c187b4be4d23fed8f94aee3ae8_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  int v2; // r8d

  v2 = a2;
  LOBYTE(a2) = a1;
  return lambda_9c8951c187b4be4d23fed8f94aee3ae8_::operator()(a1, a2, v2);
}
