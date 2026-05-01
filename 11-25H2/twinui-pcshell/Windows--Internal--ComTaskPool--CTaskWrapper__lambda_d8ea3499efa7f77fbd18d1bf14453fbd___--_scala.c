/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8ea3499efa7f77fbd18d1bf14453fbd___::_scalar_deleting_destructor_ @ 0x1803426E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8ea3499efa7f77fbd18d1bf14453fbd___::_CTaskWrapper__lambda_d8ea3499efa7f77fbd18d1bf14453fbd___ @ 0x180340E6C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d8ea3499efa7f77fbd18d1bf14453fbd___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8ea3499efa7f77fbd18d1bf14453fbd___::_scalar_deleting_destructor_(
        void *Block,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8ea3499efa7f77fbd18d1bf14453fbd___::_CTaskWrapper__lambda_d8ea3499efa7f77fbd18d1bf14453fbd___((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
