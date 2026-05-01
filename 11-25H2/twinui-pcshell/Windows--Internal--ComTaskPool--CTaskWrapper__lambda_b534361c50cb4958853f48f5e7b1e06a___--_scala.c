/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___::_scalar_deleting_destructor_ @ 0x1800507B0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___::_CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___ @ 0x1800507EC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___::_CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x180);
  return a1;
}
