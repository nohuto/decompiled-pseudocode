/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x18002FEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_180067FA8);
  if ( hHandle )
    CloseHandle(hHandle);
}
