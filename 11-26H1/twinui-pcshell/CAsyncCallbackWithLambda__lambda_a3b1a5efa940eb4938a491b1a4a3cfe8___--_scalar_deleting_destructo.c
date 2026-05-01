/*
 * XREFs of CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___::_scalar_deleting_destructor_ @ 0x1806BEDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___::_CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___ @ 0x1806BED3C (CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___--_CAsyncCallbackWithLambda_.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___::_CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
