/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f___::_scalar_deleting_destructor_ @ 0x18045F6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f___::_CTaskWrapper__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f___ @ 0x18045C490 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f___::_CTaskWrapper__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x170);
  return a1;
}
