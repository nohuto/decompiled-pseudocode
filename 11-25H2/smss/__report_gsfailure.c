/*
 * XREFs of __report_gsfailure @ 0x14000ED20
 * Callers:
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 * Callees:
 *     NtTerminateProcess_0 @ 0x14000EF58 (NtTerminateProcess_0.c)
 *     RtlCaptureContext_0 @ 0x14000EF70 (RtlCaptureContext_0.c)
 *     RtlLookupFunctionEntry_0 @ 0x14000EF7C (RtlLookupFunctionEntry_0.c)
 *     RtlVirtualUnwind_0 @ 0x14000EF88 (RtlVirtualUnwind_0.c)
 *     RtlUnhandledExceptionFilter_0 @ 0x14000EF94 (RtlUnhandledExceptionFilter_0.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  struct _RUNTIME_FUNCTION *FunctionEntry; // [rsp+40h] [rbp-48h]
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
  RtlCaptureContext_0(&ContextRecord);
  ControlPc = ContextRecord.Rip;
  FunctionEntry = RtlLookupFunctionEntry_0(ContextRecord.Rip, &ImageBase, 0LL);
  if ( FunctionEntry )
  {
    RtlVirtualUnwind_0(0, ImageBase, ControlPc, FunctionEntry, &ContextRecord, HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = retaddr;
    ContextRecord.Rsp = (DWORD64)&v7;
  }
  qword_140031D50 = ContextRecord.Rip;
  ContextRecord.Rcx = v7;
  dword_140031D40 = -1073740791;
  dword_140031D44 = 1;
  dword_140031D58 = 1;
  unk_140031D60 = 2LL;
  HandlerData[2] = (PVOID)_security_cookie_complement;
  RtlUnhandledExceptionFilter_0((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
  NtTerminateProcess_0((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073740791);
}
