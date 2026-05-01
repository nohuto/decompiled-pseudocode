/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___::_scalar_deleting_destructor_ @ 0x1802DE1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___::_CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___ @ 0x1802DD0F4 (CDelayIAMOperations--CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___--_CDelayedOpe.c)
 */

_QWORD *__fastcall CDelayIAMOperations::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  CDelayIAMOperations::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___::_CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
