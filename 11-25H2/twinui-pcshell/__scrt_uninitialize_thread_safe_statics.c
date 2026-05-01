/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1802D5830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1808990A8);
  if ( hHandle )
    CloseHandle(hHandle);
}
