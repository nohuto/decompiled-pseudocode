/*
 * XREFs of TpSetPoolWorkerThreadIdleTimeout @ 0x1800FFC10
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180084E40 (LdrpEnableParallelLoading.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     NtSetInformationWorkerFactory @ 0x180162470 (NtSetInformationWorkerFactory.c)
 */

NTSTATUS __fastcall TpSetPoolWorkerThreadIdleTimeout(__int64 a1, __int64 a2)
{
  __int64 WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = a2;
  if ( a1 && a2 < 0 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return NtSetInformationWorkerFactory(*(HANDLE *)(a1 + 56), WorkerFactoryIdleTimeout, &WorkerFactoryInformation, 8u);
  TppRaiseInvalidParameter();
  return -1073741811;
}
