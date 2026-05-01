/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___::_scalar_deleting_destructor_ @ 0x1802DE200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___::_CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___ @ 0x1802DD120 (CDelayIAMOperations--CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___--_CDelayedOpe.c)
 */

_QWORD *__fastcall CDelayIAMOperations::CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  CDelayIAMOperations::CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___::_CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
