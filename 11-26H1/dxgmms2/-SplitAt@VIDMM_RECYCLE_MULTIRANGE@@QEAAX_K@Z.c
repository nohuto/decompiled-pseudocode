/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1400EDFB0
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE_FLAGS@@@Z @ 0x1400ACA7C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE.c)
 * Callees:
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400EDEF0 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400EFE10 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1400EFF20 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::SplitAt(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2)
{
  VIDMM_RECYCLE_RANGE *v3; // rbx
  unsigned __int64 v4; // r15
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rdx
  VIDMM_RECYCLE_RANGE *v8; // r12
  __int64 v9; // rcx
  __int64 v10; // r13
  struct _LOOKASIDE_LIST_EX *v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rax
  ULONGLONG v16; // rcx
  CCHAR LeastSignificantBit; // al
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rdx
  int v21; // edx
  int v22; // edx
  __int64 v23; // r14
  __int64 v24; // r8
  __int64 v25; // rcx
  struct _RTL_BALANCED_NODE *v26; // rbx
  __int64 v27; // rax
  struct _RTL_BALANCED_NODE *v28; // rax
  __int64 v29; // r14
  __int64 v30; // r8
  __int64 v31; // rcx
  struct _RTL_BALANCED_NODE *v32; // rbx
  __int64 v33; // rax
  struct _RTL_BALANCED_NODE *v34; // rax
  __int64 v35; // r14
  __int64 v36; // r8
  __int64 v37; // rcx
  struct _RTL_BALANCED_NODE *v38; // rbx
  __int64 v39; // rax
  struct _RTL_BALANCED_NODE *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // [rsp+20h] [rbp-20h] BYREF
  __int64 v50; // [rsp+28h] [rbp-18h]
  char v51; // [rsp+30h] [rbp-10h]
  int v52; // [rsp+80h] [rbp+40h] BYREF
  __int64 v53; // [rsp+88h] [rbp+48h]
  __int64 v54; // [rsp+90h] [rbp+50h]

  v3 = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  v4 = a2 + *((_QWORD *)this + 4);
  v5 = 0;
  while ( v3 && (*((_QWORD *)v3 + 4) > v4 || *((_QWORD *)v3 + 5) <= v4) )
  {
    v42 = *((_QWORD *)v3 + 15);
    v43 = *((_QWORD *)v3 + 9);
    v3 = 0LL;
    if ( v42 != v43 + 72 )
      v3 = (VIDMM_RECYCLE_RANGE *)(v42 - 120);
  }
  v6 = *((_QWORD *)v3 + 4);
  if ( v6 == v4 )
  {
    v41 = *((_QWORD *)v3 + 16);
    v8 = 0LL;
    if ( v41 != *((_QWORD *)v3 + 9) + 72LL )
      v8 = (VIDMM_RECYCLE_RANGE *)(v41 - 120);
  }
  else
  {
    LOBYTE(v52) = 1;
    VIDMM_RECYCLE_RANGE::SplitAt(v3, v4 - v6, (bool *)&v52);
    if ( !(_BYTE)v52 )
    {
      WdLogSingleEntry2(
        3LL,
        this,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL) + 16LL));
      WdLogGlobalForLineNumber = 4533;
      return;
    }
    if ( v3 == *((VIDMM_RECYCLE_RANGE **)this + 9) && *((_QWORD *)v3 + 5) != *((_QWORD *)this + 5) )
    {
      v47 = *((_QWORD *)v3 + 15);
      v48 = 0LL;
      if ( v47 != *((_QWORD *)v3 + 9) + 72LL )
        v48 = v47 - 120;
      *((_QWORD *)this + 9) = v48;
    }
    v7 = *((_QWORD *)v3 + 15);
    v8 = v3;
    v9 = *((_QWORD *)v3 + 9);
    v3 = 0LL;
    if ( v7 != v9 + 72 )
      v3 = (VIDMM_RECYCLE_RANGE *)(v7 - 120);
  }
  v53 = *((_QWORD *)this + 10);
  v10 = *(_QWORD *)(*(_QWORD *)(v53 + 32) + 8LL);
  v54 = *((_QWORD *)this + 5);
  v11 = *(struct _LOOKASIDE_LIST_EX **)(v10 + 1320);
  v52 = *((_DWORD *)this + 42);
  v12 = *(_DWORD *)(v10 + 1620);
  if ( v12 )
  {
    v13 = (unsigned int)(v12 - 1);
    v14 = *(_QWORD **)(v10 + 8 * v13 + 1656);
    *(_QWORD *)(v10 + 8 * v13 + 1656) = 0LL;
    --*(_DWORD *)(v10 + 1620);
  }
  else
  {
    v14 = ExAllocateFromLookasideListEx(v11);
  }
  if ( v14 )
  {
    ++*(_DWORD *)(v10 + 1688);
    WdLogSingleEntry1(4LL, v14);
    v15 = v53;
    v14[5] = v54;
    *((_DWORD *)v14 + 42) = v52;
    v14[4] = v4;
    *((_DWORD *)v14 + 6) = 1;
    v14[8] = 0LL;
    v14[9] = 0LL;
    v14[10] = v15;
    v14[6] = v4;
    ++*(_QWORD *)(v15 + 8);
    v16 = v14[4];
    WdLogGlobalForLineNumber = 2287;
    LeastSignificantBit = RtlFindLeastSignificantBit(v16);
    if ( LeastSignificantBit < 0 )
      v18 = 0LL;
    else
      v18 = 1LL << LeastSignificantBit;
    v14[7] = v18;
    v14[11] = 3LL;
    *((_BYTE *)v14 + 96) = 0;
    v14[13] = 0LL;
    v14[14] = 0LL;
    v14[18] = 0LL;
    *((_WORD *)v14 + 60) = 0;
    v14[16] = 0LL;
    v14[17] = 0LL;
    v14[19] = 0LL;
    v14[20] = 0LL;
    v19 = v14[10];
    *((_BYTE *)v14 + 172) = 0;
    v20 = *(_QWORD *)(v19 + 152);
    if ( v20 )
    {
      v44 = *(_QWORD *)(v20 + 24);
      v45 = 144LL * *(_QWORD *)(v20 + 32);
      *(_DWORD *)(v45 + v44) = 0;
      *(_QWORD *)(v45 + v44 + 8) = v14;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v45 + v44 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v19 + 152) + 32LL);
      v46 = *(_QWORD *)(v19 + 152);
      if ( *(_QWORD *)(v46 + 32) == *(_QWORD *)(v46 + 48) )
      {
        *(_QWORD *)(v46 + 32) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v19 + 152) + 40LL) = 1;
      }
    }
    v14[8] = v3;
    v14[9] = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v8;
    *((_QWORD *)this + 5) = v4;
    VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v14);
    v21 = *((_DWORD *)this + 42);
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 != 1 )
          return;
        v23 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
        WdLogSingleEntry2(4LL, v14, 0LL);
        LOBYTE(v24) = 0;
        v25 = v14[5] - v14[4];
        v26 = *(struct _RTL_BALANCED_NODE **)(v23 + 48);
        v27 = v14[7];
        WdLogGlobalForLineNumber = 8467;
        v49 = v25;
        v50 = v27;
        v51 = 0;
        if ( !v26 )
          goto LABEL_37;
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(&v49, v26) < 0 )
          {
            v28 = v26->Children[0];
            if ( !v26->Children[0] )
            {
              LOBYTE(v24) = 0;
              goto LABEL_37;
            }
          }
          else
          {
            v28 = v26->Children[1];
            if ( !v28 )
            {
              LOBYTE(v24) = 1;
LABEL_37:
              RtlAvlInsertNodeEx(v23 + 48, v26, v24, v14);
              *((_DWORD *)v14 + 22) = 0;
              return;
            }
          }
          v26 = v28;
        }
      }
      v35 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
      WdLogSingleEntry2(4LL, v14, 1LL);
      v37 = v14[5] - v14[4];
      v38 = *(struct _RTL_BALANCED_NODE **)(v35 + 56);
      v39 = v14[7];
      WdLogGlobalForLineNumber = 8467;
      v49 = v37;
      v50 = v39;
      v51 = 0;
      if ( v38 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(&v49, v38) < 0 )
          {
            v40 = v38->Children[0];
            if ( !v38->Children[0] )
              break;
          }
          else
          {
            v40 = v38->Children[1];
            if ( !v40 )
            {
              v5 = 1;
              break;
            }
          }
          v38 = v40;
        }
      }
      LOBYTE(v36) = v5;
      RtlAvlInsertNodeEx(v35 + 56, v38, v36, v14);
      *((_DWORD *)v14 + 22) = 1;
      return;
    }
    v29 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
    WdLogSingleEntry2(4LL, v14, 2LL);
    v31 = v14[5] - v14[4];
    v32 = *(struct _RTL_BALANCED_NODE **)(v29 + 64);
    v33 = v14[7];
    WdLogGlobalForLineNumber = 8467;
    v49 = v31;
    v50 = v33;
    v51 = 0;
    if ( v32 )
    {
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(&v49, v32) < 0 )
        {
          v34 = v32->Children[0];
          if ( !v32->Children[0] )
            break;
        }
        else
        {
          v34 = v32->Children[1];
          if ( !v34 )
          {
            v5 = 1;
            break;
          }
        }
        v32 = v34;
      }
    }
    LOBYTE(v30) = v5;
    RtlAvlInsertNodeEx(v29 + 64, v32, v30, v14);
    *((_DWORD *)v14 + 22) = 2;
  }
}
