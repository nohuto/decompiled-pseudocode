/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d60693f78f588dd324112bac7dc03c83___ @ 0x180421A28
 * Callers:
 *     ?TerminateApp@UwpWindowEventDispatcher@@UEAAJ_K@Z @ 0x180424820 (-TerminateApp@UwpWindowEventDispatcher@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d60693f78f588dd324112bac7dc03c83___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d60693f78f588dd324112bac7dc03c83____0(
           v3,
           CurrentThreadId,
           a1);
}
