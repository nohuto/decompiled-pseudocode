/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79917a46c0d9777cd1553539ded46aa9___::_scalar_deleting_destructor_ @ 0x18022E9E0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79917a46c0d9777cd1553539ded46aa9___::_CTaskWrapper__lambda_79917a46c0d9777cd1553539ded46aa9___ @ 0x1802BC224 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_79917a46c0d9777cd1553539ded46aa9___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79917a46c0d9777cd1553539ded46aa9___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79917a46c0d9777cd1553539ded46aa9___::_CTaskWrapper__lambda_79917a46c0d9777cd1553539ded46aa9___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x178);
  return a1;
}
