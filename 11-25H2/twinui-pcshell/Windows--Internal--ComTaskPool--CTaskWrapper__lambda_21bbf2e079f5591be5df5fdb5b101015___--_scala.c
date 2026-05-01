/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_21bbf2e079f5591be5df5fdb5b101015___::_scalar_deleting_destructor_ @ 0x18045F460
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_21bbf2e079f5591be5df5fdb5b101015___::_CTaskWrapper__lambda_21bbf2e079f5591be5df5fdb5b101015___ @ 0x18045C328 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_21bbf2e079f5591be5df5fdb5b101015___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_21bbf2e079f5591be5df5fdb5b101015___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_21bbf2e079f5591be5df5fdb5b101015___::_CTaskWrapper__lambda_21bbf2e079f5591be5df5fdb5b101015___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x180);
  return a1;
}
