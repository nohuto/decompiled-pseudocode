/*
 * XREFs of RtlpHpVsSubsegmentWalk @ 0x180110458
 * Callers:
 *     RtlpHpSegWalk @ 0x180094C1C (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x1800041CC (RtlpHpVsChunkSize.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentWalk(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _DWORD *a5, int *a6)
{
  _DWORD *v7; // rbx
  _DWORD *v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi

  if ( a3 == a2 )
  {
    v7 = (_DWORD *)(a2 + 48);
  }
  else
  {
    v8 = (_DWORD *)(a3 - 16);
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && (a3 & 0xFFF) == 0 )
      v8 = (_DWORD *)(a3 - 32);
    v7 = &v8[4 * (WORD1(v8) ^ (unsigned __int64)(((unsigned int)RtlpHpHeapGlobals ^ *v8) >> 16))];
  }
  v9 = a2 + 16 * (*(unsigned __int16 *)(a2 + 32) + 3LL);
  while ( 1 )
  {
    if ( (unsigned __int64)v7 >= v9 )
      return 0LL;
    if ( BYTE6(RtlpHpHeapGlobals) ^ (unsigned __int8)(BYTE6(v7) ^ HIWORD(*(_QWORD *)v7)) && (v7[2] & 0x200) == 0 )
      break;
    v7 += 4 * (WORD1(v7) ^ (unsigned __int64)(((unsigned int)RtlpHpHeapGlobals ^ *v7) >> 16));
  }
  v10 = (__int64)(v7 + 4);
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((unsigned __int64)(v7 + 8) & 0xFFF) == 0 )
    v10 = (__int64)(v7 + 8);
  *a4 = RtlpHpVsChunkSize(a1, v10, a3, a6);
  *a5 = 16 * (WORD1(v7) ^ WORD1(RtlpHpHeapGlobals) ^ WORD1(*(_QWORD *)v7)) - *(_DWORD *)a4 - 16;
  return v10;
}
