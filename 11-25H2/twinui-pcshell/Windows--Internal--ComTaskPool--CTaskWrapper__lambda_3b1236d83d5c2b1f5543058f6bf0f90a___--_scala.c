/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___::_scalar_deleting_destructor_ @ 0x18043A2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___::_CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___ @ 0x18043859C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___::_CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
