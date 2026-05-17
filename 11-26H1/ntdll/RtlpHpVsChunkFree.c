/*
 * XREFs of RtlpHpVsChunkFree @ 0x18006B040
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x180013304 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsSlotFreeInternal @ 0x18008EA34 (RtlpHpVsSlotFreeInternal.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1800F8860 (RtlpHpVsSlotCompactChunks.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsChunkComputeCost @ 0x18006B794 (RtlpHpVsChunkComputeCost.c)
 *     RtlRbRemoveNode @ 0x18006B8B0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x18006C700 (RtlRbInsertNodeEx.c)
 *     RtlpHpVsCommitLimitCheck @ 0x18006CE50 (RtlpHpVsCommitLimitCheck.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1800E797C (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1800EC488 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsChunkAlignSplit @ 0x180111E80 (RtlpHpVsChunkAlignSplit.c)
 */

__int64 __fastcall RtlpHpVsChunkFree(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5,
        __int64 a6)
{
  __int64 v8; // r8
  unsigned __int64 v9; // r14
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned int v12; // r15d
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r13
  int v17; // eax
  __int64 v18; // r8
  int v19; // edx
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r13
  int v24; // eax
  __int64 v25; // r8
  int v26; // edx
  __int64 v27; // r13
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rax
  __int64 v30; // r8
  __int16 v31; // ax
  int v32; // edx
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  int v35; // r8d
  unsigned int v36; // r8d
  __int64 v37; // rdx
  unsigned __int8 v38; // al
  __int64 v39; // rax
  unsigned __int64 v41; // r12
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  int v44; // eax
  __int64 v45; // r8
  int v46; // edx
  __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  char v52; // cl
  unsigned __int64 v53; // r12
  unsigned __int64 v54; // [rsp+30h] [rbp-48h] BYREF
  char v55[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v56; // [rsp+80h] [rbp+8h] BYREF
  __int64 v57; // [rsp+88h] [rbp+10h]
  unsigned __int64 v58; // [rsp+90h] [rbp+18h] BYREF
  int v59; // [rsp+98h] [rbp+20h]

  v57 = a2;
  LODWORD(v58) = 0;
  v8 = a2;
  v9 = a1;
  while ( 1 )
  {
    v10 = a3 + 48;
    v11 = a4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a4;
    v59 = WORD1(v11);
    v12 = WORD1(v11);
    v13 = HIDWORD(v11);
    v56 = a4 ^ RtlpHpHeapGlobals;
    *(_BYTE *)(a4 + 6) = (a4 ^ RtlpHpHeapGlobals) >> 48;
    if ( (_WORD)v13 )
    {
      v14 = a4 - 16LL * (unsigned __int16)v13;
      v15 = RtlpHpHeapGlobals ^ *(_QWORD *)v14 ^ v14;
      a1 = HIWORD(v15);
      v16 = v15 >> 16;
      if ( !(_BYTE)a1 )
      {
        LODWORD(v56) = 0;
        RtlRbRemoveNode(v8 + 16, v14 + 8);
        v17 = RtlpHpVsChunkComputeCost(v14, a3, &v56, &v54);
        v18 = *(__int16 *)(v9 + 6);
        v19 = ((unsigned __int16)RtlpHpHeapGlobals ^ (unsigned __int16)*(_QWORD *)v14 ^ (unsigned __int16)v14)
            - v17
            - v56;
        a1 = v19;
        if ( (_WORD)v18 )
          _InterlockedAdd64((volatile signed __int64 *)(v18 + v9 + 32), v19);
        else
          *(_QWORD *)(v9 + 96) += v19;
        v8 = v57;
        v10 = a3 + 48;
        a4 = v14;
        v12 += (unsigned __int16)v16;
      }
    }
    v20 = a4 + 16LL * v12;
    if ( v20 < v10 + 16 * (unsigned __int64)*(unsigned __int16 *)(a3 + 32) )
    {
      v21 = v20 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v20;
      v22 = HIWORD(v21);
      v23 = v21 >> 16;
      if ( !(_BYTE)v22 )
      {
        LODWORD(v56) = 0;
        RtlRbRemoveNode(v8 + 16, v20 + 8);
        v24 = RtlpHpVsChunkComputeCost(a4 + 16LL * v12, a3, &v56, &v54);
        v25 = *(__int16 *)(v9 + 6);
        v26 = ((unsigned __int16)RtlpHpHeapGlobals ^ (unsigned __int16)v20 ^ (unsigned __int16)*(_QWORD *)v20)
            - v24
            - v56;
        a1 = v26;
        if ( (_WORD)v25 )
          _InterlockedAdd64((volatile signed __int64 *)(v25 + v9 + 32), v26);
        else
          *(_QWORD *)(v9 + 96) += v26;
        v10 = a3 + 48;
        v12 += (unsigned __int16)v23;
      }
    }
    v27 = v57;
    if ( (*(_BYTE *)(v9 + 4) & 1) != 0 )
    {
      v41 = a4 + 16LL * v12;
      if ( v41 < v10 + 16 * (unsigned __int64)*(unsigned __int16 *)(a3 + 32) )
      {
        v42 = v41 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v41;
        v43 = HIWORD(v42);
        a1 = v42 >> 16;
        v54 = a1;
        if ( !(_BYTE)v43 )
        {
          LODWORD(v56) = 0;
          RtlRbRemoveNode(v57 + 16, v41 + 8);
          v44 = RtlpHpVsChunkComputeCost(a4 + 16LL * v12, a3, &v56, v55);
          v45 = *(__int16 *)(v9 + 6);
          v46 = ((unsigned __int16)RtlpHpHeapGlobals ^ (unsigned __int16)*(_QWORD *)v41 ^ (unsigned __int16)v41)
              - v44
              - v56;
          a1 = v46;
          if ( (_WORD)v45 )
            _InterlockedAdd64((volatile signed __int64 *)(v45 + v9 + 32), v46);
          else
            *(_QWORD *)(v9 + 96) += v46;
          v12 += (unsigned __int16)v54;
        }
      }
    }
    if ( v59 != v12 )
    {
      LOWORD(v56) = 0;
      WORD1(v56) = v12;
      v56 = a4 ^ RtlpHpHeapGlobals ^ (unsigned int)v56;
      *(_WORD *)(a4 + 2) = WORD1(v56);
      a1 = a4 + 16LL * v12;
      if ( a1 < a3 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(a3 + 32) )
      {
        v56 = 0LL;
        WORD2(v56) = v12;
        v56 ^= a1 ^ RtlpHpHeapGlobals;
        *(_WORD *)(a1 + 4) = WORD2(v56);
      }
    }
    if ( v12 == *(unsigned __int16 *)(a3 + 32) )
    {
      v47 = *(_QWORD *)a3 ^ a3;
      v48 = *(_QWORD *)(a3 + 8) ^ a3;
      if ( (*(_QWORD *)(v47 + 8) ^ v47) != a3 || (*(_QWORD *)v48 ^ v48) != a3 )
        __fastfail(3u);
      *(_QWORD *)v48 = v47 ^ v48;
      *(_QWORD *)(v47 + 8) = v47 ^ v48;
      _InterlockedAdd64((volatile signed __int64 *)(v9 + 88), (int)-(__int64)__popcnt(*(_QWORD *)(a3 + 16)));
      return a3;
    }
    if ( v12 <= (unsigned int)v58 )
      goto LABEL_22;
    LODWORD(v56) = 0;
    v58 = 0LL;
    RtlpHpVsChunkComputeCost(a4, a3, &v56, &v58);
    if ( !(_DWORD)v56 )
      goto LABEL_22;
    v28 = v58;
    if ( !v58 )
      goto LABEL_22;
    v29 = __popcnt(v58);
    v58 = v29;
    if ( (a5 & 1) == 0 && !(unsigned int)RtlpHpVsCommitLimitCheck(v9, a3, (unsigned int)v29) )
      break;
    v56 = a4 ^ RtlpHpHeapGlobals ^ 0x1000000000000LL;
    *(_BYTE *)(a4 + 6) = BYTE6(v56);
    *(_DWORD *)(a4 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ a4 ^ ((unsigned int)(a4 - a3) >> 12)) | 0x200;
    if ( (*(_BYTE *)(v9 + 5) & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(a6 + 8));
      *(_QWORD *)(a6 + 8) = 0LL;
    }
    RtlpHpVsSubsegmentCommitPages(v9, a3, v28, v58, 0);
    if ( (*(_BYTE *)(v9 + 5) & 1) == 0 )
    {
      *(_QWORD *)(a6 + 8) = v27 + 8;
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v27 + 8), v51);
    }
    *(_DWORD *)(a4 + 8) &= ~0x200u;
    v8 = v57;
    LODWORD(v58) = v12;
  }
  if ( *(_WORD *)(v9 + 6) )
  {
    v30 = *(_QWORD *)(*(_QWORD *)(v9 + 8) ^ v9) & a3;
    a1 = *(unsigned __int8 *)((*(_QWORD *)(v9 + 8) ^ v9) + 8);
    if ( (*(_BYTE *)(32 * ((unsigned int)(a3 - v30) >> a1) + v30 + 8) & 4) != 0 )
    {
      do
      {
        _BitScanForward64(&a1, v28);
        LODWORD(v56) = 0;
        v53 = v28 >> v52;
        _BitScanForward64(&a1, ~v53);
        v28 = v53 >> v52;
      }
      while ( v28 );
    }
  }
