/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eef5741a3b0e50908ea80cafebdfea4b___::_scalar_deleting_destructor_ @ 0x1803A67A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eef5741a3b0e50908ea80cafebdfea4b___::_CTaskWrapper__lambda_eef5741a3b0e50908ea80cafebdfea4b___ @ 0x1803A4CCC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_eef5741a3b0e50908ea80cafebdfea4b___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eef5741a3b0e50908ea80cafebdfea4b___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eef5741a3b0e50908ea80cafebdfea4b___::_CTaskWrapper__lambda_eef5741a3b0e50908ea80cafebdfea4b___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x180);
  return a1;
}
