/*
 * XREFs of RtlRandomEx @ 0x18008F0D0
 * Callers:
 *     RtlHpGlobalsInitialize @ 0x1800CFD78 (RtlHpGlobalsInitialize.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800D20A8 (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlHeapTrkInitialize @ 0x180110640 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlpInitRandomExVector @ 0x18008F234 (RtlpInitRandomExVector.c)
 *     RtlRunOnceComplete @ 0x18008F440 (RtlRunOnceComplete.c)
 *     RtlReportCriticalFailure @ 0x18008F548 (RtlReportCriticalFailure.c)
 *     RtlpRunOnceWaitForInit @ 0x180090498 (RtlpRunOnceWaitForInit.c)
 */

ULONG __cdecl RtlRandomEx(PULONG Seed)
{
  signed __int64 Value; // rax
  signed __int64 v3; // rcx
  signed __int64 v4; // rcx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  unsigned __int32 v7; // r8d
  __int32 v8; // r8d
  unsigned int i; // edx
  ULONG result; // eax
  int v13; // [rsp+30h] [rbp+8h] BYREF

  Value = RtlpRandomExInit.Value;
  LOBYTE(v13) = 0;
  if ( ((__int64)RtlpRandomExInit.Ptr & 3) != 2 )
  {
    do
    {
      while ( 1 )
      {
        v3 = Value & 3;
        if ( (Value & 3) == 0 )
          break;
        if ( v3 != 1 )
        {
          if ( v3 != 3 )
            goto LABEL_11;
          v5 = -1073741584;
          goto LABEL_10;
        }
        Value = RtlpRunOnceWaitForInit(Value, &RtlpRandomExInit);
      }
      v4 = Value;
      Value = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpRandomExInit, 1LL, Value);
    }
    while ( Value != v4 );
    if ( (unsigned int)RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
    {
      v5 = RtlRunOnceComplete(&RtlpRandomExInit, 0, 0LL);
      if ( v5 >= 0 )
        goto LABEL_11;
      LOBYTE(v13) = 1;
      goto LABEL_10;
    }
    v5 = RtlRunOnceComplete(&RtlpRandomExInit, 4u, 0LL);
    if ( v5 < 0 )
    {
      LOBYTE(v13) = 2;
LABEL_10:
      RtlReportCriticalFailure((unsigned int)v5, &v13, 1LL);
    }
  }
LABEL_11:
  v6 = RtlpRandomExAuxVarY & 0x7F;
  v7 = (2147483629 * (unsigned __int64)*Seed + 2147483587) % 0x7FFFFFFF;
  *Seed = v7;
  v8 = _InterlockedExchange(&RtlpRandomExConstantVector[v6], v7);
  v13 = 0;
  if ( MEMORY[0x7FFE0290] )
  {
    for ( i = 0; i < 0xA; ++i )
    {
      __asm { rdrand  eax }
      if ( _CF )
        goto LABEL_17;
    }
  }
  _EAX = 0;
LABEL_17:
  result = v8 ^ _EAX;
  _InterlockedAdd(&RtlpRandomExAuxVarY, result);
  return result;
}
