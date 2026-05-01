/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___::_scalar_deleting_destructor_ @ 0x1801F6C80
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___::_CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___ @ 0x1801F6CBC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___::_CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
