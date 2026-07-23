/*
 * XREFs of EtwpFailLogging @ 0x140258780
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218430 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402578F0 (EtwpLevelKeywordEnabled.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseTraceBuffer @ 0x140258A90 (EtwpReleaseTraceBuffer.c)
 *     EtwpTraceLostEvent @ 0x140258AC8 (EtwpTraceLostEvent.c)
 *     EtwpUpdateEventsLostCount @ 0x140258E50 (EtwpUpdateEventsLostCount.c)
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
  __int64 v19; // rax
  __int64 v20; // r11
  unsigned int *v21; // r11
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbp
  int v27; // [rsp+98h] [rbp+10h]
  __int64 v28; // [rsp+A0h] [rbp+18h]

  v10 = *(_QWORD *)(a2 + 648);
  v11 = 0;
  v12 = a4;
  if ( *(_DWORD *)(a3 + 768) )
  {
    v19 = 0LL;
    do
    {
      v20 = *(_QWORD *)(a3 + 48 * v19);
      v28 = a3 + 48 * v19;
      v27 = v20;
      if ( (*(_DWORD *)(v20 + 12) & 0x8000000) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(a3 + 48 * v19 + 8) + 2LL) = -16371;
        EtwpUpdateEventsLostCount(v20);
        if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(a2 + 40, a1, v27 + 136, a5, a6, a8, a9, a7, a10);
      }
      EtwpReleaseTraceBuffer(v28 + 16);
      if ( a7 )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v10 + 704) + 8LL * *v21),
          1u);
      v19 = ++v11;
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
      v23 = *(unsigned __int16 *)(v22 + 6);
      if ( !a7
        || ExAcquireRundownProtectionCacheAwareEx(
             *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v10 + 704) + 8 * v23),
             1u) )
      {
        v24 = 8 * v23;
        if ( (unsigned int)v23 < *(_DWORD *)(v10 + 16) )
        {
          v25 = *(_QWORD *)(v10 + 712);
          v26 = *(_QWORD *)(v24 + v25);
          if ( (v26 & 1) == 0 )
          {
            EtwpUpdateEventsLostCount(*(_QWORD *)(v24 + v25));
            if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_LOST_EVENT) )
              EtwpTraceLostEvent(a2 + 40, a1, v26 + 136, a5, a6, a8, a9, a7, a10);
          }
        }
        if ( a7 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v10 + 704) + v24), 1u);
      }
    }
    result = v12;
  }
  return result;
}
