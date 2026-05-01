/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a43d6a9e6a0efd69cc3641cf3a8a4e5e___ @ 0x180406294
 * Callers:
 *     ?Shutdown@WindowEventDispatcher@@UEAAJXZ @ 0x180413230 (-Shutdown@WindowEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a43d6a9e6a0efd69cc3641cf3a8a4e5e___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a43d6a9e6a0efd69cc3641cf3a8a4e5e____0(
           v3,
           CurrentThreadId,
           a1);
}
