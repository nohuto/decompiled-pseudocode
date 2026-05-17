/*
 * XREFs of RtlpHpLfhSubsegmentDecBlockCounts @ 0x180096580
 * Callers:
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1800962E0 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1800966D8 (RtlpHpLfhSubsegmentDecommitPages.c)
 * Callees:
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 *     RtlpHpTlLogGCScheduled @ 0x180096B64 (RtlpHpTlLogGCScheduled.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentDecBlockCounts(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  char v6; // cl
  unsigned int v7; // r10d
  __int64 v8; // r11
  char *v9; // rdx
  __int64 v10; // rbx
  unsigned int v11; // eax
  int v12; // r8d
  char *v13; // rcx
  signed __int16 v14; // ax
  signed __int64 v16; // rcx
  unsigned __int64 v17; // rcx

  v6 = *(_BYTE *)(a2 + 38);
  v7 = a3 >> 12 >> v6;
  v8 = 2LL * v7;
  v9 = (char *)(a2 + v8 + 8LL * *(unsigned __int8 *)(a2 + 24));
  _m_prefetchw(v9);
  LODWORD(v10) = -1;
  v11 = a4 + a3 - 1;
  v12 = 0;
  v13 = &v9[2 * ((v11 >> 12 >> v6) - v7) + 2];
  if ( v9 < v13 )
  {
    do
    {
      v14 = _InterlockedDecrement16((volatile signed __int16 *)v9);
      if ( v14 )
      {
        if ( v14 == -1 )
          --v12;
      }
      else
      {
        ++v12;
        if ( (_DWORD)v10 == -1 )
          v10 = v8 >> 1;
      }
      v9 += 2;
      v8 += 2LL;
    }
    while ( v9 < v13 );
    if ( v12 )
    {
      v16 = (v12 << 12 << *(_BYTE *)(a2 + 38)) / 4096;
      _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 74) + a1 + 24), v16);
      if ( v16 > 0 )
      {
        v17 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
        if ( !*(_BYTE *)(v17 + a1 + 92) )
        {
          *(_BYTE *)(v17 + a1 + 92) = 1;
          if ( !(_DWORD)qword_1801C7278 )
          {
            if ( qword_1801C7268 )
            {
              if ( !byte_1801CB8C8 && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C7278, 1, 0) )
              {
                TpSetTimerEx(qword_1801C7268, (__int64)&qword_1801C7270, 0, 1000);
                if ( (RtlpHpHeapFeatures & 0x10) != 0 )
                  RtlpHpTlLogGCScheduled();
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v10;
}
