/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1800B2820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1801D5EF0);
  if ( hHandle )
    CloseHandle(hHandle);
}
