/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_097c0e78080a248be1474fd361287570___ @ 0x18040618C
 * Callers:
 *     ?TerminateApp@WindowEventDispatcher@@UEAAJ_K@Z @ 0x180413B90 (-TerminateApp@WindowEventDispatcher@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_097c0e78080a248be1474fd361287570___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_097c0e78080a248be1474fd361287570____0(
           v3,
           CurrentThreadId,
           a1);
}
