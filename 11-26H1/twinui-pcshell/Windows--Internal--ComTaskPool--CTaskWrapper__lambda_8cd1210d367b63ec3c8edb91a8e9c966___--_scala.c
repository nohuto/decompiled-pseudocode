/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8cd1210d367b63ec3c8edb91a8e9c966___::_scalar_deleting_destructor_ @ 0x1803AFB60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8cd1210d367b63ec3c8edb91a8e9c966___::_CTaskWrapper__lambda_8cd1210d367b63ec3c8edb91a8e9c966___ @ 0x1803ADF34 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8cd1210d367b63ec3c8edb91a8e9c966___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8cd1210d367b63ec3c8edb91a8e9c966___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8cd1210d367b63ec3c8edb91a8e9c966___::_CTaskWrapper__lambda_8cd1210d367b63ec3c8edb91a8e9c966___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
