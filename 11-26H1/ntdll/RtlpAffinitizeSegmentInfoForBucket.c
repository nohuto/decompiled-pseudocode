/*
 * XREFs of RtlpAffinitizeSegmentInfoForBucket @ 0x1800952F8
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x180006940 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180007FA0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18009554C (RtlpExtendLowFragHeapSegment.c)
 */

__int64 __fastcall RtlpAffinitizeSegmentInfoForBucket(__int64 a1, unsigned int a2)
{
  bool v2; // zf
  __int64 v4; // r14
  int v5; // edi
  __int64 v6; // r15
  __int64 v7; // rsi
  int v8; // edi
  __int64 v9; // rax
  _WORD *v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // r8
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(_BYTE *)(a1 + 672) & 1) == 0;
  v4 = a2;
  v14 = 0LL;
  if ( v2 && (v5 = RtlpAffinityState[0], LODWORD(RtlpAffinityState[0]) > 1) )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 24) + 352LL));
    if ( *(_QWORD *)(a1 + 8 * v4 + 2224) )
    {
      v8 = -1073741302;
    }
    else
    {
      v6 = (unsigned int)(v5 - 1);
      v7 = v6;
      v8 = RtlpExtendLowFragHeapSegment(a1, 192 * v6, &v14);
      if ( v8 >= 0 )
      {
        v9 = v14;
        if ( (_DWORD)v6 )
        {
          v10 = (_WORD *)(v14 + 172);
          v11 = (_QWORD *)v14;
          v12 = a1 + 3312;
          do
          {
            *v11 = v12;
            v12 += 48LL;
            *v10 = v4;
            v11 += 24;
            v10 += 96;
            --v7;
          }
          while ( v7 );
        }
        *(_QWORD *)(a1 + 8 * v4 + 2224) = v9;
      }
    }
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 24) + 352LL));
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
