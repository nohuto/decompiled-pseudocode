/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___::_scalar_deleting_destructor_ @ 0x1801162D0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___::_CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___ @ 0x18011630C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___::_CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
