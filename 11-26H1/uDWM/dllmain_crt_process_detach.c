/*
 * XREFs of dllmain_crt_process_detach @ 0x18008FC20
 * Callers:
 *     dllmain_crt_dispatch @ 0x18008FAB0 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18008E1E4 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x18008E330 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x18008E368 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x18008E4F8 (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x18008E524 (__scrt_uninitialize_crt.c)
 *     __scrt_fastfail @ 0x18008EC44 (__scrt_fastfail.c)
 *     ?__scrt_uninitialize_type_info@@YAXXZ @ 0x18008FEF4 (-__scrt_uninitialize_type_info@@YAXXZ.c)
 *     _RTC_Terminate @ 0x18008FF80 (_RTC_Terminate.c)
 */

__int64 __fastcall dllmain_crt_process_detach(char a1)
{
  char v3; // bl
  __int64 v4; // rcx
  unsigned int v5; // ebx

  if ( dword_1801154E0 <= 0 )
    return 0LL;
  --dword_1801154E0;
  v3 = _scrt_acquire_startup_lock();
  if ( _scrt_current_native_startup_state != 2 )
  {
    _scrt_fastfail(7u);
    __debugbreak();
    JUMPOUT(0x18008FCA3LL);
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
