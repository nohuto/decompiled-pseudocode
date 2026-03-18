/*
 * XREFs of __scrt_release_startup_lock @ 0x1802205D8
 * Callers:
 *     dllmain_crt_process_attach @ 0x1802206F8 (dllmain_crt_process_attach.c)
 *     dllmain_crt_process_detach @ 0x180220810 (dllmain_crt_process_detach.c)
 * Callees:
 *     __scrt_is_ucrt_dll_in_use @ 0x1802211B8 (__scrt_is_ucrt_dll_in_use.c)
 */

__int64 __fastcall _scrt_release_startup_lock(char a1)
{
  __int64 result; // rax

  result = _scrt_is_ucrt_dll_in_use();
  if ( (_DWORD)result )
  {
    if ( !a1 )
      _InterlockedExchange64(&_scrt_native_startup_lock, 0LL);
  }
  return result;
}