LABEL_22:
  if ( (*(_BYTE *)(v9 + 4) & 1) != 0 && ((a4 + 32) & 0xFFF) != 0 )
  {
    v49 = RtlpHpVsChunkAlignSplit(a1, a3, a4);
    if ( v49 )
      RtlpHpVsFreeChunkInsert(v9, v27, a3, v49);
  }
  LODWORD(v56) = 0;
  v58 = 0LL;
  v31 = RtlpHpVsChunkComputeCost(a4, a3, &v56, &v58);
  v32 = __popcnt(v58);
  v33 = *(__int16 *)(v9 + 6);
  if ( (_WORD)v33 )
    _InterlockedAdd64((volatile signed __int64 *)(v33 + v9 + 32), v32);
  else
    *(_QWORD *)(v9 + 96) += v32;
  v58 = (unsigned __int16)(v56 + v31 - v32);
  v34 = a4 ^ RtlpHpHeapGlobals ^ v58;
  *(_WORD *)a4 = v34;
  v35 = a4 ^ *(_QWORD *)a4;
  v58 = v34;
  v36 = RtlpHpHeapGlobals ^ v35;
  if ( (*(_QWORD *)(v27 + 24) & 1) == 0 )
  {
    v37 = *(_QWORD *)(v27 + 16);
    goto LABEL_27;
  }
  v50 = *(_QWORD *)(v27 + 16);
  if ( v50 )
  {
    v37 = v50 ^ (v27 + 16);
LABEL_27:
    v38 = 0;
    if ( !v37 )
      goto LABEL_37;
    while ( 1 )
    {
      if ( v36 >= ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)*(_QWORD *)(v37 - 8) ^ ((_DWORD)v37 - 8)) )
      {
        v39 = *(_QWORD *)(v37 + 8);
        if ( (*(_QWORD *)(v27 + 24) & 1) != 0 )
        {
          if ( !v39 )
          {
LABEL_36:
            v38 = 1;
            goto LABEL_37;
          }
          v39 ^= v37;
        }
        if ( !v39 )
          goto LABEL_36;
      }
      else
      {
        v39 = *(_QWORD *)v37;
        if ( (*(_QWORD *)(v27 + 24) & 1) != 0 )
        {
          if ( !v39 )
            goto LABEL_44;
          v39 ^= v37;
        }
        if ( !v39 )
          goto LABEL_44;
      }
      v37 = v39;
    }
  }
  v37 = 0LL;
LABEL_44:
  v38 = 0;
LABEL_37:
  RtlRbInsertNodeEx(v27 + 16, v37, v38, a4 + 8);
  return 0LL;
}
