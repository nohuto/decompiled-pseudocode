/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_203093511f95463d7d1c677a7846780f___ @ 0x1804430A0
 * Callers:
 *     ?get_ExperienceId@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801CC460 (-get_ExperienceId@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_203093511f95463d7d1c677a7846780f___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_203093511f95463d7d1c677a7846780f____0(
           v3,
           CurrentThreadId,
           a1);
}
