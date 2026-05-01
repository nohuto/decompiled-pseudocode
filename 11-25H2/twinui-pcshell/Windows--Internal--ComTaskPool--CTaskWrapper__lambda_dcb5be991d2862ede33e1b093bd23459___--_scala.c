/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dcb5be991d2862ede33e1b093bd23459___::_scalar_deleting_destructor_ @ 0x1805E1340
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dcb5be991d2862ede33e1b093bd23459___::_CTaskWrapper__lambda_dcb5be991d2862ede33e1b093bd23459___ @ 0x1805E0E34 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dcb5be991d2862ede33e1b093bd23459___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dcb5be991d2862ede33e1b093bd23459___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dcb5be991d2862ede33e1b093bd23459___::_CTaskWrapper__lambda_dcb5be991d2862ede33e1b093bd23459___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
