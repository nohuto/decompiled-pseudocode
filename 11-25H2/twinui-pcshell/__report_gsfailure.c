/*
 * XREFs of __report_gsfailure @ 0x1802D29D0
 * Callers:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x1802D2988 (__raise_securityfailure.c)
 *     capture_previous_context @ 0x1802D2AA8 (capture_previous_context.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  uintptr_t v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = StackCookie;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(2u);
  capture_previous_context(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_180898A50 = retaddr;
  ContextRecord.Rcx = v2;
  dword_180898A40 = -1073740791;
  dword_180898A44 = 1;
  dword_180898A58 = 1;
  unk_180898A60 = 2LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
