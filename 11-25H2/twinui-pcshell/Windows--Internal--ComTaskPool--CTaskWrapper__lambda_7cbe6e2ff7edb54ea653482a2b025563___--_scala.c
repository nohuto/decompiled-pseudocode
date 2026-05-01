/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___::_scalar_deleting_destructor_ @ 0x1802C6790
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___::_CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___ @ 0x1802C67CC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___::_CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
