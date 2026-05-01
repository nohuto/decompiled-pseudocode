/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9___::_scalar_deleting_destructor_ @ 0x1803BF100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9___::_CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9___ @ 0x1803BF090 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9___::_CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
