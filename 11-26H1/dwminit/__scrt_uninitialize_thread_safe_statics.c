/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1800026D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18001A4A8);
  if ( hHandle )
    CloseHandle(hHandle);
}
