/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180220B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1803DD568);
  if ( hHandle )
    CloseHandle(hHandle);
}
