/*
 * XREFs of dllmain_crt_process_detach @ 0x18009C570
 * Callers:
 *     dllmain_crt_dispatch @ 0x18009C400 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18009A814 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x18009A960 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x18009A998 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x18009AB28 (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x18009AB54 (__scrt_uninitialize_crt.c)
 *     __scrt_fastfail @ 0x18009B450 (__scrt_fastfail.c)
 *     ?__scrt_uninitialize_type_info@@YAXXZ @ 0x18009C840 (-__scrt_uninitialize_type_info@@YAXXZ.c)
 *     _RTC_Terminate @ 0x18009C8CC (_RTC_Terminate.c)
 */

__int64 __fastcall dllmain_crt_process_detach(char a1)
{
  char v3; // bl
  __int64 v4; // rcx
  unsigned int v5; // ebx

  if ( dword_1801194B0 <= 0 )
    return 0LL;
  --dword_1801194B0;
  v3 = _scrt_acquire_startup_lock();
  if ( _scrt_current_native_startup_state != 2 )
  {
    _scrt_fastfail(7u);
    __debugbreak();
    JUMPOUT(0x18009C5F0LL);
  }
  _scrt_dllmain_uninitialize_c();
  __scrt_uninitialize_type_info();
  RTC_Terminate();
  _scrt_current_native_startup_state = 0;
  _scrt_release_startup_lock(v3);
  LOBYTE(v4) = a1;
  v5 = (unsigned __int8)_scrt_uninitialize_crt(v4, 0);
  _scrt_dllmain_uninitialize_critical();
  return v5;
}
