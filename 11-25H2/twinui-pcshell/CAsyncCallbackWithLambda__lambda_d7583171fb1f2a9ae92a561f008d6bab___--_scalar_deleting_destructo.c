/*
 * XREFs of CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___::_scalar_deleting_destructor_ @ 0x1804EDF00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___::_CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___ @ 0x1804ED4F8 (CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___--_CAsyncCallbackWithLambda_.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___::_CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
