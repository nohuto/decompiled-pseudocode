/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6bf0006fd05f45de9a9646c33bcd493f___::_scalar_deleting_destructor_ @ 0x1803AFAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6bf0006fd05f45de9a9646c33bcd493f___::_CTaskWrapper__lambda_6bf0006fd05f45de9a9646c33bcd493f___ @ 0x1803ADEBC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6bf0006fd05f45de9a9646c33bcd493f___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6bf0006fd05f45de9a9646c33bcd493f___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6bf0006fd05f45de9a9646c33bcd493f___::_CTaskWrapper__lambda_6bf0006fd05f45de9a9646c33bcd493f___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x188);
  return a1;
}
