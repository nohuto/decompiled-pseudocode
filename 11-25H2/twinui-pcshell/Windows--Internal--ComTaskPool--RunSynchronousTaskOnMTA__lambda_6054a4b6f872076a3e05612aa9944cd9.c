/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6054a4b6f872076a3e05612aa9944cd9___ @ 0x18043740C
 * Callers:
 *     ?SetWindowPropagatableProperties@UwpWindowWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18043B730 (-SetWindowPropagatableProperties@UwpWindowWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6054a4b6f872076a3e05612aa9944cd9___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6054a4b6f872076a3e05612aa9944cd9____0(
           v3,
           CurrentThreadId,
           a1);
}
