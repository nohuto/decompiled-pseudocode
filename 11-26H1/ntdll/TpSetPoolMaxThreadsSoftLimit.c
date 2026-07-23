/*
 * XREFs of TpSetPoolMaxThreadsSoftLimit @ 0x1800FEE00
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x1800389D0 (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180039890 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     NtSetInformationWorkerFactory @ 0x180162470 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TpSetPoolMaxThreadsSoftLimit(__int64 a1, int a2)
{
  int WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = a2;
  if ( !a1 || a2 < 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  else
    NtSetInformationWorkerFactory(*(HANDLE *)(a1 + 56), WorkerFactoryThreadSoftMaximum, &WorkerFactoryInformation, 4u);
}
