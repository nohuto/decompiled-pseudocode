/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7___::_scalar_deleting_destructor_ @ 0x180322880
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7___::_CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7___ @ 0x180322538 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7___::_scalar_deleting_destructor_(
        void *Block,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7___::_CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7___((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
