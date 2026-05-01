/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___::_scalar_deleting_destructor_ @ 0x180228CD0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___::_CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___ @ 0x1802B8F90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___::_CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
