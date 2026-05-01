/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3bc8458981c1f89b7e30203ff9c56e4f___ @ 0x18044371C
 * Callers:
 *     ?put_WindowResizingState@UwpWindowWrapperBase@@UEAAJW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180220C30 (-put_WindowResizingState@UwpWindowWrapperBase@@UEAAJW4WindowResizingState@ViewManagerInterop@She.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3bc8458981c1f89b7e30203ff9c56e4f___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3bc8458981c1f89b7e30203ff9c56e4f____0(
           v3,
           CurrentThreadId,
           a1);
}
