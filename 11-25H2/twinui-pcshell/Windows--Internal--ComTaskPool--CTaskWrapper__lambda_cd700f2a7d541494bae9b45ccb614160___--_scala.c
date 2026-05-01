/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160___::_scalar_deleting_destructor_ @ 0x1803095F0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1___::_CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1___ @ 0x1800D573C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1___::_CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
