/*
 * XREFs of RtlpHpVsSlotCompactChunks @ 0x1800F8030
 * Callers:
 *     RtlpHpVsContextCompact @ 0x180061C90 (RtlpHpVsContextCompact.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsChunkFree @ 0x18008B490 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsChunkComputeCost @ 0x18008BBE4 (RtlpHpVsChunkComputeCost.c)
 *     RtlpHpVsSubsegmentFree @ 0x1800E0704 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1800EC12C (RtlpHpVsFreeChunkRemove.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

__int64 *__fastcall RtlpHpVsSlotCompactChunks(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 *v4; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  int v10; // eax
  int v11; // ecx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r12
  __int64 *v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // r9d
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 *result; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v32; // [rsp+38h] [rbp-50h]
  PRTL_SRWLOCK SRWLock[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v34; // [rsp+50h] [rbp-38h]
  __int64 v35; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v36; // [rsp+98h] [rbp+10h] BYREF

  v15 = (*(_BYTE *)(a1 + 5) & 1) == 0;
  *(_OWORD *)SRWLock = 0LL;
  v34 = 0LL;
  v32 = &v31;
  v31 = (__int64)&v31;
  if ( v15 )
  {
    SRWLock[1] = (PRTL_SRWLOCK)(a2 + 8);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 8));
  }
  v4 = (unsigned __int64 *)(a2 + 16);
  v5 = 0LL;
  v6 = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)(a2 + 24) & 1) == 0 )
  {
LABEL_6:
    while ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 8);
      v5 = v6;
      if ( (*(_BYTE *)(a2 + 24) & 1) != 0 && v7 )
        v6 ^= v7;
      else
        v6 = *(_QWORD *)(v6 + 8);
    }
LABEL_80:
    if ( !v5 )
      goto LABEL_83;
    while ( 1 )
    {
      v8 = v5 - 8;
      v9 = v5 - 8;
      if ( BYTE6(RtlpHpHeapGlobals) ^ (unsigned __int8)(((v5 - 8) >> 48) ^ HIWORD(*(_QWORD *)(v5 - 8))) )
        break;
      if ( WORD2(v8) ^ (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v8)) )
      {
        v9 -= 16 * (WORD2(RtlpHpHeapGlobals) ^ (unsigned __int64)(unsigned __int16)(WORD2(v8) ^ HIDWORD(*(_QWORD *)v8)));
        if ( BYTE6(RtlpHpHeapGlobals) ^ (unsigned __int8)(HIWORD(*(_QWORD *)v9) ^ BYTE6(v9)) )
        {
          v10 = *(_DWORD *)(v9 + 8) ^ v9;
          goto LABEL_18;
        }
        if ( WORD2(v9) ^ (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v9)) )
        {
          v9 -= 16
              * (WORD2(RtlpHpHeapGlobals) ^ (unsigned __int64)(unsigned __int16)(WORD2(v9) ^ HIDWORD(*(_QWORD *)v9)));
          v10 = RtlpHpHeapGlobals ^ *(_DWORD *)(v9 + 8) ^ v9;
          goto LABEL_19;
        }
      }
      v11 = 0;
LABEL_23:
      v12 = (v9 - (unsigned int)(v11 << 12)) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned __int8)((v8 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v8) >> 48)
        || (((unsigned __int16)(*(_WORD *)(v12 + 32) ^ *(_WORD *)(v12 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
      {
        RtlpLogHeapFailure(18, *(_DWORD *)(a1 + 8) ^ a1, v12, v5 - 8, 0LL, 0LL);
        goto LABEL_83;
      }
      if ( 16 * (((unsigned int)v8 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v8) >> 16) < 0x1000 )
        goto LABEL_83;
      v36 = 0LL;
      RtlpHpVsChunkComputeCost(v5 - 8, v12, (unsigned int *)&v35, &v36);
      if ( !v36 )
      {
        v13 = v5;
        v14 = *(_QWORD *)v5;
        if ( *(_QWORD *)v5 )
        {
          v15 = (*(_BYTE *)(a1 + 5) & 1) == 0;
LABEL_31:
          if ( !v15 )
          {
            v5 ^= v14;
            goto LABEL_34;
          }
          while ( 1 )
          {
            v5 = v14;
LABEL_34:
            if ( !*(_QWORD *)(v5 + 8) )
              break;
            v14 = *(_QWORD *)(v5 + 8);
            if ( (*(_BYTE *)(a1 + 5) & 1) != 0 )
            {
              v15 = v14 == 0;
              goto LABEL_31;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v17 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( (*(_BYTE *)(a1 + 5) & 1) != 0 && v17 )
              v5 ^= v17;
            else
              v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v5 )
              break;
            v16 = *(_QWORD *)(v5 + 8);
            if ( (*(_BYTE *)(a1 + 5) & 1) != 0 && v16 )
              v16 ^= v5;
            if ( v16 == v13 )
              break;
            v13 = v5;
          }
        }
        goto LABEL_80;
      }
      v18 = v8 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v8;
      RtlpHpVsFreeChunkRemove(a1, (_RTL_RB_TREE *)a2, v12, v5 - 8);
      v35 = 0x1000000000000LL;
      *(_BYTE *)(v8 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v8) ^ 1;
      *(_DWORD *)v5 = (unsigned __int8)(RtlpHpHeapGlobals ^ v8 ^ ((unsigned int)(v8 - v12) >> 12));
      v19 = (__int64 *)RtlpHpVsChunkFree(a1, (_RTL_RB_TREE *)a2, v12, v5 - 8, 1, (__int64)SRWLock);
      if ( v19 )
      {
        v20 = v32;
        if ( (__int64 *)*v32 != &v31 )
          __fastfail(3u);
        v19[1] = (__int64)v32;
        *v19 = (__int64)&v31;
        *v20 = (__int64)v19;
        v32 = v19;
      }
      if ( *(_WORD *)(a1 + 6) )
        v21 = *(_QWORD *)(*(__int16 *)(a1 + 6) + a1 + 32);
      else
        v21 = *(_QWORD *)(a1 + 96);
      if ( !v21 )
        goto LABEL_83;
      v22 = v18 + 1;
      v5 = *v4;
      if ( (*(_BYTE *)(a2 + 24) & 1) != 0 )
      {
        if ( v5 )
          v5 ^= (unsigned __int64)v4;
        else
          v5 = 0LL;
      }
      v23 = 0LL;
      while ( v5 )
      {
        v24 = RtlpHpHeapGlobals ^ (v5 - 8) ^ *(_QWORD *)(v5 - 8);
        if ( v22 >= (unsigned int)v24 )
        {
          if ( v22 <= (unsigned int)v24 )
            goto LABEL_70;
          v25 = *(_QWORD *)(v5 + 8);
        }
        else
        {
          v25 = *(_QWORD *)v5;
          v23 = v5;
        }
        if ( (*(_BYTE *)(a2 + 24) & 1) != 0 && v25 )
          v5 ^= v25;
        else
          v5 = v25;
      }
      v5 = v23;
LABEL_70:
      if ( !v5 )
      {
        v5 = 0LL;
        v26 = *v4;
        if ( (*(_BYTE *)(a2 + 24) & 1) != 0 )
        {
          if ( !v26 )
            goto LABEL_80;
          v26 ^= (unsigned __int64)v4;
        }
        while ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 8);
          v5 = v26;
          if ( (*(_BYTE *)(a2 + 24) & 1) != 0 && v27 )
            v26 ^= v27;
          else
            v26 = *(_QWORD *)(v26 + 8);
        }
        goto LABEL_80;
      }
    }
    v10 = *(_DWORD *)v5 ^ v8;
LABEL_18:
    LOBYTE(v10) = RtlpHpHeapGlobals ^ v10;
LABEL_19:
    v11 = (unsigned __int8)v10;
    goto LABEL_23;
  }
  if ( v6 )
  {
    v6 ^= (unsigned __int64)v4;
    goto LABEL_6;
  }
LABEL_83:
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlReleaseSRWLockExclusive(SRWLock[1]);
  while ( 1 )
  {
    v28 = v31;
    result = &v31;
    if ( (__int64 *)v31 == &v31 )
      break;
    if ( *(__int64 **)(v31 + 8) != &v31 || (v30 = *(_QWORD *)v31, *(_QWORD *)(*(_QWORD *)v31 + 8LL) != v31) )
      __fastfail(3u);
    v31 = *(_QWORD *)v31;
    *(_QWORD *)(v30 + 8) = &v31;
    RtlpHpVsSubsegmentFree(a1, v28);
  }
  return result;
}
