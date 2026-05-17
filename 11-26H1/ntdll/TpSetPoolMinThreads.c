/*
 * XREFs of TpSetPoolMinThreads @ 0x1800FDDB0
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18004E450 (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     TppETWPoolThreadMin @ 0x180159490 (TppETWPoolThreadMin.c)
 *     NtSetInformationWorkerFactory @ 0x180162570 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpSetPoolMinThreads(__int64 a1, int a2)
{
  int v3; // edi
  __int64 v4; // rdx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( !a1 || a2 < 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  else
  {
    v3 = NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 4LL, &v6, 4LL);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v4 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v4 = 2147353478LL;
    if ( *(_BYTE *)v4 )
    {
      if ( v3 >= 0 )
        TppETWPoolThreadMin(a1, v6);
    }
    return (unsigned int)v3;
  }
}
