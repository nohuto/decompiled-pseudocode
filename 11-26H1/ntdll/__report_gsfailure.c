/*
 * XREFs of __report_gsfailure @ 0x180126750
 * Callers:
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180035420 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x1800B1590 (RtlVirtualUnwind.c)
 *     RtlUnhandledExceptionFilter @ 0x18011F080 (RtlUnhandledExceptionFilter.c)
 *     RtlCaptureContext @ 0x180126AB0 (RtlCaptureContext.c)
 *     ZwTerminateProcess @ 0x18015F3C0 (ZwTerminateProcess.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *FunctionEntry; // [rsp+40h] [rbp-48h]
  DWORD64 ControlPc; // [rsp+48h] [rbp-40h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp-30h] BYREF
  PVOID HandlerData[5]; // [rsp+60h] [rbp-28h] BYREF
  DWORD64 retaddr; // [rsp+88h] [rbp+0h]
  uintptr_t v7; // [rsp+90h] [rbp+8h] BYREF

  v7 = StackCookie;
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
    ContextRecord.Rip = retaddr;
    ContextRecord.Rsp = (DWORD64)&v7;
  }
  qword_1801C5850 = ContextRecord.Rip;
  ContextRecord.Rcx = v7;
  dword_1801C5840 = -1073740791;
  dword_1801C5844 = 1;
  dword_1801C5858 = 1;
  unk_1801C5860 = 2LL;
  HandlerData[2] = (PVOID)_security_cookie_complement;
  RtlUnhandledExceptionFilter((PEXCEPTION_POINTERS)&ExceptionPointers);
  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073740791);
}
