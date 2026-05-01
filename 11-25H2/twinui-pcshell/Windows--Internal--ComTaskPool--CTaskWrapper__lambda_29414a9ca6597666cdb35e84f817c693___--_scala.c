/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_29414a9ca6597666cdb35e84f817c693___::_scalar_deleting_destructor_ @ 0x18045F4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_29414a9ca6597666cdb35e84f817c693___::_CTaskWrapper__lambda_29414a9ca6597666cdb35e84f817c693___ @ 0x18045C350 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_29414a9ca6597666cdb35e84f817c693___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_29414a9ca6597666cdb35e84f817c693___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_29414a9ca6597666cdb35e84f817c693___::_CTaskWrapper__lambda_29414a9ca6597666cdb35e84f817c693___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x170);
  return a1;
}
