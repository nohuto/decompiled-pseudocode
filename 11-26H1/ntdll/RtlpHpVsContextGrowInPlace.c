/*
 * XREFs of RtlpHpVsContextGrowInPlace @ 0x180082330
 * Callers:
 *     RtlpHpSegReAlloc @ 0x18008159C (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x18005EA34 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkSetUnusedBytes @ 0x18005EEE0 (RtlpHpVsChunkSetUnusedBytes.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsContextGrowInPlace(__int64 a1, _WORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  bool v6; // zf
  __int64 v7; // r14
  int v10; // eax
  unsigned int v11; // edx
  int v12; // ecx
  unsigned int v13; // ecx
  _RTL_SRWLOCK *v14; // r13
  unsigned __int64 v15; // r9
  int v16; // r8d
  int v17; // r8d
  unsigned __int64 v18; // rdx
  int v19; // ecx
  __int64 v21; // rdi
  int v22; // r9d
  int v23; // ecx
  unsigned int v24; // edx
  PRTL_SRWLOCK SRWLock[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v26; // [rsp+40h] [rbp-48h]
  unsigned int v27; // [rsp+90h] [rbp+8h]
  __int64 v28; // [rsp+A0h] [rbp+18h]

  v4 = a3 - 16;
  v5 = 0LL;
  v26 = 0LL;
  v6 = (*(_BYTE *)(a1 + 4) & 1) == 0;
  v7 = a3;
  *(_OWORD *)SRWLock = 0LL;
  if ( !v6 )
    return v5;
  if ( (((unsigned __int16)(a2[16] ^ a2[18]) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    v21 = *(_QWORD *)(a1 + 8) ^ a1;
    LODWORD(a3) = (_DWORD)a2;
    v22 = 0;
    v23 = 18;
LABEL_28:
    RtlpLogHeapFailure(v23, v21, a3, v22, 0LL, 0LL);
    return v5;
  }
  v28 = v4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v4;
  if ( !BYTE6(v28) )
  {
    v21 = *(_QWORD *)(a1 + 8) ^ a1;
    v22 = a3 - 16;
    v23 = 8;
    goto LABEL_28;
  }
  v10 = *(_DWORD *)(a4 + 32);
  v11 = 0;
  v12 = v10 + 2;
  if ( *(_DWORD *)(a4 + 24) == v10 )
    v12 = *(_DWORD *)(a4 + 32);
  v13 = (*(_BYTE *)(a1 + 4) & 1) + 1 + ((unsigned int)(v12 + 15) >> 4);
  if ( WORD1(v28) <= v13 )
    v11 = v13 - WORD1(v28);
  v27 = v11;
  if ( !v11 )
  {
    v24 = 16 * WORD1(v28) - 16;
    if ( v24 == *(_DWORD *)(a4 + 24) )
      *(_DWORD *)(v4 + 8) &= ~0x100u;
    else
      RtlpHpVsChunkSetUnusedBytes(a3, v24, v24 - *(_DWORD *)(a4 + 24));
    return v7;
  }
  v14 = (_RTL_SRWLOCK *)(a1 + ((unsigned __int64)(unsigned __int16)a2[17] << 6));
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
  {
    SRWLock[1] = v14 + 1;
    RtlAcquireSRWLockExclusive(v14 + 1);
    v11 = v27;
  }
  v15 = v4 + 16LL * WORD1(v28);
  if ( v15 < (unsigned __int64)&a2[8 * (unsigned __int16)a2[16] + 24]
    && !(unsigned __int8)((v15 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v15) >> 48)
    && ((unsigned int)v15 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v15) >> 16 >= v11 )
  {
    v16 = RtlpHpVsChunkSplit(a1, v14, (__int64)a2, v15, v11, (__int64)SRWLock);
    if ( v16 )
    {
      v17 = WORD1(v28) + v16;
      *(_WORD *)(v4 + 2) = WORD1(v4) ^ WORD1(RtlpHpHeapGlobals) ^ v17;
      v18 = v4 + 16 * ((((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v4) >> 16) ^ (unsigned __int64)WORD1(v4));
      if ( v18 < (unsigned __int64)&a2[8 * (unsigned __int16)a2[16] + 24] )
        *(_WORD *)(v18 + 4) = WORD2(v18) ^ WORD2(RtlpHpHeapGlobals) ^ v17;
      v19 = *(_DWORD *)(v4 + 8);
      if ( *(_QWORD *)(a4 + 24) >= (unsigned __int64)(unsigned int)(16 * v17 - 16) )
      {
        *(_DWORD *)(v4 + 8) = v19 & 0xFFFFFEFF;
      }
      else
      {
        *(_DWORD *)(v4 + 8) = v19 | 0x100;
        RtlpHpVsChunkSetUnusedBytes(v7, 16 * v17 - 16, 16 * v17 - 16 - *(_DWORD *)(a4 + 24));
      }
      if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
        RtlReleaseSRWLockExclusive(SRWLock[1]);
      return v7;
    }
  }
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlReleaseSRWLockExclusive(SRWLock[1]);
  return v5;
}
