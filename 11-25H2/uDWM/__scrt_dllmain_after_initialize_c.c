/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x18009A854
 * Callers:
 *     dllmain_crt_process_attach @ 0x18009C458 (dllmain_crt_process_attach.c)
 * Callees:
 *     __isa_available_init @ 0x18009B26C (__isa_available_init.c)
 *     _get_startup_argv_mode @ 0x18009B420 (_get_startup_argv_mode.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x18009B42C (__scrt_is_ucrt_dll_in_use.c)
 *     _o__configure_narrow_argv_0 @ 0x18009B61E (_o__configure_narrow_argv_0.c)
 *     _initialize_narrow_environment @ 0x18009B642 (_initialize_narrow_environment.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  _crt_argv_mode startup_argv_mode; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    _isa_available_init();
  }
  else
  {
    startup_argv_mode = get_startup_argv_mode();
    if ( o__configure_narrow_argv_0(startup_argv_mode) )
      return 0;
    initialize_narrow_environment();
  }
  return 1;
}
