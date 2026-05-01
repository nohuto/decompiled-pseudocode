/*
 * XREFs of CAsyncCallbackWithLambda__lambda_aaa29ad71ed7f57812cd6c4aeeafb90e___::_scalar_deleting_destructor_ @ 0x1804EAC40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_b9aff6db1ba7d59bcc50491da7f18a76___::_CAsyncCallbackWithLambda__lambda_b9aff6db1ba7d59bcc50491da7f18a76___ @ 0x1804EA778 (CAsyncCallbackWithLambda__lambda_b9aff6db1ba7d59bcc50491da7f18a76___--_CAsyncCallbackWithLambda_.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_aaa29ad71ed7f57812cd6c4aeeafb90e___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_b9aff6db1ba7d59bcc50491da7f18a76___::_CAsyncCallbackWithLambda__lambda_b9aff6db1ba7d59bcc50491da7f18a76___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
