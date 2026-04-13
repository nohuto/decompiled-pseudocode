/*
 * XREFs of __report_gsfailure @ 0x1800220D0
 * Callers:
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x180022094 (__raise_securityfailure.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  struct _RUNTIME_FUNCTION *FunctionEntry; // [rsp+40h] [rbp-48h]
  DWORD64 ControlPc; // [rsp+48h] [rbp-40h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp-30h] BYREF
  PVOID HandlerData[5]; // [rsp+60h] [rbp-28h] BYREF

  EstablisherFrame = 0LL;
  HandlerData[0] = 0LL;
  ImageBase = 0LL;
  RtlCaptureContext(&ContextRecord);
  ControlPc = ContextRecord.Rip;
  FunctionEntry = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( FunctionEntry )
  {
    RtlVirtualUnwind(0, ImageBase, ControlPc, FunctionEntry, &ContextRecord, HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = *(_QWORD *)ContextRecord.Rsp;
    ContextRecord.Rsp += 8LL;
  }
  qword_18017F790 = ContextRecord.Rip;
  ContextRecord.Rcx = StackCookie;
  dword_18017F780 = -1073740791;
  dword_18017F784 = 1;
  dword_18017F798 = 3;
  qword_18017F7A0[0] = 2LL;
  qword_18017F7A0[1] = _security_cookie;
  qword_18017F7A0[2] = _security_cookie_complement;
  HandlerData[2] = (PVOID)_security_cookie_complement;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
