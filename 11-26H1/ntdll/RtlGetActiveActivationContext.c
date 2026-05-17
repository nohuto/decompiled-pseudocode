/*
 * XREFs of RtlGetActiveActivationContext @ 0x180011D20
 * Callers:
 *     <none>
 * Callees:
 *     RtlAddRefActivationContext @ 0x1800126B0 (RtlAddRefActivationContext.c)
 *     RtlRaiseException @ 0x180040C10 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlGetActiveActivationContext(_QWORD *a1)
{
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rsi
  unsigned __int64 ActiveFrame; // rdi
  int v4; // ecx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  if ( !ActivationContextStackPointer )
    return 0LL;
  ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  if ( ActivationContextStackPointer->ActiveFrame )
  {
    v4 = *(_DWORD *)(ActiveFrame + 16);
    if ( (v4 & 0x70) != 0x20
      || (v4 & 8) == 0
      && *(_QWORD *)(ActiveFrame - 16) >= 0x48uLL
      && (*(_QWORD *)(ActiveFrame + 24) != ~*(_QWORD *)ActiveFrame
       || *(_QWORD *)(ActiveFrame + 32) != ~*(_QWORD *)(ActiveFrame + 8)) )
    {
      ExceptionRecord.NumberParameters = 4;
      ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
      ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
      ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
      ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
      ExceptionRecord.ExceptionCode = -1072365548;
      ExceptionRecord.ExceptionFlags = 1;
      RtlRaiseException(&ExceptionRecord);
      return 3221225701LL;
    }
    RtlAddRefActivationContext(*(_QWORD *)(ActiveFrame + 8));
    *a1 = *(_QWORD *)(ActiveFrame + 8);
  }
  return 0LL;
}
