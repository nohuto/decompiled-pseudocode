/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2295e0733fe842dc7216b708d96c5c17___ @ 0x180436E34
 * Callers:
 *     ?ApplyPresenter@UwpWindowWrapperBase@@UEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z @ 0x18043A2F0 (-ApplyPresenter@UwpWindowWrapperBase@@UEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnv.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2295e0733fe842dc7216b708d96c5c17___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2295e0733fe842dc7216b708d96c5c17____0(
           v3,
           CurrentThreadId,
           a1);
}
