/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a34c8618806693e8e74fc06704696ec1___::_scalar_deleting_destructor_ @ 0x1801E6A10
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___::_CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___ @ 0x1801E6A4C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a34c8618806693e8e74fc06704696ec1___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___::_CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
