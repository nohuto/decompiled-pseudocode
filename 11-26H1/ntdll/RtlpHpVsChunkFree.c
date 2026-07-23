/*
 * XREFs of RtlpHpVsChunkFree @ 0x18008B490
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x18005EA34 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsSlotFreeInternal @ 0x1800E045C (RtlpHpVsSlotFreeInternal.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1800F8030 (RtlpHpVsSlotCompactChunks.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsChunkComputeCost @ 0x18008BBE4 (RtlpHpVsChunkComputeCost.c)
 *     RtlRbRemoveNode @ 0x18008BD00 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x18008CB50 (RtlRbInsertNodeEx.c)
 *     RtlpHpVsCommitLimitCheck @ 0x18008D2A0 (RtlpHpVsCommitLimitCheck.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1800E63DC (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1800EB658 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsChunkAlignSplit @ 0x180111930 (RtlpHpVsChunkAlignSplit.c)
 */

__int64 __fastcall RtlpHpVsChunkFree(
        unsigned __int64 a1,
        _RTL_RB_TREE *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  _RTL_RB_TREE *v8; // r8
  unsigned __int64 v9; // r14
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned int v12; // r15d
  unsigned __int64 v13; // rdx
  __int64 v14; // r12
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
  _RTL_RB_TREE *v27; // r13
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rax
  __int64 v30; // r8
  __int16 v31; // ax
  int v32; // edx
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  int v35; // r8d
  unsigned int v36; // r8d
  __int64 Root; // rdx
  BOOLEAN v38; // al
  unsigned __int64 v39; // rax
  unsigned __int64 v41; // r12
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  int v44; // eax
  __int64 v45; // r8
  int v46; // edx
  __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  __int64 v49; // rax
  _RTL_BALANCED_NODE *v50; // rcx
  char v51; // cl
  unsigned __int64 v52; // r12
  unsigned __int64 v53; // [rsp+30h] [rbp-48h] BYREF
  char v54[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v55; // [rsp+80h] [rbp+8h] BYREF
  _RTL_RB_TREE *v56; // [rsp+88h] [rbp+10h]
  unsigned __int64 v57; // [rsp+90h] [rbp+18h] BYREF
  int v58; // [rsp+98h] [rbp+20h]

  v56 = a2;
  LODWORD(v57) = 0;
  v8 = a2;
  v9 = a1;
  while ( 1 )
  {
    v10 = a3 + 48;
    v11 = a4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a4;
    v58 = WORD1(v11);
    v12 = WORD1(v11);
    v13 = HIDWORD(v11);
    v55 = a4 ^ RtlpHpHeapGlobals;
    *(_BYTE *)(a4 + 6) = (a4 ^ (unsigned __int64)RtlpHpHeapGlobals) >> 48;
    if ( (_WORD)v13 )
    {
      v14 = a4 - 16LL * (unsigned __int16)v13;
      v15 = RtlpHpHeapGlobals ^ *(_QWORD *)v14 ^ v14;
      a1 = HIWORD(v15);
      v16 = v15 >> 16;
      if ( !(_BYTE)a1 )
      {
        LODWORD(v55) = 0;
        RtlRbRemoveNode(v8 + 1, (PRTL_BALANCED_NODE)(v14 + 8));
        v17 = RtlpHpVsChunkComputeCost(v14, a3, &v55, &v53);
        v18 = *(__int16 *)(v9 + 6);
        v19 = ((unsigned __int16)RtlpHpHeapGlobals ^ (unsigned __int16)*(_QWORD *)v14 ^ (unsigned __int16)v14)
            - v17
            - v55;
        a1 = v19;
        if ( (_WORD)v18 )
          _InterlockedAdd64((volatile signed __int64 *)(v18 + v9 + 32), v19);
        else
          *(_QWORD *)(v9 + 96) += v19;
        v8 = v56;
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
        LODWORD(v55) = 0;
        RtlRbRemoveNode(v8 + 1, (PRTL_BALANCED_NODE)(v20 + 8));
        v24 = RtlpHpVsChunkComputeCost(a4 + 16LL * v12, a3, &v55, &v53);
        v25 = *(__int16 *)(v9 + 6);
        v26 = ((unsigned __int16)RtlpHpHeapGlobals ^ (unsigned __int16)v20 ^ (unsigned __int16)*(_QWORD *)v20)
            - v24
            - v55;
        a1 = v26;
        if ( (_WORD)v25 )
          _InterlockedAdd64((volatile signed __int64 *)(v25 + v9 + 32), v26);
        else
          *(_QWORD *)(v9 + 96) += v26;
        v10 = a3 + 48;
        v12 += (unsigned __int16)v23;
      }
    }
    v27 = v56;
    if ( (*(_BYTE *)(v9 + 4) & 1) != 0 )
    {
      v41 = a4 + 16LL * v12;
      if ( v41 < v10 + 16 * (unsigned __int64)*(unsigned __int16 *)(a3 + 32) )
      {
        v42 = v41 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v41;
        v43 = HIWORD(v42);
        a1 = v42 >> 16;
        v53 = a1;
        if ( !(_BYTE)v43 )
        {
          LODWORD(v55) = 0;
          RtlRbRemoveNode(v56 + 1, (PRTL_BALANCED_NODE)(v41 + 8));
          v44 = RtlpHpVsChunkComputeCost(a4 + 16LL * v12, a3, &v55, v54);
          v45 = *(__int16 *)(v9 + 6);
          v46 = ((unsigned __int16)RtlpHpHeapGlobals ^ (unsigned __int16)*(_QWORD *)v41 ^ (unsigned __int16)v41)
              - v44
              - v55;
          a1 = v46;
          if ( (_WORD)v45 )
            _InterlockedAdd64((volatile signed __int64 *)(v45 + v9 + 32), v46);
          else
            *(_QWORD *)(v9 + 96) += v46;
          v12 += (unsigned __int16)v53;
        }
      }
    }
    if ( v58 != v12 )
    {
      LOWORD(v55) = 0;
      WORD1(v55) = v12;
      v55 = a4 ^ RtlpHpHeapGlobals ^ (unsigned int)v55;
      *(_WORD *)(a4 + 2) = WORD1(v55);
      a1 = a4 + 16LL * v12;
      if ( a1 < a3 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(a3 + 32) )
      {
        v55 = 0LL;
        WORD2(v55) = v12;
        v55 ^= a1 ^ RtlpHpHeapGlobals;
        *(_WORD *)(a1 + 4) = WORD2(v55);
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
    if ( v12 <= (unsigned int)v57 )
      goto LABEL_22;
    LODWORD(v55) = 0;
    v57 = 0LL;
    RtlpHpVsChunkComputeCost(a4, a3, &v55, &v57);
    if ( !(_DWORD)v55 )
      goto LABEL_22;
    v28 = v57;
    if ( !v57 )
      goto LABEL_22;
    v29 = __popcnt(v57);
    v57 = v29;
    if ( (a5 & 1) == 0 && !(unsigned int)RtlpHpVsCommitLimitCheck(v9, a3, (unsigned int)v29) )
      break;
    v55 = a4 ^ RtlpHpHeapGlobals ^ 0x1000000000000LL;
    *(_BYTE *)(a4 + 6) = BYTE6(v55);
    *(_DWORD *)(a4 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ a4 ^ ((unsigned int)(a4 - a3) >> 12)) | 0x200;
    if ( (*(_BYTE *)(v9 + 5) & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a6 + 8));
      *(_QWORD *)(a6 + 8) = 0LL;
    }
    RtlpHpVsSubsegmentCommitPages(v9, a3, v28, v57, 0);
    if ( (*(_BYTE *)(v9 + 5) & 1) == 0 )
    {
      *(_QWORD *)(a6 + 8) = &v27->8;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v27->8);
    }
    *(_DWORD *)(a4 + 8) &= ~0x200u;
    v8 = v56;
    LODWORD(v57) = v12;
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
        LODWORD(v55) = 0;
        v52 = v28 >> v51;
        _BitScanForward64(&a1, ~v52);
        v28 = v52 >> v51;
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
  LODWORD(v55) = 0;
  v57 = 0LL;
  v31 = RtlpHpVsChunkComputeCost(a4, a3, &v55, &v57);
  v32 = __popcnt(v57);
  v33 = *(__int16 *)(v9 + 6);
  if ( (_WORD)v33 )
    _InterlockedAdd64((volatile signed __int64 *)(v33 + v9 + 32), v32);
  else
    *(_QWORD *)(v9 + 96) += v32;
  v57 = (unsigned __int16)(v55 + v31 - v32);
  v34 = a4 ^ RtlpHpHeapGlobals ^ v57;
  *(_WORD *)a4 = v34;
  v35 = a4 ^ *(_QWORD *)a4;
  v57 = v34;
  v36 = RtlpHpHeapGlobals ^ v35;
  if ( ((__int64)v27[1].Min & 1) == 0 )
  {
    Root = (__int64)v27[1].Root;
    goto LABEL_27;
  }
  v50 = v27[1].Root;
  if ( v50 )
  {
    Root = (unsigned __int64)v50 ^ (unsigned __int64)&v27[1];
LABEL_27:
    v38 = 0;
    if ( !Root )
      goto LABEL_37;
    while ( 1 )
    {
      if ( v36 >= ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)*(_QWORD *)(Root - 8) ^ ((_DWORD)Root - 8)) )
      {
        v39 = *(_QWORD *)(Root + 8);
        if ( ((__int64)v27[1].Min & 1) != 0 )
        {
          if ( !v39 )
          {
LABEL_36:
            v38 = 1;
            goto LABEL_37;
          }
          v39 ^= Root;
        }
        if ( !v39 )
          goto LABEL_36;
      }
      else
      {
        v39 = *(_QWORD *)Root;
        if ( ((__int64)v27[1].Min & 1) != 0 )
        {
          if ( !v39 )
            goto LABEL_44;
          v39 ^= Root;
        }
        if ( !v39 )
          goto LABEL_44;
      }
      Root = v39;
    }
  }
  Root = 0LL;
LABEL_44:
  v38 = 0;
LABEL_37:
  RtlRbInsertNodeEx(v27 + 1, (PRTL_BALANCED_NODE)Root, v38, (PRTL_BALANCED_NODE)(a4 + 8));
  return 0LL;
}
