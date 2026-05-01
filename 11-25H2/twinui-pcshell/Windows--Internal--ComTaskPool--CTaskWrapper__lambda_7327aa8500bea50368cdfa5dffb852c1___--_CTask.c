/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___::_CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___ @ 0x1802B8F90
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___::_scalar_deleting_destructor_ @ 0x180228CD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dee6717be6521a69b3617cc3d38456df___::_scalar_deleting_destructor_ @ 0x180342720 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dee6717be6521a69b3617cc3d38456df___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180069F2C (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___::_CTaskWrapper__lambda_7327aa8500bea50368cdfa5dffb852c1___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
