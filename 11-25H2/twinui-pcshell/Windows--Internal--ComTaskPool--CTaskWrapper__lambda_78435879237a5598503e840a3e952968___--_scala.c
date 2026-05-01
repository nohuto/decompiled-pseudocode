/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_78435879237a5598503e840a3e952968___::_scalar_deleting_destructor_ @ 0x1803A6660
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_78435879237a5598503e840a3e952968___::_CTaskWrapper__lambda_78435879237a5598503e840a3e952968___ @ 0x1803A4C04 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_78435879237a5598503e840a3e952968___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_78435879237a5598503e840a3e952968___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_78435879237a5598503e840a3e952968___::_CTaskWrapper__lambda_78435879237a5598503e840a3e952968___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x188);
  return a1;
}
