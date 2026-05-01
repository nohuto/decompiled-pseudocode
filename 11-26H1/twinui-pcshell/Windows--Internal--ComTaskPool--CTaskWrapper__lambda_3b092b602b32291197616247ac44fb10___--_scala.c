/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3b092b602b32291197616247ac44fb10___::_scalar_deleting_destructor_ @ 0x18046B880
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3b092b602b32291197616247ac44fb10___::_CTaskWrapper__lambda_3b092b602b32291197616247ac44fb10___ @ 0x180468740 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3b092b602b32291197616247ac44fb10___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3b092b602b32291197616247ac44fb10___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3b092b602b32291197616247ac44fb10___::_CTaskWrapper__lambda_3b092b602b32291197616247ac44fb10___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x170);
  return a1;
}
