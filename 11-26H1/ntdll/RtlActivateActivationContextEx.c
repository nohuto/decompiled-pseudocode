/*
 * XREFs of RtlActivateActivationContextEx @ 0x18005D6F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18005BB90 (RtlCaptureStackBackTrace.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x18005D840 (RtlpAllocateActivationContextStackFrame.c)
 *     RtlAddRefActivationContext @ 0x18005DDE0 (RtlAddRefActivationContext.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlActivateActivationContextEx(
        ULONG Flags,
        PTEB Teb,
        PACTIVATION_CONTEXT ActivationContext,
        PULONG_PTR Cookie)
{
  char v5; // si
  _ACTIVATION_CONTEXT *v6; // rdi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r15
  NTSTATUS result; // eax
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *v9; // r14
  unsigned int v10; // ecx
  __int64 NextCookieSequenceNumber; // rcx
  unsigned __int64 v12; // rdx
  ULONG BackTraceHash; // [rsp+50h] [rbp+8h] BYREF
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  v5 = Flags;
  if ( Cookie )
    *Cookie = 0LL;
  v6 = (_ACTIVATION_CONTEXT *)&unk_180170388;
  if ( ActivationContext != (PACTIVATION_CONTEXT)-3LL )
    v6 = ActivationContext;
  if ( (Flags & 0xFFFFFFFE) != 0 || !Teb || v6 == (_ACTIVATION_CONTEXT *)-1LL || !Cookie )
    return -1073741811;
  ActivationContextStackPointer = Teb->ActivationContextStackPointer;
  result = RtlpAllocateActivationContextStackFrame(Flags, ActivationContextStackPointer, &v14);
  if ( result >= 0 )
  {
    v9 = v14;
    v14->Flags = 40;
    if ( (v5 & 1) != 0 )
    {
      v9->Flags = 43;
      RtlAddRefActivationContext(v6);
    }
    if ( RtlpCaptureActivationContextActivationStacks )
    {
      v10 = RtlCaptureStackBackTrace(2u, 8u, (PVOID *)&v9[1].ActivationContext, &BackTraceHash);
      if ( v10 >= 8 )
        goto LABEL_15;
    }
    else
    {
      v10 = 0;
    }
    memset_thunk_772440563353939046(&v9[1].ActivationContext + v10, 0, 8LL * (8 - v10));
LABEL_15:
    v9->Previous = ActivationContextStackPointer->ActiveFrame;
    result = 0;
    v9->ActivationContext = v6;
    NextCookieSequenceNumber = ActivationContextStackPointer->NextCookieSequenceNumber;
    v12 = NextCookieSequenceNumber | ((unsigned __int64)(ActivationContextStackPointer->StackId & 0xFFFFFFF) << 32) | 0x1000000000000000LL;
    ActivationContextStackPointer->NextCookieSequenceNumber = NextCookieSequenceNumber + 1;
    v9[1].Previous = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)v12;
    *Cookie = v12;
    ActivationContextStackPointer->ActiveFrame = v9;
  }
  return result;
}
