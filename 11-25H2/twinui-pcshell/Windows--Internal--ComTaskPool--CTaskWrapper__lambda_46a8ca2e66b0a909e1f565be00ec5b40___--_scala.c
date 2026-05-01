/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46a8ca2e66b0a909e1f565be00ec5b40___::_scalar_deleting_destructor_ @ 0x18045F520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46a8ca2e66b0a909e1f565be00ec5b40___::_CTaskWrapper__lambda_46a8ca2e66b0a909e1f565be00ec5b40___ @ 0x18045C3A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_46a8ca2e66b0a909e1f565be00ec5b40___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46a8ca2e66b0a909e1f565be00ec5b40___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46a8ca2e66b0a909e1f565be00ec5b40___::_CTaskWrapper__lambda_46a8ca2e66b0a909e1f565be00ec5b40___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x170);
  return a1;
}
