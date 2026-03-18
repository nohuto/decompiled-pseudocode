/*
 * XREFs of EtwpFailLogging @ 0x140256DF0
 * Callers:
 *     EtwpEventWriteFull @ 0x14021336C (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140B7D098 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218100 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpLevelKeywordEnabled @ 0x140255F60 (EtwpLevelKeywordEnabled.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140257080 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseTraceBuffer @ 0x140257100 (EtwpReleaseTraceBuffer.c)
 *     EtwpTraceLostEvent @ 0x140257138 (EtwpTraceLostEvent.c)
 *     EtwpUpdateEventsLostCount @ 0x1402574C0 (EtwpUpdateEventsLostCount.c)
 */

__int64 __fastcall EtwpFailLogging(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        int a8,
        __int64 a9,
        char a10)
{
  __int64 v10; // r15
  unsigned int v11; // ebp
  unsigned __int16 v12; // bx
  __int64 result; // rax
  bool i; // zf
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r11
  unsigned int *v22; // r11
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rbp
  int v28; // [rsp+98h] [rbp+10h]
  __int64 v29; // [rsp+A0h] [rbp+18h]

  v10 = *(_QWORD *)(a2 + 648);
  v11 = 0;
  v12 = a4;
  if ( *(_DWORD *)(a3 + 768) )
  {
    v19 = 49165LL;
    v20 = 0LL;
    do
    {
      v21 = *(_QWORD *)(a3 + 48 * v20);
      v29 = a3 + 48 * v20;
      v28 = v21;
      if ( (*(_DWORD *)(v21 + 12) & 0x8000000) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(a3 + 48 * v20 + 8) + 2LL) = -16371;
        EtwpUpdateEventsLostCount(v21);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(a2 + 40, a1, v28 + 136, a5, a6, a8, a9, a7, a10);
      }
      EtwpReleaseTraceBuffer(v29 + 16, v19, a3);
      if ( a7 )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v10 + 704) + 8LL * *v22),
          1u);
      ++v11;
      v19 = 49165LL;
      v20 = v11;
    }
    while ( v11 < *(_DWORD *)(a3 + 768) );
    v12 = a4;
  }
  result = v12;
  for ( i = !_BitScanForward((unsigned int *)&v18, v12); !i; i = !_BitScanForward((unsigned int *)&v18, v12) )
  {
    v12 &= v12 - 1;
    if ( EtwpLevelKeywordEnabled(a2 + 32 * (v18 + 4), *(_BYTE *)(a1 + 4), *(_QWORD *)(a1 + 8)) )
    {
      v24 = *(unsigned __int16 *)(v23 + 6);
      if ( !a7
        || ExAcquireRundownProtectionCacheAwareEx(
             *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v10 + 704) + 8 * v24),
             1u) )
      {
        v25 = 8 * v24;
        if ( (unsigned int)v24 < *(_DWORD *)(v10 + 16) )
        {
          v26 = *(_QWORD *)(v10 + 712);
          v27 = *(_QWORD *)(v25 + v26);
          if ( (v27 & 1) == 0 )
          {
            EtwpUpdateEventsLostCount(*(_QWORD *)(v25 + v26));
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
              EtwpTraceLostEvent(a2 + 40, a1, v27 + 136, a5, a6, a8, a9, a7, a10);
          }
        }
        if ( a7 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v10 + 704) + v25), 1u);
      }
    }
    result = v12;
  }
  return result;
}
