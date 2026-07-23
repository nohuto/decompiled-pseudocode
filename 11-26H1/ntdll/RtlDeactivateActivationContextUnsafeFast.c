/*
 * XREFs of RtlDeactivateActivationContextUnsafeFast @ 0x18002B990
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpQuerySxSMUIFile @ 0x18001D5D8 (LdrpQuerySxSMUIFile.c)
 *     LdrpLoadForwardedDll @ 0x180024A70 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025500 (LdrpLoadDependentModuleInternal.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18002A7C0 (TppCallbackCheckThreadAfterCallback.c)
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
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

void __fastcall RtlDeactivateActivationContextUnsafeFast(__int64 a1)
{
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rdi
  unsigned __int64 ActiveFrame; // rcx
  unsigned __int64 v4; // r8
  __int64 *v5; // r9
  int v6; // edx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // r15
  unsigned int v10; // r14d
  int v11; // eax
  int v12; // ecx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-69h] BYREF
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+5Fh]

  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  v4 = *(unsigned int *)(a1 + 32);
  v5 = (__int64 *)(a1 + 16);
  if ( (v4 & 0x40) != 0 )
  {
    ExceptionRecord.NumberParameters = 3;
    ExceptionRecord.ExceptionInformation[0] = 0LL;
    ExceptionRecord.ExceptionInformation[1] = a1 + 16;
    v7 = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
    ExceptionRecord.ExceptionCode = -1072365551;
    ExceptionRecord.ExceptionInformation[2] = v7;
    ExceptionRecord.ExceptionFlags = 0;
    RtlRaiseException(&ExceptionRecord);
    return;
  }
  if ( (v4 & 0x20) == 0 )
  {
    ExceptionRecord.NumberParameters = 3;
    ExceptionRecord.ExceptionInformation[0] = 0LL;
    ExceptionRecord.ExceptionInformation[1] = a1 + 16;
    ExceptionRecord.ExceptionInformation[2] = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
    ExceptionRecord.ExceptionCode = -1072365552;
    goto LABEL_23;
  }
  if ( (v4 & 0x60) != 0x20
    || *(_QWORD *)a1 >= 0x48uLL && (*(_QWORD *)(a1 + 40) != ~*v5 || *(_QWORD *)(a1 + 48) != ~*(_QWORD *)(a1 + 24)) )
  {
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = a1 + 16;
    ExceptionRecord.ExceptionInformation[3] = v4;
    ExceptionRecord.ExceptionCode = -1072365548;
    goto LABEL_23;
  }
  if ( ActiveFrame )
  {
    v6 = *(_DWORD *)(ActiveFrame + 16);
    if ( (v6 & 0x70) != 0x20
      || (v6 & 8) == 0
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
LABEL_23:
      ExceptionRecord.ExceptionFlags = 1;
      RtlRaiseException(&ExceptionRecord);
      return;
    }
  }
  if ( (v4 & 0x10) == 0 )
  {
    if ( (__int64 *)ActiveFrame != v5 )
    {
      v8 = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
      v9 = *v5;
      v10 = 0;
      DbgPrintEx(
        0x33u,
        2u,
        "SXS: %s() Active frame is not the frame being deactivated %p != %p\n",
        "RtlDeactivateActivationContextUnsafeFast",
        ActivationContextStackPointer->ActiveFrame,
        (const void *)(a1 + 16));
      while ( v8 && v8 != v9 )
      {
        v12 = *(_DWORD *)(v8 + 16);
        if ( (v12 & 0x70) != 0x20
          || (v12 & 8) == 0 && (*(_QWORD *)(v8 + 24) != ~*(_QWORD *)v8 || *(_QWORD *)(v8 + 32) != ~*(_QWORD *)(v8 + 8)) )
        {
          ExceptionRecord.NumberParameters = 4;
          ExceptionRecord.ExceptionInformation[2] = a1 + 16;
          ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
          ExceptionRecord.ExceptionInformation[1] = v8;
          ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(v8 + 16);
          ExceptionRecord.ExceptionCode = -1072365548;
          ExceptionRecord.ExceptionFlags = 1;
          RtlRaiseException(&ExceptionRecord);
          return;
        }
        v8 = *(_QWORD *)v8;
        ++v10;
      }
      ExceptionRecord.ExceptionInformation[0] = v10;
      ExceptionRecord.ExceptionInformation[1] = a1 + 16;
      ExceptionRecord.NumberParameters = 3;
      ExceptionRecord.ExceptionInformation[2] = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
      if ( v8 )
      {
        ExceptionRecord.ExceptionFlags = 0;
        v11 = -1072365553;
        if ( !v10 )
          v11 = -1072365551;
        ExceptionRecord.ExceptionCode = v11;
      }
      else
      {
        ExceptionRecord.ExceptionCode = -1072365552;
        ExceptionRecord.ExceptionFlags = 1;
      }
      RtlRaiseException(&ExceptionRecord);
    }
    ActivationContextStackPointer->ActiveFrame = *(_RTL_ACTIVATION_CONTEXT_STACK_FRAME **)(a1 + 16);
  }
  *(_DWORD *)(a1 + 32) |= 0x40u;
  if ( *(_QWORD *)a1 >= 0x48uLL )
    *(_QWORD *)(a1 + 64) = retaddr;
}
