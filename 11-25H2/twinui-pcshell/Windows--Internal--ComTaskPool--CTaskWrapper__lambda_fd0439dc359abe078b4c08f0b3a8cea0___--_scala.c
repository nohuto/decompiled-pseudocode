/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0___::_scalar_deleting_destructor_ @ 0x1804EDF40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0___::_CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0___ @ 0x1804ED528 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0___::_CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
