/*
 * XREFs of __report_gsfailure @ 0x140537C60
 * Callers:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  KeBugCheckEx(0xF7u, StackCookie, RtlCopyFromUser__fo_, _security_cookie_complement, 0LL);
}
