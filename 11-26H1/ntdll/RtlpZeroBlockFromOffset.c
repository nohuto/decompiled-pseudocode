/*
 * XREFs of RtlpZeroBlockFromOffset @ 0x180014BB4
 * Callers:
 *     RtlpGrowBlockInPlace @ 0x180013260 (RtlpGrowBlockInPlace.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

unsigned __int8 __fastcall RtlpZeroBlockFromOffset(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r9
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int8 result; // al
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // al
  __int64 v13; // r8

  v4 = a2 - 16;
  _m_prefetchw((const void *)(a2 - 16));
  if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
    v4 -= 16LL * *(unsigned __int8 *)(v4 + 14);
  v6 = 0LL;
  if ( *(char *)(v4 + 15) >= 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v7 = *(_DWORD *)(v4 + 8);
      if ( (v7 & *(_DWORD *)(a1 + 124)) != 0 )
        v7 ^= *(_DWORD *)(a1 + 136);
    }
    else
    {
      LOWORD(v7) = *(_WORD *)(v4 + 8);
    }
  }
  else
  {
    if ( !((unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v4 + 8) ^ (v4 >> 4))) )
      v6 = *(_QWORD *)(v4
                     - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v4 + 8) ^ (unsigned int)(v4 >> 4)) >> 12));
    LOWORD(v7) = *(_WORD *)(v6 + 36);
  }
  v8 = (unsigned __int16)v7;
  result = *(_BYTE *)(v4 + 15);
  v10 = 16 * v8;
  if ( result != 4 )
  {
    v11 = v10 - 8;
    v12 = result & 0x3F;
    if ( v12 != 63 )
      v11 = v10;
    v13 = v11 + 8;
    if ( (*(_BYTE *)(v4 + 10) & 2) != 0 )
    {
      v13 -= 16LL;
      if ( v12 != 63 )
        v13 -= 8LL;
    }
    return (unsigned __int8)memset_thunk_772440563353939046((void *)(a2 + a3), 0, v13 - a3 - 16);
  }
  return result;
}
