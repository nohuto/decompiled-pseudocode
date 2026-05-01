/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_799586314299042aa0ed2a24b32e5288___::_scalar_deleting_destructor_ @ 0x1804EAC80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_799586314299042aa0ed2a24b32e5288___::_CTaskWrapper__lambda_799586314299042aa0ed2a24b32e5288___ @ 0x1804EA7A8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_799586314299042aa0ed2a24b32e5288___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_799586314299042aa0ed2a24b32e5288___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_799586314299042aa0ed2a24b32e5288___::_CTaskWrapper__lambda_799586314299042aa0ed2a24b32e5288___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
