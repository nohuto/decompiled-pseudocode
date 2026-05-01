/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a742079b4f288dc5c41d6ea5a73a25fb___ @ 0x18044407C
 * Callers:
 *     ?get_PersistingStateName@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801D96B0 (-get_PersistingStateName@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a742079b4f288dc5c41d6ea5a73a25fb___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a742079b4f288dc5c41d6ea5a73a25fb____0(
           v3,
           CurrentThreadId,
           a1);
}
