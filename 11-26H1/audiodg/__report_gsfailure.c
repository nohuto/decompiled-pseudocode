/*
 * XREFs of __report_gsfailure @ 0x14004A2B0
 * Callers:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x14004A268 (__raise_securityfailure.c)
 *     sub_14004A38C @ 0x14004A38C (sub_14004A38C.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  uintptr_t v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = StackCookie;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(2u);
  sub_14004A38C(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_1400E7D60 = retaddr;
  ContextRecord.Rcx = v2;
  dword_1400E7D50 = -1073740791;
  dword_1400E7D54 = 1;
  dword_1400E7D68 = 1;
  unk_1400E7D70 = 2LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
