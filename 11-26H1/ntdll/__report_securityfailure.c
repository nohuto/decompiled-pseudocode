/*
 * XREFs of __report_securityfailure @ 0x180126B7C
 * Callers:
 *     __report_rangecheckfailure @ 0x180126B60 (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x1801269B8 (__raise_securityfailure.c)
 *     RtlCaptureContext @ 0x180126D40 (RtlCaptureContext.c)
 */

void __fastcall __noreturn _report_securityfailure(unsigned int a1)
{
  DWORD64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  RtlCaptureContext(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_1801C6850 = retaddr;
  dword_1801C6840 = -1073740791;
  dword_1801C6844 = 1;
  dword_1801C6858 = 1;
  unk_1801C6860 = v2;
  _raise_securityfailure((__int64)&off_180172280);
}
