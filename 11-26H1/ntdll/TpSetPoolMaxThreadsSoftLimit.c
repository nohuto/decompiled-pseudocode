/*
 * XREFs of TpSetPoolMaxThreadsSoftLimit @ 0x1800FF6B0
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18004E450 (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x18004F310 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     NtSetInformationWorkerFactory @ 0x180162570 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TpSetPoolMaxThreadsSoftLimit(__int64 a1, int a2)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( !a1 || a2 < 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  else
    NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 14LL, &v2, 4LL);
}
