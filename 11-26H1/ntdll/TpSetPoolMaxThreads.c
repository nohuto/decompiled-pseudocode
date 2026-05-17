/*
 * XREFs of TpSetPoolMaxThreads @ 0x1800ECDE0
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18004E450 (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x18004F310 (TpSetDefaultPoolMaxThreads.c)
 *     LdrpEnableParallelLoading @ 0x1800649F0 (LdrpEnableParallelLoading.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     TppETWPoolThreadMax @ 0x180159400 (TppETWPoolThreadMax.c)
 *     NtSetInformationWorkerFactory @ 0x180162570 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TpSetPoolMaxThreads(__int64 a1, int a2)
{
  __int64 v3; // rcx
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( !a1 || a2 < 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 5LL, &v4, 4LL);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v3 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v3 = 2147353478LL;
    if ( *(_BYTE *)v3 )
      TppETWPoolThreadMax(a1, v4);
  }
}
