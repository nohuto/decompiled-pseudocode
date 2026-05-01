/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dee6717be6521a69b3617cc3d38456df___::_scalar_deleting_destructor_ @ 0x180342720
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___::_CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___ @ 0x1802B8F90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___--_CTask.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dee6717be6521a69b3617cc3d38456df___::_scalar_deleting_destructor_(
        void *Block,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___::_CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
