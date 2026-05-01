/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2a43ebb49f2e9221dd99f0faba3896bb___ @ 0x180437044
 * Callers:
 *     ?BoostPriority@UwpWindowWrapperBase@@UEAAJXZ @ 0x1801D6F40 (-BoostPriority@UwpWindowWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2a43ebb49f2e9221dd99f0faba3896bb___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2a43ebb49f2e9221dd99f0faba3896bb____0(
           v3,
           CurrentThreadId,
           a1);
}
