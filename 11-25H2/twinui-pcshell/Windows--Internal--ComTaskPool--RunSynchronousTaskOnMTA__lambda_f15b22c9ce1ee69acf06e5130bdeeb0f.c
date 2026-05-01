/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f15b22c9ce1ee69acf06e5130bdeeb0f___ @ 0x1804381E0
 * Callers:
 *     ?UpdateEngagementTelemetryFlags@UwpWindowWrapperBase@@UEAAJ_K0@Z @ 0x18043B8B0 (-UpdateEngagementTelemetryFlags@UwpWindowWrapperBase@@UEAAJ_K0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f15b22c9ce1ee69acf06e5130bdeeb0f___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f15b22c9ce1ee69acf06e5130bdeeb0f____0(
           v3,
           CurrentThreadId,
           a1);
}
