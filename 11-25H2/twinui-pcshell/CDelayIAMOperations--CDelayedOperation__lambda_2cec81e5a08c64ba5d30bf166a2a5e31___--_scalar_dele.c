/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___::_scalar_deleting_destructor_ @ 0x1802E4930
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___::_CDelayedOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___ @ 0x1802E3A54 (CDelayIAMOperations--CDelayedOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___--_CDelayedOpe.c)
 */

_QWORD *__fastcall CDelayIAMOperations::CDelayedOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  CDelayIAMOperations::CDelayedOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___::_CDelayedOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
