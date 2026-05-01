/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79f636e8e6582e714a3786e698ab1b4d___::_scalar_deleting_destructor_ @ 0x1803A66A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79f636e8e6582e714a3786e698ab1b4d___::_CTaskWrapper__lambda_79f636e8e6582e714a3786e698ab1b4d___ @ 0x1803A4C2C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_79f636e8e6582e714a3786e698ab1b4d___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79f636e8e6582e714a3786e698ab1b4d___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79f636e8e6582e714a3786e698ab1b4d___::_CTaskWrapper__lambda_79f636e8e6582e714a3786e698ab1b4d___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x160);
  return a1;
}
