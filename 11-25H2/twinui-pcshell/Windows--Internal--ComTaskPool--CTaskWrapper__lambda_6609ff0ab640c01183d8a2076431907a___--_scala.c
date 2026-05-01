/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6609ff0ab640c01183d8a2076431907a___::_scalar_deleting_destructor_ @ 0x18045F5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6609ff0ab640c01183d8a2076431907a___::_CTaskWrapper__lambda_6609ff0ab640c01183d8a2076431907a___ @ 0x18045C3F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6609ff0ab640c01183d8a2076431907a___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6609ff0ab640c01183d8a2076431907a___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6609ff0ab640c01183d8a2076431907a___::_CTaskWrapper__lambda_6609ff0ab640c01183d8a2076431907a___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x1B8);
  return a1;
}
