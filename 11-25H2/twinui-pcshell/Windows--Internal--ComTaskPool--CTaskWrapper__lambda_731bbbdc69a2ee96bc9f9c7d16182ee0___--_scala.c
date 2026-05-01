/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_731bbbdc69a2ee96bc9f9c7d16182ee0___::_scalar_deleting_destructor_ @ 0x18045F620
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_731bbbdc69a2ee96bc9f9c7d16182ee0___::_CTaskWrapper__lambda_731bbbdc69a2ee96bc9f9c7d16182ee0___ @ 0x18045C440 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_731bbbdc69a2ee96bc9f9c7d16182ee0___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_731bbbdc69a2ee96bc9f9c7d16182ee0___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_731bbbdc69a2ee96bc9f9c7d16182ee0___::_CTaskWrapper__lambda_731bbbdc69a2ee96bc9f9c7d16182ee0___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x180);
  return a1;
}
