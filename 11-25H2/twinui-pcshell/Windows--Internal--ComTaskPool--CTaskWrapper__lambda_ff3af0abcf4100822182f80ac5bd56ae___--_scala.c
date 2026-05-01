/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae___::_scalar_deleting_destructor_ @ 0x18045F720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae___::_CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae___ @ 0x18045C4B8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae___::_CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x60);
  return a1;
}
