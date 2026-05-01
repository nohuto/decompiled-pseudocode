/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___::_scalar_deleting_destructor_ @ 0x180413960
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___::_CTaskWrapper__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___ @ 0x180412DDC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___::_CTaskWrapper__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
