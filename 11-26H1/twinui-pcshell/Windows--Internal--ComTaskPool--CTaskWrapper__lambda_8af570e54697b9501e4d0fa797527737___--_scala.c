/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8af570e54697b9501e4d0fa797527737___::_scalar_deleting_destructor_ @ 0x1803AFB20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8af570e54697b9501e4d0fa797527737___::_CTaskWrapper__lambda_8af570e54697b9501e4d0fa797527737___ @ 0x1803ADF0C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8af570e54697b9501e4d0fa797527737___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8af570e54697b9501e4d0fa797527737___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8af570e54697b9501e4d0fa797527737___::_CTaskWrapper__lambda_8af570e54697b9501e4d0fa797527737___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x180);
  return a1;
}
