/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5fd06e0f869390ff79948baa2523d20___::_scalar_deleting_destructor_ @ 0x1802DA920
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5fd06e0f869390ff79948baa2523d20___::_CTaskWrapper__lambda_d5fd06e0f869390ff79948baa2523d20___ @ 0x1802DA65C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d5fd06e0f869390ff79948baa2523d20___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5fd06e0f869390ff79948baa2523d20___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5fd06e0f869390ff79948baa2523d20___::_CTaskWrapper__lambda_d5fd06e0f869390ff79948baa2523d20___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
