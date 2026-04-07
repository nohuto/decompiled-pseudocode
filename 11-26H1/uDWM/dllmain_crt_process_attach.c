/*
 * XREFs of dllmain_crt_process_attach @ 0x18008FB08
 * Callers:
 *     dllmain_crt_dispatch @ 0x18008FAB0 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18008E1E4 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x18008E224 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_before_initialize_c @ 0x18008E260 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_crt @ 0x18008E384 (__scrt_initialize_crt.c)
 *     __scrt_is_nonwritable_in_current_image @ 0x18008E458 (__scrt_is_nonwritable_in_current_image.c)
 *     __scrt_release_startup_lock @ 0x18008E4F8 (__scrt_release_startup_lock.c)
 *     __scrt_fastfail @ 0x18008EC44 (__scrt_fastfail.c)
 *     ?__scrt_initialize_type_info@@YAXXZ @ 0x18008FEE0 (-__scrt_initialize_type_info@@YAXXZ.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18008FF08 (__scrt_initialize_default_local_stdio_options.c)
 *     __scrt_get_dyn_tls_init_callback @ 0x18008FF2C (__scrt_get_dyn_tls_init_callback.c)
 *     _RTC_Initialize @ 0x18008FF3C (_RTC_Initialize.c)
 *     _initterm_0 @ 0x18008FFC1 (_initterm_0.c)
 *     _initterm_e_0 @ 0x18008FFCD (_initterm_e_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall dllmain_crt_process_attach(__int64 a1, __int64 a2)
{
  char v4; // bl
  char v5; // di
  void (__fastcall **dyn_tls_init_callback)(__int64, __int64, __int64); // rax
  void (__fastcall **v7)(__int64, __int64, __int64); // rbx

  if ( !_scrt_initialize_crt(0) )
    return 0LL;
  v4 = _scrt_acquire_startup_lock();
  v5 = 1;
  if ( _scrt_current_native_startup_state )
  {
    _scrt_fastfail(7u);
    __debugbreak();
    JUMPOUT(0x18008FC19LL);
  }
  _scrt_current_native_startup_state = 1;
  if ( _scrt_dllmain_before_initialize_c() )
  {
    RTC_Initialize();
    __scrt_initialize_type_info();
    _scrt_initialize_default_local_stdio_options();
    if ( !initterm_e_0((_PIFV *)&_xi_a, (_PIFV *)&_xi_z) )
    {
      if ( _scrt_dllmain_after_initialize_c() )
      {
        initterm_0((_PVFV *)&_xc_a, (_PVFV *)&_xc_z);
        _scrt_current_native_startup_state = 2;
        v5 = 0;
      }
    }
  }
  _scrt_release_startup_lock(v4);
  if ( v5 )
    return 0LL;
  dyn_tls_init_callback = (void (__fastcall **)(__int64, __int64, __int64))_scrt_get_dyn_tls_init_callback();
  v7 = dyn_tls_init_callback;
  if ( *dyn_tls_init_callback )
  {
    if ( _scrt_is_nonwritable_in_current_image((__int64)dyn_tls_init_callback) )
      (*v7)(a1, 2LL, a2);
  }
  ++dword_1801154E0;
  return 1LL;
}
