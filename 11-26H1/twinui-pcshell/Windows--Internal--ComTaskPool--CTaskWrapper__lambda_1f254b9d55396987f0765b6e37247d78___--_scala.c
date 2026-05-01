/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___::_scalar_deleting_destructor_ @ 0x18048C6D0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___::_CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___ @ 0x18021A1E8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___::_CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
