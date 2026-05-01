/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___::_scalar_deleting_destructor_ @ 0x1804468E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___::_CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___ @ 0x180444B34 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___::_CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
