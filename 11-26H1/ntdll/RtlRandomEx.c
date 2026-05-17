/*
 * XREFs of RtlRandomEx @ 0x18006EC80
 * Callers:
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800D3C98 (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlHpGlobalsInitialize @ 0x1800D4060 (RtlHpGlobalsInitialize.c)
 *     RtlHeapTrkInitialize @ 0x180110AB0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlpInitRandomExVector @ 0x18006EDE4 (RtlpInitRandomExVector.c)
 *     RtlRunOnceComplete @ 0x18006EFF0 (RtlRunOnceComplete.c)
 *     RtlReportCriticalFailure @ 0x18006F0F8 (RtlReportCriticalFailure.c)
 *     RtlpRunOnceWaitForInit @ 0x180070048 (RtlpRunOnceWaitForInit.c)
 */

__int64 __fastcall RtlRandomEx(__int32 *a1)
{
  signed __int64 v1; // rax
  signed __int64 v3; // rcx
  signed __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int32 v7; // r8d
  __int32 v8; // r8d
  unsigned int i; // edx
  __int64 result; // rax
  int v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = RtlpRandomExInit;
  LOBYTE(v13) = 0;
  if ( (RtlpRandomExInit & 3) != 2 )
  {
    do
    {
      while ( 1 )
      {
        v3 = v1 & 3;
        if ( (v1 & 3) == 0 )
          break;
        if ( v3 != 1 )
        {
          if ( v3 != 3 )
            goto LABEL_11;
          v5 = -1073741584;
          goto LABEL_10;
        }
        v1 = RtlpRunOnceWaitForInit(v1, &RtlpRandomExInit);
      }
      v4 = v1;
      v1 = _InterlockedCompareExchange64(&RtlpRandomExInit, 1LL, v1);
    }
    while ( v1 != v4 );
    if ( (unsigned int)RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
    {
      v5 = RtlRunOnceComplete(&RtlpRandomExInit, 0LL, 0LL);
      if ( v5 >= 0 )
        goto LABEL_11;
      LOBYTE(v13) = 1;
      goto LABEL_10;
    }
    v5 = RtlRunOnceComplete(&RtlpRandomExInit, 4LL, 0LL);
    if ( v5 < 0 )
    {
      LOBYTE(v13) = 2;
LABEL_10:
      RtlReportCriticalFailure((unsigned int)v5, &v13, 1LL);
    }
  }
LABEL_11:
  v6 = RtlpRandomExAuxVarY & 0x7F;
  v7 = (2147483629 * (unsigned __int64)(unsigned int)*a1 + 2147483587) % 0x7FFFFFFF;
  *a1 = v7;
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
