/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1ec5a9652c39672d7f6d58af325930b6___::_CTaskWrapper__lambda_1ec5a9652c39672d7f6d58af325930b6___ @ 0x18047B100
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1ec5a9652c39672d7f6d58af325930b6___::_scalar_deleting_destructor_ @ 0x18047BA00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1ec5a9652c39672d7f6d58af325930b6___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180069F2C (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1ec5a9652c39672d7f6d58af325930b6___::_CTaskWrapper__lambda_1ec5a9652c39672d7f6d58af325930b6___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)(a1 + 40));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
