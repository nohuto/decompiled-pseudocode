/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6fd8c80f4e8205d0daf1b865183c59df___::_CTaskWrapper__lambda_6fd8c80f4e8205d0daf1b865183c59df___ @ 0x18045C418
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6fd8c80f4e8205d0daf1b865183c59df___::_scalar_deleting_destructor_ @ 0x18045F5E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6fd8c80f4e8205d0daf1b865183c59df___--_scala.c)
 * Callees:
 *     _lambda_6fd8c80f4e8205d0daf1b865183c59df_::__lambda_6fd8c80f4e8205d0daf1b865183c59df_ @ 0x18045C280 (_lambda_6fd8c80f4e8205d0daf1b865183c59df_--__lambda_6fd8c80f4e8205d0daf1b865183c59df_.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6fd8c80f4e8205d0daf1b865183c59df___::_CTaskWrapper__lambda_6fd8c80f4e8205d0daf1b865183c59df___(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = lambda_6fd8c80f4e8205d0daf1b865183c59df_::__lambda_6fd8c80f4e8205d0daf1b865183c59df_(
             (__int64 *)(a1 + 16),
             a2);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
