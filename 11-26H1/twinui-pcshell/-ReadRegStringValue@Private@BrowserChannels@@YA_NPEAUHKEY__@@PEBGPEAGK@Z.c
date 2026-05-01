/*
 * XREFs of ?ReadRegStringValue@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEBGPEAGK@Z @ 0x1806959A8
 * Callers:
 *     ?ReadExePath@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEAGKPEBG@Z @ 0x180695930 (-ReadExePath@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEAGKPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

bool __fastcall BrowserChannels::Private::ReadRegStringValue(
        BrowserChannels::Private *this,
        const WCHAR *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4)
{
  int v5; // [rsp+40h] [rbp-18h] BYREF
  DWORD v6; // [rsp+44h] [rbp-14h] BYREF

  v6 = 0;
  v5 = 2 * (_DWORD)a4;
  return RegGetValueW((HKEY)this, 0LL, a2, 2u, &v6, a3, (LPDWORD)&v5) == 0;
}
