/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___::_scalar_deleting_destructor_ @ 0x180310A70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___::_CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___ @ 0x1803105CC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___::_CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
