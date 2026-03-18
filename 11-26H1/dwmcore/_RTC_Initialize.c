/*
 * XREFs of _RTC_Initialize @ 0x180221474
 * Callers:
 *     dllmain_crt_process_attach @ 0x1802206F8 (dllmain_crt_process_attach.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __cdecl RTC_Initialize()
{
  void (**i)(void); // rbx

  for ( i = &_rtc_izz; i < &_rtc_izz; ++i )
  {
    if ( *i )
      (*i)();
  }
}
