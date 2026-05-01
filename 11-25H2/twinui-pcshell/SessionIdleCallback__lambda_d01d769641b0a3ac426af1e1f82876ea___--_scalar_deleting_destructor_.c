/*
 * XREFs of SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___::_scalar_deleting_destructor_ @ 0x1800B9A40
 * Callers:
 *     <none>
 * Callees:
 *     SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___::_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___ @ 0x1800B9658 (SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___--_SessionIdleCallback__lambda_d0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___::_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
