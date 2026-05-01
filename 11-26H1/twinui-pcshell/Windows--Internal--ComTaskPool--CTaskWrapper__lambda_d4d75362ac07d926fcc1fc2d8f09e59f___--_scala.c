/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___::_scalar_deleting_destructor_ @ 0x18035AC50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___::_CTaskWrapper__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___ @ 0x18035AB84 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___::_scalar_deleting_destructor_(
        void *Block,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___::_CTaskWrapper__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
