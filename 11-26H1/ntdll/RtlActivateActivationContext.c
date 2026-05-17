/*
 * XREFs of RtlActivateActivationContext @ 0x180011E50
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180010460 (RtlCaptureStackBackTrace.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x180012110 (RtlpAllocateActivationContextStackFrame.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlActivateActivationContext(__int64 a1, struct _ACTIVATION_CONTEXT *a2, unsigned __int64 *a3)
{
  struct _TEB *v4; // rax
  struct _ACTIVATION_CONTEXT *v5; // rdi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r14
  __int64 result; // rax
  bool v8; // zf
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *v9; // rsi
  unsigned int v10; // ecx
  __int64 NextCookieSequenceNumber; // rcx
  unsigned __int64 v12; // rdx
  ULONG BackTraceHash; // [rsp+50h] [rbp+8h] BYREF
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *v14; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
    *a3 = 0LL;
  if ( (_DWORD)a1 || !a3 )
    return 3221225485LL;
  v4 = NtCurrentTeb();
  v5 = (struct _ACTIVATION_CONTEXT *)&unk_180171088;
  if ( a2 != (struct _ACTIVATION_CONTEXT *)-3LL )
    v5 = a2;
  v14 = 0LL;
  *a3 = 0LL;
  if ( !v4 || v5 == (struct _ACTIVATION_CONTEXT *)-1LL )
    return 3221225485LL;
  ActivationContextStackPointer = v4->ActivationContextStackPointer;
  result = RtlpAllocateActivationContextStackFrame(a1, ActivationContextStackPointer, &v14);
  if ( (int)result >= 0 )
  {
    v8 = RtlpCaptureActivationContextActivationStacks == 0;
    v9 = v14;
    v14->Flags = 40;
    if ( v8 )
    {
      v10 = 0;
    }
    else
    {
      v10 = RtlCaptureStackBackTrace(2u, 8u, (PVOID *)&v9[1].ActivationContext, &BackTraceHash);
      if ( v10 >= 8 )
        goto LABEL_13;
    }
    memset_thunk_772440563353939046(&v9[1].ActivationContext + v10, 0, 8LL * (8 - v10));
LABEL_13:
    v9->Previous = ActivationContextStackPointer->ActiveFrame;
    result = 0LL;
    v9->ActivationContext = v5;
    NextCookieSequenceNumber = ActivationContextStackPointer->NextCookieSequenceNumber;
    v12 = NextCookieSequenceNumber | ((unsigned __int64)(ActivationContextStackPointer->StackId & 0xFFFFFFF) << 32) | 0x1000000000000000LL;
    ActivationContextStackPointer->NextCookieSequenceNumber = NextCookieSequenceNumber + 1;
    v9[1].Previous = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)v12;
    *a3 = v12;
    ActivationContextStackPointer->ActiveFrame = v9;
  }
  return result;
}
