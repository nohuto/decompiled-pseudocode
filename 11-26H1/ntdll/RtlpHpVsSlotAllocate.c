/*
 * XREFs of RtlpHpVsSlotAllocate @ 0x18005E538
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x18005E3D4 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsSlotAddSubsegment @ 0x18005E810 (RtlpHpVsSlotAddSubsegment.c)
 *     RtlpHpVsSubsegmentCreate @ 0x18005E8D4 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpVsChunkSplit @ 0x18005EA34 (RtlpHpVsChunkSplit.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

_QWORD *__fastcall RtlpHpVsSlotAllocate(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r15
  unsigned int v6; // r10d
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  _DWORD *v12; // r9
  __int64 v13; // r8
  __int64 v14; // rax
  _QWORD *v15; // rdi
  _DWORD *v16; // r8
  int v17; // eax
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // ecx
  unsigned __int64 v21; // r8

  v5 = a2 + 16;
  v6 = a4;
  v10 = 0LL;
  while ( 2 )
  {
    v11 = *(_QWORD *)v5;
    if ( (*(_BYTE *)(a2 + 24) & 1) != 0 )
    {
      if ( v11 )
        v11 ^= v5;
      else
        v11 = 0LL;
    }
    v12 = 0LL;
    v13 = *(_BYTE *)(v5 + 8) & 1;
    while ( v11 )
    {
      v14 = RtlpHpHeapGlobals ^ *(_QWORD *)(v11 - 8) ^ (v11 - 8);
      if ( v6 < (unsigned int)v14 )
      {
        v18 = *(_QWORD *)v11;
        v12 = (_DWORD *)v11;
      }
      else
      {
        if ( v6 <= (unsigned int)v14 )
        {
          v12 = (_DWORD *)v11;
          goto LABEL_8;
        }
        v18 = *(_QWORD *)(v11 + 8);
      }
      if ( (*(_BYTE *)(v5 + 8) & 1) != 0 && v18 )
        v11 ^= v18;
      else
        v11 = v18;
    }
    if ( v12 )
    {
LABEL_8:
      v15 = v12 - 2;
      v16 = v12 - 2;
      if ( !(BYTE6(RtlpHpHeapGlobals) ^ (unsigned __int8)(HIWORD(*((_QWORD *)v12 - 1)) ^ ((unsigned __int64)(v12 - 2) >> 48))) )
      {
        if ( WORD2(v15) ^ (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ HIDWORD(*v15)) )
        {
          v16 -= 4
               * (WORD2(v15) ^ (unsigned __int64)(unsigned __int16)(((unsigned __int64)RtlpHpHeapGlobals ^ *v15) >> 32));
          if ( BYTE6(RtlpHpHeapGlobals) ^ (unsigned __int8)(HIWORD(*(_QWORD *)v16) ^ BYTE6(v16)) )
          {
            v17 = RtlpHpHeapGlobals ^ v16[2] ^ (unsigned int)v16;
LABEL_26:
            v20 = (unsigned __int8)v17;
LABEL_27:
            v21 = ((unsigned __int64)v16 - (unsigned int)(v20 << 12)) & 0xFFFFFFFFFFFFF000uLL;
            if ( (((unsigned __int16)(*(_WORD *)(v21 + 32) ^ *(_WORD *)(v21 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
            {
              RtlpLogHeapFailure(18, *(_DWORD *)(a1 + 8) ^ a1, v21, (_DWORD)v12 - 8, 0LL, 0LL);
            }
            else
            {
              if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((unsigned __int64)(v15 + 4) & 0xFFF) != 0 )
                --a3;
              if ( (unsigned int)RtlpHpVsChunkSplit(a1, a2, v21, (int)v12 - 8, a3, a5) )
                return v15;
            }
            if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
            {
              RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a5 + 8));
              *(_QWORD *)(a5 + 8) = 0LL;
            }
            return (_QWORD *)v10;
          }
          if ( WORD2(v16) ^ (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v16)) )
          {
            v16 -= 4
                 * (WORD2(RtlpHpHeapGlobals) ^ (unsigned __int64)(unsigned __int16)(WORD2(v16) ^ HIDWORD(*(_QWORD *)v16)));
            v17 = RtlpHpHeapGlobals ^ v16[2] ^ (unsigned int)v16;
            goto LABEL_26;
          }
        }
        v20 = 0;
        goto LABEL_27;
      }
      v17 = *v12 ^ RtlpHpHeapGlobals ^ (unsigned int)v15;
      goto LABEL_26;
    }
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a5 + 8));
      *(_QWORD *)(a5 + 8) = 0LL;
    }
    v19 = RtlpHpVsSubsegmentCreate(a1, a3, v13);
    if ( v19 )
    {
      if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      {
        *(_QWORD *)(a5 + 8) = a2 + 8;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 8));
      }
      RtlpHpVsSlotAddSubsegment(a1, a2, v19);
      v6 = a4;
      continue;
    }
    return (_QWORD *)v10;
  }
}
