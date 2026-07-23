/*
 * XREFs of __security_init_cookie @ 0x140C863B0
 * Callers:
 *     HalInitSystem @ 0x140BEF970 (HalInitSystem.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_init_cookie()
{
  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    __fastfail(6u);
  _security_cookie_complement = ~_security_cookie;
}
