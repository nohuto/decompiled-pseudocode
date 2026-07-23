/*
 * XREFs of LdrShutdownProcess @ 0x18007ECA0
 * Callers:
 *     RtlExitUserProcess @ 0x18007DD80 (RtlExitUserProcess.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18002B990 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002C550 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpCallTlsInitializers @ 0x1800365C0 (LdrpCallTlsInitializers.c)
 *     LdrpCallInitRoutine @ 0x1800369EC (LdrpCallInitRoutine.c)
 *     RtlProcessFlsData @ 0x18007EFE0 (RtlProcessFlsData.c)
 *     RtlpHpEnvFlsCleanup @ 0x18007FF10 (RtlpHpEnvFlsCleanup.c)
 *     EtwNotificationUnregister @ 0x18008D530 (EtwNotificationUnregister.c)
 *     RtlDetectHeapLeaks @ 0x1800C1BA0 (RtlDetectHeapLeaks.c)
 *     SbCleanupTrace @ 0x180102180 (SbCleanupTrace.c)
 *     LdrpVsmEnclaveUnregisterTelemetry @ 0x180103FA4 (LdrpVsmEnclaveUnregisterTelemetry.c)
 *     UcpUnInitializeListHead @ 0x180157D70 (UcpUnInitializeListHead.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __noreturn LdrShutdownProcess(void)
{
  struct _TEB *v0; // rdi
  _PEB *ProcessEnvironmentBlock; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  void *FlsData; // rcx
  char v4; // r14
  REGHANDLE v5; // rcx
  REGHANDLE v6; // rcx
  __int64 *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r15
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v12; // [rsp+60h] [rbp-A8h]
  __int128 v13; // [rsp+70h] [rbp-98h]
  __int128 v14; // [rsp+80h] [rbp-88h]
  __int64 v15; // [rsp+90h] [rbp-78h]
  _QWORD v16[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v17; // [rsp+B0h] [rbp-58h]
  __int128 v18; // [rsp+C0h] [rbp-48h]
  __int128 v19; // [rsp+D0h] [rbp-38h]
  __int64 v20; // [rsp+E0h] [rbp-28h]

  CommandLine = 0LL;
  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  if ( !byte_1801CA908 )
  {
    CommandLine = ProcessEnvironmentBlock->ProcessParameters->CommandLine;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 1) == 0 )
      CommandLine.Buffer = (wchar_t *)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      8105,
      (__int64)"LdrShutdownProcess",
      2,
      "Process 0x%p (%wZ) exiting\n",
      v0->ClientId.UniqueProcess,
      &CommandLine);
    qword_1801CA910 = (__int64)v0->ClientId.UniqueThread;
    byte_1801CA908 = 1;
    if ( g_ShimsEnabled )
      ((void (*)(void))(__ROR8__(g_pfnSE_ProcessDying, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
    FlsData = v0->FlsData;
    if ( FlsData )
      RtlProcessFlsData(FlsData, 1LL);
    if ( (LdrpPolicyBits & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (AvrfAppVerifierMode & 1) != 0 )
    {
      v4 = 0;
      v7 = (__int64 *)qword_1801CA8F8;
      while ( v7 != &qword_1801CA8F0 )
      {
        v8 = (__int64)(v7 - 4);
        v7 = (__int64 *)v7[1];
        v9 = *(_QWORD *)(v8 + 56);
        if ( v9 && (*(_DWORD *)(v8 + 104) & 0x80000) != 0 )
        {
          v11[0] = 72LL;
          v11[1] = 1LL;
          v12 = 0LL;
          v13 = 0LL;
          v14 = 0LL;
          v15 = 0LL;
          RtlActivateActivationContextUnsafeFast((__int64)v11, *(_QWORD *)(v8 + 136));
          if ( *(_WORD *)(v8 + 110) && v0->ThreadLocalStoragePointer )
            LdrpCallTlsInitializers(0, v8);
          LdrpCallInitRoutine(v9, *(_QWORD *)(v8 + 48), 0, 1LL);
          RtlDeactivateActivationContextUnsafeFast((__int64)v11);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && v0->ThreadLocalStoragePointer )
      {
        v16[0] = 72LL;
        v16[1] = 1LL;
        v17 = 0LL;
        v18 = 0LL;
        v19 = 0LL;
        v20 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)v16, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)v16);
      }
    }
    else
    {
      v4 = 1;
    }
    if ( g_isUcpListInitialized )
    {
      UcpUnInitializeListHead();
      v5 = qword_1801C46E8;
      dword_1801C46C8 = 0;
      qword_1801C46E8 = 0LL;
      EtwNotificationUnregister(v5, 0LL);
    }
    LdrpVsmEnclaveUnregisterTelemetry();
    if ( CastGuardProvidersRegistered )
    {
      v6 = qword_1801C4A58;
      dword_1801C4A38 = 0;
      qword_1801C4A58 = 0LL;
      EtwNotificationUnregister(v6, 0LL);
      CastGuardProvidersRegistered = 0;
    }
    if ( !v4 )
      RtlDetectHeapLeaks();
    SbCleanupTrace();
    RtlpHpEnvFlsCleanup(1LL);
  }
}
