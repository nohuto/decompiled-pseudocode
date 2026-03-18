/*
 * XREFs of __report_gsfailure @ 0x14004CC80
 * Callers:
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 * Callees:
 *     <none>
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  __fastfail(2u);
}
