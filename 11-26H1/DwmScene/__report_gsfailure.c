/*
 * XREFs of __report_gsfailure @ 0x18000CB20
 * Callers:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x18000CAD8 (__raise_securityfailure.c)
 *     sub_18000CBFC @ 0x18000CBFC (sub_18000CBFC.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  uintptr_t v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = StackCookie;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(2u);
  sub_18000CBFC(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_1801C7DF0 = retaddr;
  ContextRecord.Rcx = v2;
  dword_1801C7DE0 = -1073740791;
  dword_1801C7DE4 = 1;
  dword_1801C7DF8 = 1;
  unk_1801C7E00 = 2LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
