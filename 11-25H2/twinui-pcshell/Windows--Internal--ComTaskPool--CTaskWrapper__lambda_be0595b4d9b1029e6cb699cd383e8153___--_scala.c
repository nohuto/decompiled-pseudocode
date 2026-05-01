/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be0595b4d9b1029e6cb699cd383e8153___::_scalar_deleting_destructor_ @ 0x1803A6720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be0595b4d9b1029e6cb699cd383e8153___::_CTaskWrapper__lambda_be0595b4d9b1029e6cb699cd383e8153___ @ 0x1803A4C7C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_be0595b4d9b1029e6cb699cd383e8153___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be0595b4d9b1029e6cb699cd383e8153___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be0595b4d9b1029e6cb699cd383e8153___::_CTaskWrapper__lambda_be0595b4d9b1029e6cb699cd383e8153___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x160);
  return a1;
}
