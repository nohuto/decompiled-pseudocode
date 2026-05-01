/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0d0dc26f2e1703fa8279b79796d53b0f___ @ 0x180442F84
 * Callers:
 *     ?SetImportanceVectorUsingMask@UwpWindowWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DA8E0 (-SetImportanceVectorUsingMask@UwpWindowWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0d0dc26f2e1703fa8279b79796d53b0f___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0d0dc26f2e1703fa8279b79796d53b0f____0(
           v3,
           CurrentThreadId,
           a1);
}
