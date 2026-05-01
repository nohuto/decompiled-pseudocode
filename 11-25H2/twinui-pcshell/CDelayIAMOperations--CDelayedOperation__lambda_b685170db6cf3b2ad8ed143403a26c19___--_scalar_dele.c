/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_b685170db6cf3b2ad8ed143403a26c19___::_scalar_deleting_destructor_ @ 0x1801FD070
 * Callers:
 *     <none>
 * Callees:
 *     CDelayIAMOperations::CDelayedOperation__lambda_b685170db6cf3b2ad8ed143403a26c19___::_CDelayedOperation__lambda_b685170db6cf3b2ad8ed143403a26c19___ @ 0x1801FD0AC (CDelayIAMOperations--CDelayedOperation__lambda_b685170db6cf3b2ad8ed143403a26c19___--_CDelayedOpe.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall CDelayIAMOperations::CDelayedOperation__lambda_b685170db6cf3b2ad8ed143403a26c19___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CDelayIAMOperations::CDelayedOperation__lambda_b685170db6cf3b2ad8ed143403a26c19___::_CDelayedOperation__lambda_b685170db6cf3b2ad8ed143403a26c19___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
