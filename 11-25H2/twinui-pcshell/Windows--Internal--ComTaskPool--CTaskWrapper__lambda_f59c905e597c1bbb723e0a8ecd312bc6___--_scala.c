/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f59c905e597c1bbb723e0a8ecd312bc6___::_scalar_deleting_destructor_ @ 0x1803A67E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f59c905e597c1bbb723e0a8ecd312bc6___::_CTaskWrapper__lambda_f59c905e597c1bbb723e0a8ecd312bc6___ @ 0x1803A4CF4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f59c905e597c1bbb723e0a8ecd312bc6___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f59c905e597c1bbb723e0a8ecd312bc6___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f59c905e597c1bbb723e0a8ecd312bc6___::_CTaskWrapper__lambda_f59c905e597c1bbb723e0a8ecd312bc6___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
