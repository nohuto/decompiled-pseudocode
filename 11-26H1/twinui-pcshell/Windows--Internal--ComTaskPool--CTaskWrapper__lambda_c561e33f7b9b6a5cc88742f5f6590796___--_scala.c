/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c561e33f7b9b6a5cc88742f5f6590796___::_scalar_deleting_destructor_ @ 0x1802FC390
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c561e33f7b9b6a5cc88742f5f6590796___::_CTaskWrapper__lambda_c561e33f7b9b6a5cc88742f5f6590796___ @ 0x1802FBEA8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c561e33f7b9b6a5cc88742f5f6590796___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c561e33f7b9b6a5cc88742f5f6590796___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c561e33f7b9b6a5cc88742f5f6590796___::_CTaskWrapper__lambda_c561e33f7b9b6a5cc88742f5f6590796___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
