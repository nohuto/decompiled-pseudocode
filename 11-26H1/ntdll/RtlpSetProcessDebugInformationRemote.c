/*
 * XREFs of RtlpSetProcessDebugInformationRemote @ 0x18013A430
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18007DD10 (RtlExitUserThread.c)
 *     RtlSetProcessDebugInformation @ 0x18013A090 (RtlSetProcessDebugInformation.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 */

void __fastcall __noreturn RtlpSetProcessDebugInformationRemote(_RTL_DEBUG_INFORMATION *BaseAddress)
{
  ULONG_PTR ViewBaseDelta; // rcx
  PRTL_PROCESS_VERIFIER_OPTIONS VerifierOptions; // rax
  PRTL_PROCESS_BACKTRACES BackTraces; // rax
  NTSTATUS v5; // eax
  NTSTATUS v6; // ebx

  ViewBaseDelta = BaseAddress->ViewBaseDelta;
  if ( ViewBaseDelta )
  {
    VerifierOptions = BaseAddress->VerifierOptions;
    if ( VerifierOptions )
      BaseAddress->VerifierOptions = (PRTL_PROCESS_VERIFIER_OPTIONS)((char *)VerifierOptions - ViewBaseDelta);
    BackTraces = BaseAddress->BackTraces;
    if ( BackTraces )
      BaseAddress->BackTraces = (PRTL_PROCESS_BACKTRACES)((char *)BackTraces - ViewBaseDelta);
  }
  v5 = RtlSetProcessDebugInformation(NtCurrentTeb()->ClientId.UniqueProcess, BaseAddress->Flags, BaseAddress);
  BaseAddress->ViewBaseTarget = 0LL;
  v6 = v5;
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  RtlExitUserThread(v6);
}
