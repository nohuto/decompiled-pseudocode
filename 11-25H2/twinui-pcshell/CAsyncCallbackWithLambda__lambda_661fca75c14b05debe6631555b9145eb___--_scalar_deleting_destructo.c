/*
 * XREFs of CAsyncCallbackWithLambda__lambda_661fca75c14b05debe6631555b9145eb___::_scalar_deleting_destructor_ @ 0x1804D8740
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_661fca75c14b05debe6631555b9145eb___::_CAsyncCallbackWithLambda__lambda_661fca75c14b05debe6631555b9145eb___ @ 0x1804D8240 (CAsyncCallbackWithLambda__lambda_661fca75c14b05debe6631555b9145eb___--_CAsyncCallbackWithLambda_.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_661fca75c14b05debe6631555b9145eb___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_661fca75c14b05debe6631555b9145eb___::_CAsyncCallbackWithLambda__lambda_661fca75c14b05debe6631555b9145eb___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
