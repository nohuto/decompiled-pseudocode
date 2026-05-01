/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___::_CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___ @ 0x180341CEC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f0c19de952608ac38818ed5c4569ea16___::_scalar_deleting_destructor_ @ 0x180344F70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f0c19de952608ac38818ed5c4569ea16___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___::_scalar_deleting_destructor_ @ 0x18039A860 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180024574 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___::_CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
