/*
 * XREFs of RtlpHpLfhSubsegmentConstructCommitState @ 0x180063150
 * Callers:
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x180062990 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x180063920 (RtlpHpLfhSubsegmentReformatCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentConstructCommitState(__int64 a1, unsigned __int64 a2, _QWORD *a3, _WORD *a4)
{
  unsigned int v4; // r14d
  int v5; // eax
  _QWORD *v6; // rsi
  int v8; // r11d
  int v9; // r10d
  unsigned __int64 v10; // r12
  _QWORD *v11; // rbp
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // rdx
  int i; // eax
  unsigned __int16 v20; // [rsp+32h] [rbp+Ah]

  v4 = 0;
  v5 = qword_1801C5EC8 ^ *(_DWORD *)(a2 + 40) ^ (a2 >> 12);
  v6 = a3;
  *a4 = 1;
  v8 = 0;
  v20 = HIWORD(v5);
  v9 = (unsigned __int16)v5;
  v10 = 0xFFFFFFFFuLL >> (-*(unsigned __int16 *)(a2 + 34) & 0x1F);
  v11 = &a3[(unsigned int)*(unsigned __int8 *)(a2 + 24) - 9];
  if ( a3 <= v11 )
  {
    do
    {
      v12 = (unsigned int)v10 & (unsigned int)*v6;
      if ( v6 != v11 )
        v12 = (unsigned int)*v6;
      v4 += __popcnt(v12);
      while ( v12 )
      {
        _BitScanForward64(&v13, v12);
        v12 ^= 1LL << v13;
        v14 = v8 + v13;
        LOBYTE(v13) = *(_BYTE *)(a2 + 38);
        v15 = v20 + v9 * v14;
        v16 = v9 + v15 - 1;
        v17 = v15 >> 12 >> v13;
        for ( i = (v16 >> 12 >> v13) - v17 + 1; i; --i )
        {
          ++a4[v17];
          v17 = (unsigned int)(v17 + 1);
        }
      }
      ++v6;
      v8 += 32;
    }
    while ( v6 <= v11 );
  }
  return v4;
}
