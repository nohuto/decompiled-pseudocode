/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_40e4bef0421a20eaf8768beed4f575db___::_CTaskWrapper__lambda_40e4bef0421a20eaf8768beed4f575db___ @ 0x1803F7410
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_40e4bef0421a20eaf8768beed4f575db___::_scalar_deleting_destructor_ @ 0x1803F7880 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_40e4bef0421a20eaf8768beed4f575db___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180069F2C (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_40e4bef0421a20eaf8768beed4f575db___::_CTaskWrapper__lambda_40e4bef0421a20eaf8768beed4f575db___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)(a1 + 32));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
