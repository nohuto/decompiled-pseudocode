/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1800024A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_180059608);
  if ( hHandle )
    CloseHandle(hHandle);
}
