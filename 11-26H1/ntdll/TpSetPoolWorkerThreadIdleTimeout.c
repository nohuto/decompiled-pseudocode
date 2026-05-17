/*
 * XREFs of TpSetPoolWorkerThreadIdleTimeout @ 0x1801004C0
 * Callers:
 *     LdrpEnableParallelLoading @ 0x1800649F0 (LdrpEnableParallelLoading.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     NtSetInformationWorkerFactory @ 0x180162570 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpSetPoolWorkerThreadIdleTimeout(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  if ( a1 && a2 < 0 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 2LL, &v3, 8LL);
  TppRaiseInvalidParameter();
  return 3221225485LL;
}
