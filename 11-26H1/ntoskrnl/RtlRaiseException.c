/*
 * XREFs of RtlRaiseException @ 0x14061C280
 * Callers:
 *     HvlpSetRegister64 @ 0x14048DA10 (HvlpSetRegister64.c)
 *     HvlpGetRegister64 @ 0x1404CA750 (HvlpGetRegister64.c)
 *     KdCopyToUser @ 0x140536320 (KdCopyToUser.c)
 *     RaiseException @ 0x14053CF50 (RaiseException.c)
 *     _raise_exc_ex @ 0x14053D060 (_raise_exc_ex.c)
 *     HvlpGetRegister128 @ 0x1405C3FD0 (HvlpGetRegister128.c)
 *     KiStallBugcheckThread @ 0x1405FD0E8 (KiStallBugcheckThread.c)
 *     RtlpAllocateHeapRaiseException @ 0x14061DFE4 (RtlpAllocateHeapRaiseException.c)
 *     KscpUmaSmapResumeAfterException @ 0x140C640C0 (KscpUmaSmapResumeAfterException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     RtlLookupFunctionEntry @ 0x1402CB300 (RtlLookupFunctionEntry.c)
 *     RtlDispatchException @ 0x1403D8F00 (RtlDispatchException.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D9690 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1403D9D30 (RtlGetExtendedContextLength2.c)
 *     RtlVirtualUnwind @ 0x14052DE90 (RtlVirtualUnwind.c)
 *     RtlpCaptureContext2 @ 0x140536F80 (RtlpCaptureContext2.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x14072AE60 (ZwRaiseException.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 */

void __cdecl RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  int v2; // ebx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  void *v5; // rsp
  void *v6; // rsp
  NTSTATUS v7; // ebx
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v8; // rax
  PCONTEXT_EX ContextLength; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+58h] [rbp+18h] BYREF
  void *v13; // [rsp+138h] [rbp+F8h]

  LODWORD(ContextLength) = 0;
  EstablisherFrame = 0LL;
  HandlerData = 0LL;
  ImageBase = 0LL;
  ExceptionRecord->ExceptionFlags |= 0x80u;
  v2 = (_BYTE)KiKernelCetEnabled != 0 ? 0x80 : 0;
  RtlGetExtendedContextLength2(v2 + 1048587, (PULONG)&ContextLength, 0LL);
  v3 = (unsigned int)ContextLength + 15LL;
  if ( v3 <= (unsigned int)ContextLength )
    v3 = 0xFFFFFFFFFFFFFF0LL;
  v4 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = alloca(v4);
  v6 = alloca(v4);
  v7 = RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, v2 + 1048587, &ContextLength, 0LL);
  RtlpCaptureContext2();
  v8 = RtlLookupFunctionEntry((DWORD64)v13, &ImageBase, 0LL);
  if ( !v8 )
LABEL_6:
    RtlRaiseStatus(v7);
  RtlVirtualUnwind(0, ImageBase, (DWORD64)v13, v8, (PCONTEXT)&ContextLength, &HandlerData, &EstablisherFrame, 0LL);
  ExceptionRecord->ExceptionAddress = v13;
  if ( !RtlDispatchException(ExceptionRecord, (PCONTEXT)&ContextLength) )
  {
    v7 = ZwRaiseException(ExceptionRecord, (PCONTEXT)&ContextLength, 0);
    goto LABEL_6;
  }
}
