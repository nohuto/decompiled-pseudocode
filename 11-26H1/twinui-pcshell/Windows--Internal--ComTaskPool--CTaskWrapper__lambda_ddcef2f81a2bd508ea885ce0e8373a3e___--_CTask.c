/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___::_CTaskWrapper__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___ @ 0x18048BB1C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___::_scalar_deleting_destructor_ @ 0x18048C710 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180024574 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___::_CTaskWrapper__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)(a1 + 40));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
