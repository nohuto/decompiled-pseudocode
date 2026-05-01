/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3f3a2feaac41b41164862428ee94a97b___ @ 0x180416AF8
 * Callers:
 *     ?Shutdown@UwpWindowEventDispatcher@@UEAAJXZ @ 0x18021AB50 (-Shutdown@UwpWindowEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3f3a2feaac41b41164862428ee94a97b___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3f3a2feaac41b41164862428ee94a97b____0(
           v3,
           CurrentThreadId,
           a1);
}
