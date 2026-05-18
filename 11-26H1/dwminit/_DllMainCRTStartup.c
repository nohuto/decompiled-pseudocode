/*
 * XREFs of _DllMainCRTStartup @ 0x180003BDC
 * Callers:
 *     _DllMainStartup @ 0x1800112D0 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x180003C20 (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpvReserved);
}
