/*
 * XREFs of sub_140049F44 @ 0x140049F44
 * Callers:
 *     sub_140049030 @ 0x140049030 (sub_140049030.c)
 *     sub_140049120 @ 0x140049120 (sub_140049120.c)
 *     sub_1400494AC @ 0x1400494AC (sub_1400494AC.c)
 *     sub_1400496E0 @ 0x1400496E0 (sub_1400496E0.c)
 * Callees:
 *     sub_140049F30 @ 0x140049F30 (sub_140049F30.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

void __fastcall sub_140049F44(unsigned int a1)
{
  ULONG64 Rip; // rbx
  struct _RUNTIME_FUNCTION *v3; // rax
  BOOL v4; // ebx
  _EXCEPTION_POINTERS ExceptionInfo; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v6[20]; // [rsp+50h] [rbp-B0h] BYREF
  CONTEXT ContextRecord; // [rsp+F0h] [rbp-10h] BYREF
  DWORD64 retaddr; // [rsp+5C8h] [rbp+4C8h]
  __int64 v9; // [rsp+5D0h] [rbp+4D0h] BYREF
  unsigned __int64 ImageBase; // [rsp+5D8h] [rbp+4D8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+5E0h] [rbp+4E0h] BYREF
  PVOID HandlerData; // [rsp+5E8h] [rbp+4E8h] BYREF

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(a1);
  sub_140049F30();
  memset(&ContextRecord, 0, sizeof(ContextRecord));
  RtlCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  ImageBase = 0LL;
  v3 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( v3 )
  {
    EstablisherFrame = 0LL;
    HandlerData = 0LL;
    RtlVirtualUnwind(0, ImageBase, Rip, v3, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  }
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v9;
  memset(v6, 0, 0x98uLL);
  v6[2] = retaddr;
  v6[0] = 0x140000015LL;
  v4 = IsDebuggerPresent();
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v6;
  ExceptionInfo.ContextRecord = &ContextRecord;
  SetUnhandledExceptionFilter(0LL);
  if ( !UnhandledExceptionFilter(&ExceptionInfo) && !v4 )
    sub_140049F30();
}
