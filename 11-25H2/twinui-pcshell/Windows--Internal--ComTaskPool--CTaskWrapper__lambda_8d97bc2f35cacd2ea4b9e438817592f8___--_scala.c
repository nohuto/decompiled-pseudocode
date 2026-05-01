/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8d97bc2f35cacd2ea4b9e438817592f8___::_scalar_deleting_destructor_ @ 0x1803543C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8d97bc2f35cacd2ea4b9e438817592f8___::_CTaskWrapper__lambda_8d97bc2f35cacd2ea4b9e438817592f8___ @ 0x1803542A4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8d97bc2f35cacd2ea4b9e438817592f8___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8d97bc2f35cacd2ea4b9e438817592f8___::_scalar_deleting_destructor_(
        void *Block,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8d97bc2f35cacd2ea4b9e438817592f8___::_CTaskWrapper__lambda_8d97bc2f35cacd2ea4b9e438817592f8___((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
