/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7fad240542ce92aae90a7e34c5fc06d3___::_scalar_deleting_destructor_ @ 0x1802E1380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7fad240542ce92aae90a7e34c5fc06d3___::_CTaskWrapper__lambda_7fad240542ce92aae90a7e34c5fc06d3___ @ 0x1802E1178 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7fad240542ce92aae90a7e34c5fc06d3___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7fad240542ce92aae90a7e34c5fc06d3___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7fad240542ce92aae90a7e34c5fc06d3___::_CTaskWrapper__lambda_7fad240542ce92aae90a7e34c5fc06d3___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
