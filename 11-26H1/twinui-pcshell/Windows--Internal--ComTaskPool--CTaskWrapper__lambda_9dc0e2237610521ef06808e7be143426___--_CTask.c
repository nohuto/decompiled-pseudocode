/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9dc0e2237610521ef06808e7be143426___::_CTaskWrapper__lambda_9dc0e2237610521ef06808e7be143426___ @ 0x180401B54
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9dc0e2237610521ef06808e7be143426___::_scalar_deleting_destructor_ @ 0x180401FD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9dc0e2237610521ef06808e7be143426___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180024574 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9dc0e2237610521ef06808e7be143426___::_CTaskWrapper__lambda_9dc0e2237610521ef06808e7be143426___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)(a1 + 32));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
