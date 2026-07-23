/*
 * XREFs of RtlpHpLfhSubsegmentConstructCommitState @ 0x14034BB90
 * Callers:
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x14034BA20 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x14034BE98 (RtlpHpLfhSubsegmentReformatCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentConstructCommitState(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        _WORD *a4)
{
  unsigned int v4; // ebp
  unsigned __int64 *v7; // rdi
  int v9; // eax
  int v10; // r10d
  int v11; // r12d
  int v12; // r9d
  unsigned __int64 *v13; // rsi
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // r8d
  unsigned int v19; // eax
  __int64 v20; // r8
  int i; // eax
  int v22; // eax
  unsigned int v23; // r10d
  unsigned int v24; // r11d
  unsigned __int64 v25; // rdi
  unsigned int v26; // eax
  char v27; // cl
  __int64 v28; // r8
  int v29; // edx

  v4 = 0;
  v7 = a3;
  v9 = LODWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(_DWORD *)(a2 + 40) ^ (a2 >> 12);
  v10 = 0;
  *a4 = 1;
  v11 = HIWORD(v9);
  v12 = (unsigned __int16)v9;
  v13 = &a3[(unsigned int)*(unsigned __int8 *)(a2 + 24) - 9];
  v14 = 0xFFFFFFFFFFFFFFFFuLL >> -(*(_BYTE *)(a2 + 37) + *(unsigned __int16 *)(a2 + 34));
  if ( a3 <= v13 )
  {
    do
    {
      v15 = *v7;
      if ( v7 == v13 )
        v15 &= v14;
      v4 += __popcnt(v15);
      while ( v15 )
      {
        _BitScanForward64(&v16, v15);
        v15 ^= 1LL << v16;
        v17 = v10 + v16;
        LOBYTE(v16) = *(_BYTE *)(a2 + 38);
        v18 = v11 + v12 * v17;
        v19 = v12 + v18 - 1;
        v20 = v18 >> 12 >> v16;
        for ( i = (v19 >> 12 >> v16) - v20 + 1; i; --i )
        {
          ++a4[v20];
          v20 = (unsigned int)(v20 + 1);
        }
      }
      ++v7;
      v10 += 64;
    }
    while ( v7 <= v13 );
  }
  v22 = *(unsigned __int8 *)(a2 + 37);
  if ( (_BYTE)v22 )
  {
    v4 -= v22;
    v23 = 4096;
    v24 = HIBYTE(*(unsigned __int16 *)(a2 + 38)) << 12 << *(_WORD *)(a2 + 38);
    v25 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
    if ( v24 > 0x1000 )
    {
      do
      {
        if ( v23 - v11 != v12 * (((v23 - v11) * (unsigned __int64)*(unsigned int *)(v25 + a1 + 72)) >> 32) )
        {
          v26 = v12 * (((v23 - v11) * (unsigned __int64)*(unsigned int *)(v25 + a1 + 72)) >> 32) + v11;
          v27 = *(_BYTE *)(a2 + 38);
          v28 = v26 >> 12 >> v27;
          v29 = ((v26 + v12 - 1) >> 12 >> v27) - v28 + 1;
          if ( ((v26 + v12 - 1) >> 12 >> v27) - (_DWORD)v28 != -1 )
          {
            do
            {
              --a4[v28];
              v28 = (unsigned int)(v28 + 1);
              --v29;
            }
            while ( v29 );
          }
        }
        v23 += 4096;
      }
      while ( v23 < v24 );
    }
  }
  return v4;
}
