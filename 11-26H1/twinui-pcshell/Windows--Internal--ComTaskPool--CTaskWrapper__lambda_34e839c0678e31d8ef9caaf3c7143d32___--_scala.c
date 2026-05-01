/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_34e839c0678e31d8ef9caaf3c7143d32___::_scalar_deleting_destructor_ @ 0x180344F30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_34e839c0678e31d8ef9caaf3c7143d32___::_CTaskWrapper__lambda_34e839c0678e31d8ef9caaf3c7143d32___ @ 0x180341CB8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_34e839c0678e31d8ef9caaf3c7143d32___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_34e839c0678e31d8ef9caaf3c7143d32___::_scalar_deleting_destructor_(
        void *Block,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_34e839c0678e31d8ef9caaf3c7143d32___::_CTaskWrapper__lambda_34e839c0678e31d8ef9caaf3c7143d32___((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
