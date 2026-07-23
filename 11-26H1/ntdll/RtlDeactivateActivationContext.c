/*
 * XREFs of RtlDeactivateActivationContext @ 0x180080110
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlReleaseActivationContext @ 0x180038390 (RtlReleaseActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180080370 (RtlpFreeActivationContextStackFrame.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void __cdecl RtlDeactivateActivationContext(ULONG Flags, ULONG_PTR Cookie)
{
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rdi
  unsigned __int64 ActiveFrame; // rbx
  unsigned __int64 v4; // rsi
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-C8h] BYREF

  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() called with invalid flags 0x%08lx\n", "RtlDeactivateActivationContext", Flags);
    RtlRaiseStatus(-1073741811);
  }
  if ( Cookie )
  {
    if ( Cookie >> 60 != 1 )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() called with invalid cookie type 0x%08Ix\n",
        "RtlDeactivateActivationContext",
        Cookie);
      RtlRaiseStatus(-1073741811);
    }
    ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
    if ( ((HIDWORD(Cookie) ^ ActivationContextStackPointer->StackId) & 0xFFFFFFF) != 0 )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() called with invalid cookie tid 0x%08Ix - should be %08Ix\n",
        "RtlDeactivateActivationContext",
        Cookie,
        ActivationContextStackPointer->StackId & 0xFFFFFFF);
      RtlRaiseStatus(-1073741811);
    }
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
    if ( ActivationContextStackPointer->ActiveFrame )
    {
      if ( (*(_BYTE *)(ActiveFrame + 16) & 8) != 0 && *(_QWORD *)(ActiveFrame + 24) == Cookie )
      {
        v4 = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
      }
      else
      {
        v4 = *(_QWORD *)ActiveFrame;
        v7 = 0;
        if ( !*(_QWORD *)ActiveFrame )
          goto LABEL_18;
        v8 = *(_QWORD *)ActiveFrame;
        if ( (*(_BYTE *)(v4 + 16) & 8) == 0 )
          v8 = 0LL;
        while ( !v8 || *(_QWORD *)(v8 + 24) != Cookie )
        {
          v4 = *(_QWORD *)v4;
          ++v7;
          if ( !v4 )
            goto LABEL_18;
          v8 = 0LL;
          if ( (*(_BYTE *)(v4 + 16) & 8) != 0 )
            v8 = v4;
        }
        if ( !v4 )
LABEL_18:
          RtlRaiseStatus(-1072365552);
        *(&ExceptionRecord.NumberParameters + 1) = 0;
        memset_thunk_772440563353939046(&ExceptionRecord.ExceptionInformation[3], 0, 0x60uLL);
        ExceptionRecord.ExceptionInformation[0] = v7;
        ExceptionRecord.NumberParameters = 3;
        ExceptionRecord.ExceptionInformation[1] = v4;
        ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
        ExceptionRecord.ExceptionCode = -1072365553;
        memset(&ExceptionRecord.ExceptionFlags, 0, 20);
        RtlRaiseException(&ExceptionRecord);
      }
      v5 = *(_RTL_ACTIVATION_CONTEXT_STACK_FRAME **)v4;
      do
      {
        v6 = *(_QWORD *)ActiveFrame;
        if ( (*(_BYTE *)(ActiveFrame + 16) & 1) != 0 )
          RtlReleaseActivationContext(*(PACTIVATION_CONTEXT *)(ActiveFrame + 8));
        if ( (*(_BYTE *)(ActiveFrame + 16) & 8) != 0 )
          RtlpFreeActivationContextStackFrame(ActivationContextStackPointer, ActiveFrame);
        ActiveFrame = v6;
      }
      while ( (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)v6 != v5 );
      ActivationContextStackPointer->ActiveFrame = v5;
    }
  }
}
