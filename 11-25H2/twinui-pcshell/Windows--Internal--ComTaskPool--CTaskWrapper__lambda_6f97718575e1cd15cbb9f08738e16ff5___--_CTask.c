/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f97718575e1cd15cbb9f08738e16ff5___::_CTaskWrapper__lambda_6f97718575e1cd15cbb9f08738e16ff5___ @ 0x18038EB7C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f97718575e1cd15cbb9f08738e16ff5___::_scalar_deleting_destructor_ @ 0x18038EF70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6f97718575e1cd15cbb9f08738e16ff5___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f97718575e1cd15cbb9f08738e16ff5___::_CTaskWrapper__lambda_6f97718575e1cd15cbb9f08738e16ff5___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
