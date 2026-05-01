/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6___::_scalar_deleting_destructor_ @ 0x180681DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6___::_CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6___ @ 0x180681738 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6___::_CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x178);
  return a1;
}
