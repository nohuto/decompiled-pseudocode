/*
 * XREFs of CAsyncCallbackWithLambda__lambda_90c64e6b4e677faa5e1350e6dea894c9___::_scalar_deleting_destructor_ @ 0x180308440
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_90c64e6b4e677faa5e1350e6dea894c9___::_CAsyncCallbackWithLambda__lambda_90c64e6b4e677faa5e1350e6dea894c9___ @ 0x18030796C (CAsyncCallbackWithLambda__lambda_90c64e6b4e677faa5e1350e6dea894c9___--_CAsyncCallbackWithLambda_.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_90c64e6b4e677faa5e1350e6dea894c9___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_90c64e6b4e677faa5e1350e6dea894c9___::_CAsyncCallbackWithLambda__lambda_90c64e6b4e677faa5e1350e6dea894c9___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x58);
  return a1;
}
