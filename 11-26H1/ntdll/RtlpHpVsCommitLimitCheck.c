/*
 * XREFs of RtlpHpVsCommitLimitCheck @ 0x18006CE50
 * Callers:
 *     RtlpHpVsChunkFree @ 0x18006B040 (RtlpHpVsChunkFree.c)
 * Callees:
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 *     RtlpHpTlLogGCScheduled @ 0x180096B64 (RtlpHpTlLogGCScheduled.c)
 */

_BOOL8 __fastcall RtlpHpVsCommitLimitCheck(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx

  if ( *(__int16 *)(a2 + 36) < 0 )
    return 0LL;
  if ( *(_WORD *)(a1 + 6) )
  {
    if ( (*(_BYTE *)((*(_QWORD *)(a1 + 8) ^ a1) + 0xD) & 8) != 0 )
    {
      return 1LL;
    }
    else
    {
      v5 = *(_QWORD *)(*(__int16 *)((*(_QWORD *)(a1 + 8) ^ a1) + 0x16) + (*(_QWORD *)(a1 + 8) ^ a1) + 8) >> *(_BYTE *)((*(_QWORD *)(a1 + 8) ^ a1) + 0xB);
      if ( v5 <= 8 )
        v5 = 8LL;
      v6 = *(_QWORD *)(*(__int16 *)((*(_QWORD *)(a1 + 8) ^ a1) + 0x16) + (*(_QWORD *)(a1 + 8) ^ a1) + 8) >> *(_BYTE *)((*(_QWORD *)(a1 + 8) ^ a1) + 0xC);
      if ( v6 <= 8 )
        v6 = 8LL;
      v4 = *(__int16 *)((*(_QWORD *)(a1 + 8) ^ a1) + 0x16);
      v7 = a3 + *(_QWORD *)(v4 + (*(_QWORD *)(a1 + 8) ^ a1) + 24) + *(_QWORD *)(v4 + (*(_QWORD *)(a1 + 8) ^ a1) + 16);
      if ( v7 > v5 )
      {
        if ( !qword_1801C7268 || byte_1801CB8C8 )
        {
          return 1LL;
        }
        else
        {
          if ( !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C7278, 1, 0) )
          {
            TpSetTimerEx(qword_1801C7268, (__int64)&qword_1801C7270, 0, 1000);
            if ( (RtlpHpHeapFeatures & 0x10) != 0 )
              RtlpHpTlLogGCScheduled();
          }
          return v7 > v6;
        }
      }
      else
      {
        return 0LL;
      }
    }
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 88) >> 7;
    if ( v8 <= 8 )
      v8 = 8LL;
    return *(_QWORD *)(a1 + 96) + (unsigned __int64)a3 > v8;
  }
}
