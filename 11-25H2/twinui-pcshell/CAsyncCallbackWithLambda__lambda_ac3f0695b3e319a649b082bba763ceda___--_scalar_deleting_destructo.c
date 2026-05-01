/*
 * XREFs of CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___::_scalar_deleting_destructor_ @ 0x180300C10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___::_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___ @ 0x180300710 (CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___--_CAsyncCallbackWithLambda_.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___::_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
