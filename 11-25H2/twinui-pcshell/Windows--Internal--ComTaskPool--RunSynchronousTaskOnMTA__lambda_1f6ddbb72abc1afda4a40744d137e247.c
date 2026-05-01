/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1f6ddbb72abc1afda4a40744d137e247___ @ 0x1804169F0
 * Callers:
 *     ?TerminateApp@UwpWindowEventDispatcher@@UEAAJ_K@Z @ 0x180419BA0 (-TerminateApp@UwpWindowEventDispatcher@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1f6ddbb72abc1afda4a40744d137e247___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1f6ddbb72abc1afda4a40744d137e247____0(
           v3,
           CurrentThreadId,
           a1);
}
