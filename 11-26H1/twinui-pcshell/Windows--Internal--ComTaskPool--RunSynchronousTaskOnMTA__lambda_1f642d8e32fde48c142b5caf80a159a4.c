/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1f642d8e32fde48c142b5caf80a159a4___ @ 0x180421814
 * Callers:
 *     ?Shutdown@UwpWindowEventDispatcher@@UEAAJXZ @ 0x18020C910 (-Shutdown@UwpWindowEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1f642d8e32fde48c142b5caf80a159a4___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1f642d8e32fde48c142b5caf80a159a4____0(
           v3,
           CurrentThreadId,
           a1);
}
