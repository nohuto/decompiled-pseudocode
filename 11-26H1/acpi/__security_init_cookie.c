/*
 * XREFs of __security_init_cookie @ 0x1400D8B64
 * Callers:
 *     GsDriverEntry @ 0x1400D8B30 (GsDriverEntry.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_init_cookie()
{
  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    __fastfail(6u);
  _security_cookie_complement = ~_security_cookie;
}
