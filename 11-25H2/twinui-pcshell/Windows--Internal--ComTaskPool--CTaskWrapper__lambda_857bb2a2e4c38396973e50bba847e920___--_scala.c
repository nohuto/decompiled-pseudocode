/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___::_scalar_deleting_destructor_ @ 0x1801EEB30
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___::_CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___ @ 0x1801EEB6C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___::_CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
