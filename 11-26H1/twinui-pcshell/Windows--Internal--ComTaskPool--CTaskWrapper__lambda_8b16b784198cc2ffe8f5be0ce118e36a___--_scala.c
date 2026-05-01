/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b16b784198cc2ffe8f5be0ce118e36a___::_scalar_deleting_destructor_ @ 0x18042E4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b16b784198cc2ffe8f5be0ce118e36a___::_CTaskWrapper__lambda_8b16b784198cc2ffe8f5be0ce118e36a___ @ 0x18042DE80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8b16b784198cc2ffe8f5be0ce118e36a___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b16b784198cc2ffe8f5be0ce118e36a___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b16b784198cc2ffe8f5be0ce118e36a___::_CTaskWrapper__lambda_8b16b784198cc2ffe8f5be0ce118e36a___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
