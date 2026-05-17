/*
 * XREFs of LdrShutdownProcess @ 0x180087920
 * Callers:
 *     RtlExitUserProcess @ 0x1800869E0 (RtlExitUserProcess.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180041420 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180041FE0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpCallTlsInitializers @ 0x18004C040 (LdrpCallTlsInitializers.c)
 *     LdrpCallInitRoutine @ 0x18004C46C (LdrpCallInitRoutine.c)
 *     EtwNotificationUnregister @ 0x18006D0E0 (EtwNotificationUnregister.c)
 *     RtlProcessFlsData @ 0x180087C60 (RtlProcessFlsData.c)
 *     RtlDetectHeapLeaks @ 0x1800C43E0 (RtlDetectHeapLeaks.c)
 *     SbCleanupTrace @ 0x180102E00 (SbCleanupTrace.c)
 *     LdrpVsmEnclaveUnregisterTelemetry @ 0x180104C24 (LdrpVsmEnclaveUnregisterTelemetry.c)
 *     RtlpHpEnvFlsCleanup @ 0x180108728 (RtlpHpEnvFlsCleanup.c)
 *     UcpUnInitializeListHead @ 0x180157EA0 (UcpUnInitializeListHead.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_UNKNOWN **LdrShutdownProcess()
{
  _UNKNOWN **result; // rax
  struct _TEB *v1; // rdi
  _PEB *ProcessEnvironmentBlock; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  void *FlsData; // rcx
  char v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r15
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v13; // [rsp+60h] [rbp-A8h]
  __int128 v14; // [rsp+70h] [rbp-98h]
  __int128 v15; // [rsp+80h] [rbp-88h]
  __int64 v16; // [rsp+90h] [rbp-78h]
  _QWORD v17[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v18; // [rsp+B0h] [rbp-58h]
  __int128 v19; // [rsp+C0h] [rbp-48h]
  __int128 v20; // [rsp+D0h] [rbp-38h]
  __int64 v21; // [rsp+E0h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+108h] [rbp+0h] BYREF

  result = &retaddr;
  CommandLine = 0LL;
  v1 = NtCurrentTeb();
  ProcessEnvironmentBlock = v1->ProcessEnvironmentBlock;
  if ( !byte_1801CB8C8 )
  {
    CommandLine = ProcessEnvironmentBlock->ProcessParameters->CommandLine;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 1) == 0 )
      CommandLine.Buffer = (wchar_t *)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      8105,
      (__int64)"LdrShutdownProcess",
      2,
      "Process 0x%p (%wZ) exiting\n",
      v1->ClientId.UniqueProcess,
      &CommandLine);
    qword_1801CB8D0 = (__int64)v1->ClientId.UniqueThread;
    byte_1801CB8C8 = 1;
    if ( g_ShimsEnabled )
      ((void (*)(void))(__ROR8__(g_pfnSE_ProcessDying, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
    FlsData = v1->FlsData;
    if ( FlsData )
      RtlProcessFlsData(FlsData, 1LL);
    if ( (LdrpPolicyBits & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (AvrfAppVerifierMode & 1) != 0 )
    {
      v5 = 0;
      v8 = (__int64 *)qword_1801CB8B8;
      while ( v8 != &qword_1801CB8B0 )
      {
        v9 = (__int64)(v8 - 4);
        v8 = (__int64 *)v8[1];
        v10 = *(_QWORD *)(v9 + 56);
        if ( v10 && (*(_DWORD *)(v9 + 104) & 0x80000) != 0 )
        {
          v12[0] = 72LL;
          v12[1] = 1LL;
          v13 = 0LL;
          v14 = 0LL;
          v15 = 0LL;
          v16 = 0LL;
          RtlActivateActivationContextUnsafeFast((__int64)v12, *(_QWORD *)(v9 + 136));
          if ( *(_WORD *)(v9 + 110) && v1->ThreadLocalStoragePointer )
            LdrpCallTlsInitializers(0, v9);
          LdrpCallInitRoutine(v10, *(_QWORD *)(v9 + 48), 0, 1LL);
          RtlDeactivateActivationContextUnsafeFast((__int64)v12);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && v1->ThreadLocalStoragePointer )
      {
        v17[0] = 72LL;
        v17[1] = 1LL;
        v18 = 0LL;
        v19 = 0LL;
        v20 = 0LL;
        v21 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)v17, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)v17);
      }
    }
    else
    {
      v5 = 1;
    }
    if ( g_isUcpListInitialized )
    {
      UcpUnInitializeListHead();
      v6 = qword_1801C56E8;
      dword_1801C56C8 = 0;
      qword_1801C56E8 = 0LL;
      EtwNotificationUnregister(v6, 0LL);
    }
    LdrpVsmEnclaveUnregisterTelemetry();
    if ( CastGuardProvidersRegistered )
    {
      v7 = qword_1801C5A58;
      dword_1801C5A38 = 0;
      qword_1801C5A58 = 0LL;
      EtwNotificationUnregister(v7, 0LL);
      CastGuardProvidersRegistered = 0;
    }
    if ( !v5 )
      RtlDetectHeapLeaks();
    SbCleanupTrace();
    return (_UNKNOWN **)RtlpHpEnvFlsCleanup(1LL);
  }
  return result;
}
