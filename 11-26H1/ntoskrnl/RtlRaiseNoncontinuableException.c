/*
 * XREFs of RtlRaiseNoncontinuableException @ 0x140537610
 * Callers:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 * Callees:
 *     RtlpCaptureContext @ 0x140536E20 (RtlpCaptureContext.c)
 */

void __cdecl __noreturn RtlRaiseNoncontinuableException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  char v2; // r8
  EXCEPTION_RECORD *v3; // [rsp+28h] [rbp-10h]
  _CONTEXT *v4; // [rsp+30h] [rbp-8h]
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]
  char v6; // [rsp+40h] [rbp+8h] BYREF

  RtlpCaptureContext();
  v4->Rsp = (unsigned __int64)&v6;
  v4->Rip = retaddr;
  if ( v3->ExceptionAddress == (void *)-1LL )
    v3->ExceptionAddress = (void *)v4->Rip;
  if ( v2 )
    RtlDispatchException(v3, v4);
  else
    ZwRaiseException(v3, v4, 0);
}
