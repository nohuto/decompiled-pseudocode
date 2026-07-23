/*
 * XREFs of __report_securityfailure @ 0x1801268EC
 * Callers:
 *     __report_rangecheckfailure @ 0x1801268D0 (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x180126728 (__raise_securityfailure.c)
 *     RtlCaptureContext @ 0x180126AB0 (RtlCaptureContext.c)
 */

void __fastcall __noreturn _report_securityfailure(unsigned int a1)
{
  DWORD64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  RtlCaptureContext(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_1801C5850 = retaddr;
  dword_1801C5840 = -1073740791;
  dword_1801C5844 = 1;
  dword_1801C5858 = 1;
  unk_1801C5860 = v2;
  _raise_securityfailure((_EXCEPTION_POINTERS *)&ExceptionPointers);
}
