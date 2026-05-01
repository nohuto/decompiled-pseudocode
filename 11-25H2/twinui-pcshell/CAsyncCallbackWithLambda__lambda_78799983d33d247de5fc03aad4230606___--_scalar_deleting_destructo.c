/*
 * XREFs of CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606___::_scalar_deleting_destructor_ @ 0x180499D60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606___::_CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606___ @ 0x180499D04 (CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606___--_CAsyncCallbackWithLambda_.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606___::_CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
