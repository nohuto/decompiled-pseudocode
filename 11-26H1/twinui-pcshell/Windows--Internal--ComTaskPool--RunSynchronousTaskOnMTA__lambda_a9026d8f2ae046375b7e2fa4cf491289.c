/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a9026d8f2ae046375b7e2fa4cf491289___ @ 0x180444198
 * Callers:
 *     ?SetDehydrationPolicy@UwpWindowWrapperBase@@UEAAJW4DehydrationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801FFD40 (-SetDehydrationPolicy@UwpWindowWrapperBase@@UEAAJW4DehydrationPolicy@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a9026d8f2ae046375b7e2fa4cf491289___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a9026d8f2ae046375b7e2fa4cf491289____0(
           v3,
           CurrentThreadId,
           a1);
}
