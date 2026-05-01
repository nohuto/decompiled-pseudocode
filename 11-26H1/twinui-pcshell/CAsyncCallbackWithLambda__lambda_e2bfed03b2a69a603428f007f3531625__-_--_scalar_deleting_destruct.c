/*
 * XREFs of CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&_::_scalar_deleting_destructor_ @ 0x1801E9EC0
 * Callers:
 *     <none>
 * Callees:
 *     CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&_::_CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&_ @ 0x1801E9EFC (CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__-_--_CAsyncCallbackWithLambda.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625____::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625____::_CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625____();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
