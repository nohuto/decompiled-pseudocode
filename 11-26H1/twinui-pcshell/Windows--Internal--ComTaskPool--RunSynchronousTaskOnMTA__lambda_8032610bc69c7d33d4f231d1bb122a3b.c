/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8032610bc69c7d33d4f231d1bb122a3b___ @ 0x180443D6C
 * Callers:
 *     ?SetFocusState@UwpWindowWrapperBase@@UEAAXW4FocusState@@@Z @ 0x1801CB950 (-SetFocusState@UwpWindowWrapperBase@@UEAAXW4FocusState@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8032610bc69c7d33d4f231d1bb122a3b___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8032610bc69c7d33d4f231d1bb122a3b____0(
           v3,
           CurrentThreadId,
           a1);
}
