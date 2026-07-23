/*
 * XREFs of RtlActivateActivationContextUnsafeFast @ 0x18002C550
 * Callers:
 *     TppCleanupGroupMemberCallbackProlog @ 0x1800167D0 (TppCleanupGroupMemberCallbackProlog.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpQuerySxSMUIFile @ 0x18001D5D8 (LdrpQuerySxSMUIFile.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025500 (LdrpLoadDependentModuleInternal.c)
 *     TppWorkCallbackPrologRelease @ 0x18003E030 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x18003E8A0 (TppAlpcpExecuteCallback.c)
 *     LdrShutdownThread @ 0x18007E040 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x18007ECA0 (LdrShutdownProcess.c)
 *     RtlpTpWorkCallback @ 0x1800870E0 (RtlpTpWorkCallback.c)
 *     LdrpInitializeThread @ 0x1800CCB30 (LdrpInitializeThread.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     RtlDispatchAPC @ 0x1800D9D60 (RtlDispatchAPC.c)
 *     LdrpInitializeNode @ 0x18011A0B0 (LdrpInitializeNode.c)
 *     LdrpProcessDetachNode @ 0x18011AE58 (LdrpProcessDetachNode.c)
 * Callees:
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

void __fastcall RtlActivateActivationContextUnsafeFast(__int64 a1, __int64 a2)
{
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r9
  unsigned __int64 ActiveFrame; // rdx
  bool v5; // cf
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h]

  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  v5 = *(_QWORD *)a1 < 0x48uLL;
  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  if ( !v5 )
  {
    *(_QWORD *)(a1 + 40) = ~ActiveFrame;
    *(_QWORD *)(a1 + 48) = ~a2;
    *(_QWORD *)(a1 + 56) = retaddr;
  }
  if ( ActiveFrame && (*(_DWORD *)(ActiveFrame + 16) & 0x70) != 0x20 )
  {
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
    ExceptionRecord.ExceptionCode = -1072365548;
    ExceptionRecord.ExceptionFlags = 1;
    RtlRaiseException(&ExceptionRecord);
    return;
  }
  *(_QWORD *)(a1 + 16) = ActiveFrame;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 32) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == a2 )
      goto LABEL_8;
  }
  else if ( !a2 )
  {
LABEL_8:
    *(_DWORD *)(a1 + 32) = 48;
    return;
  }
  ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)(a1 + 16);
}
