/*
 * XREFs of ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400F0480
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE_FLAGS@@@Z @ 0x1400ACA7C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE.c)
 *     ?FreeGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z @ 0x1400F4DC0 (-FreeGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z.c)
 * Callees:
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1400EEF40 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EFC60 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400EFE10 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1400F0AA8 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400F21B0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F2B9C (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F4498 (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400F4640 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14010C08C (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // r13
  struct VIDMM_RECYCLE_MULTIRANGE *v4; // rsi
  __int64 v6; // rcx
  __int64 Multirange; // rax
  char v8; // r12
  __int64 v9; // r14
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  int v13; // edx
  char v14; // si
  _QWORD **v15; // r14
  _QWORD *v16; // rdi
  __int64 v17; // r8
  ULONG_PTR v18; // rcx
  struct _RTL_BALANCED_NODE *v19; // rbx
  __int64 v20; // rax
  struct _RTL_BALANCED_NODE *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // r14
  _QWORD *v26; // rsi
  unsigned __int8 v27; // dl
  struct VIDMM_RECYCLE_MULTIRANGE *v28; // rdi
  int *v29; // rbx
  int v30; // edx
  unsigned __int8 v31; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct VIDMM_RECYCLE_RANGE *v34; // rdx
  _QWORD *v35; // rbx
  __int64 v36; // rbx
  int v37; // ecx
  int v38; // ecx
  __int64 v39; // r8
  ULONG_PTR v40; // rcx
  struct _RTL_BALANCED_NODE *v41; // rdi
  __int64 v42; // rax
  struct _RTL_BALANCED_NODE *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r8
  _QWORD *v48; // rax
  _QWORD *v49; // r8
  _QWORD *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  _QWORD *v57; // r14
  __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // r8
  struct VIDMM_RECYCLE_MULTIRANGE *v64; // rdx
  _QWORD *v65; // [rsp+30h] [rbp-30h] BYREF
  _QWORD **v66; // [rsp+38h] [rbp-28h]
  ULONG_PTR v67; // [rsp+40h] [rbp-20h] BYREF
  __int64 v68; // [rsp+48h] [rbp-18h]
  char v69; // [rsp+50h] [rbp-10h]
  __int64 v70; // [rsp+A0h] [rbp+40h]

  v2 = *((_QWORD *)a2 + 8);
  v3 = (_QWORD *)*((_QWORD *)a2 + 9);
  v4 = a2;
  v66 = &v65;
  v6 = *((_QWORD *)this + 1);
  v65 = &v65;
  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(v6, 0LL, *(_QWORD *)(v2 + 72), *(_QWORD *)(v2 + 32), v3[5]);
  v8 = 0;
  v70 = Multirange;
  v9 = Multirange;
  if ( !Multirange )
  {
LABEL_31:
    WdLogSingleEntry4(
      3LL,
      *((_QWORD *)v4 + 10),
      *(_QWORD *)(*((_QWORD *)v4 + 8) + 32LL),
      *(_QWORD *)(*((_QWORD *)v4 + 9) + 40LL),
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 16LL));
    v35 = v65;
    WdLogGlobalForLineNumber = 8905;
    while ( v35 != &v65 )
    {
      v64 = (struct VIDMM_RECYCLE_MULTIRANGE *)(v35 - 19);
      v35 = (_QWORD *)*v35;
      *((_DWORD *)v64 + 22) = 3;
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), v64);
    }
    v36 = *((_QWORD *)v4 + 8);
    while ( 1 )
    {
      v37 = *(_DWORD *)(v36 + 64);
      *(_QWORD *)(v36 + 136) = 0LL;
      *(_QWORD *)(v36 + 144) = 0LL;
      *(_QWORD *)(v36 + 152) = 0LL;
      *(_QWORD *)(v36 + 160) = 0LL;
      if ( !v37 )
      {
        VIDMM_RECYCLE_HEAP::AddRangeToTree(this, 2LL, v36);
        VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(
          *(VIDMM_RECYCLE_BLOCK **)(v36 + 72),
          (struct VIDMM_RECYCLE_RANGE *)v36);
        VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(*(VIDMM_RECYCLE_BLOCK **)(v36 + 72), (struct VIDMM_RECYCLE_RANGE *)v36);
        goto LABEL_45;
      }
      v38 = v37 - 4;
      if ( !v38 )
      {
        VIDMM_RECYCLE_HEAP::AddRangeToTree(this, 0LL, v36);
        goto LABEL_45;
      }
      if ( v38 != 1 )
        goto LABEL_45;
      WdLogSingleEntry2(3LL, v36, 1LL);
      LOBYTE(v39) = 0;
      v40 = *(_QWORD *)(v36 + 40) - *(_QWORD *)(v36 + 32);
      v41 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
      v42 = *(_QWORD *)(v36 + 56);
      WdLogGlobalForLineNumber = 8353;
      v67 = v40;
      v68 = v42;
      v69 = 0;
      if ( !v41 )
        goto LABEL_44;
      while ( (int)VidMmCompareForInsertAlignedRange(&v67, v41) < 0 )
      {
        v43 = v41->Children[0];
        if ( !v41->Children[0] )
        {
          LOBYTE(v39) = 0;
          goto LABEL_44;
        }
LABEL_40:
        v41 = v43;
      }
      v43 = v41->Children[1];
      if ( v43 )
        goto LABEL_40;
      LOBYTE(v39) = 1;
LABEL_44:
      RtlAvlInsertNodeEx((char *)this + 56, v41, v39, v36);
      v4 = a2;
      *(_DWORD *)(v36 + 88) = 1;
LABEL_45:
      if ( v36 == *((_QWORD *)v4 + 9) )
        return;
      v44 = *(_QWORD *)(v36 + 120);
      v45 = *(_QWORD *)(v36 + 72);
      v36 = 0LL;
      if ( v44 != v45 + 72 )
        v36 = v44 - 120;
    }
  }
  *(_QWORD *)(Multirange + 64) = v2;
  v10 = (_QWORD *)(Multirange + 152);
  *(_QWORD *)(Multirange + 72) = v3;
  *(_DWORD *)(Multirange + 88) = 2;
  v11 = v66;
  if ( *v66 != &v65 )
    goto LABEL_3;
  *(_QWORD *)(Multirange + 160) = v66;
  *v10 = &v65;
  *v11 = v10;
  v12 = *((_QWORD *)v4 + 10);
  v66 = (_QWORD **)v10;
  v13 = **(_DWORD **)(v12 + 32);
  if ( v13 == 3 || (unsigned int)(v13 - 4) <= 2 || (unsigned int)(v13 - 9) <= 1 )
    goto LABEL_5;
  v53 = v2;
  v50 = 0LL;
  while ( !v8 )
  {
    if ( *(_DWORD *)(v53 + 64) )
    {
      if ( !v50 )
        v50 = (_QWORD *)v53;
    }
    else if ( v50 )
    {
      v56 = *(_QWORD *)(v53 + 128);
      v57 = 0LL;
      if ( v56 != *(_QWORD *)(v53 + 72) + 72LL )
        v57 = (_QWORD *)(v56 - 120);
      v58 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(*((_QWORD *)this + 1), 1LL, *(_QWORD *)(v2 + 72), v50[4], v57[5]);
      v59 = v58;
      if ( !v58 )
        goto LABEL_30;
      *(_QWORD *)(v58 + 64) = v50;
      *(_QWORD *)(v58 + 72) = v57;
      *(_DWORD *)(v58 + 88) = 1;
      while ( 1 )
      {
        v50[18] = v58;
        if ( v50 == v57 )
          break;
        v60 = v50[15];
        v61 = v50[9];
        v50 = 0LL;
        if ( v60 != v61 + 72 )
          v50 = (_QWORD *)(v60 - 120);
      }
      v62 = v66;
      v63 = (_QWORD *)(v59 + 152);
      if ( *v66 != &v65 )
        goto LABEL_3;
      v63[1] = v66;
      *v63 = &v65;
      v50 = 0LL;
      *v62 = v63;
      v66 = (_QWORD **)v63;
    }
    if ( (_QWORD *)v53 == v3 )
    {
      v8 = 1;
    }
    else
    {
      v51 = *(_QWORD *)(v53 + 120);
      v52 = *(_QWORD *)(v53 + 72);
      v53 = 0LL;
      if ( v51 != v52 + 72 )
        v53 = v51 - 120;
    }
  }
  if ( v50 )
  {
    v46 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(*((_QWORD *)this + 1), 1LL, *(_QWORD *)(v2 + 72), v50[4], v3[5]);
    v47 = v46;
    if ( v46 )
    {
      *(_QWORD *)(v46 + 64) = v50;
      *(_QWORD *)(v46 + 72) = v3;
      *(_DWORD *)(v46 + 88) = 1;
      while ( 1 )
      {
        v50[18] = v46;
        if ( v50 == v3 )
          break;
        v54 = v50[15];
        v55 = v50[9];
        v50 = 0LL;
        if ( v54 != v55 + 72 )
          v50 = (_QWORD *)(v54 - 120);
      }
      v48 = v66;
      v49 = (_QWORD *)(v47 + 152);
      if ( *v66 != &v65 )
LABEL_3:
        __fastfail(3u);
      v49[1] = v66;
      *v49 = &v65;
      *v48 = v49;
      v66 = (_QWORD **)v49;
      goto LABEL_56;
    }
LABEL_30:
    v4 = a2;
    goto LABEL_31;
  }
LABEL_56:
  v9 = v70;
LABEL_5:
  v14 = 0;
  while ( !v14 )
  {
    if ( *(_DWORD *)(v2 + 64) == 4 )
    {
      v22 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
              *((_QWORD *)this + 1),
              2LL,
              *(_QWORD *)(v2 + 72),
              *(_QWORD *)(v2 + 32),
              *(_QWORD *)(v2 + 40));
      if ( !v22 )
        goto LABEL_30;
      *(_QWORD *)(v22 + 64) = v2;
      *(_QWORD *)(v22 + 72) = v2;
      *(_QWORD *)(v2 + 152) = v22;
      *(_DWORD *)(v22 + 88) = 0;
      v23 = (_QWORD *)(v22 + 152);
      v24 = v66;
      if ( *v66 != &v65 )
        goto LABEL_3;
      v23[1] = v66;
      *v23 = &v65;
      *v24 = v23;
      v66 = (_QWORD **)v23;
    }
    *(_QWORD *)(v2 + 136) = v9;
    *(_QWORD *)(v2 + 160) = 0LL;
    if ( (_QWORD *)v2 == v3 )
    {
      v14 = 1;
    }
    else
    {
      v32 = *(_QWORD *)(v2 + 120);
      v33 = *(_QWORD *)(v2 + 72);
      v2 = 0LL;
      if ( v32 != v33 + 72 )
        v2 = v32 - 120;
    }
  }
  v15 = (_QWORD **)v65;
  v16 = v65 - 19;
  *((_DWORD *)v16 + 22) = 3;
  WdLogSingleEntry2(4LL, v16, 2LL);
  LOBYTE(v17) = 0;
  v18 = v16[5] - v16[4];
  v19 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
  v20 = v16[7];
  WdLogGlobalForLineNumber = 8467;
  v67 = v18;
  v68 = v20;
  v69 = 0;
  if ( !v19 )
    goto LABEL_20;
  while ( (int)VidMmCompareForInsertAlignedRange(&v67, v19) < 0 )
  {
    v21 = v19->Children[0];
    if ( !v19->Children[0] )
    {
      LOBYTE(v17) = 0;
      goto LABEL_20;
    }
LABEL_10:
    v19 = v21;
  }
  v21 = v19->Children[1];
  if ( v21 )
    goto LABEL_10;
  LOBYTE(v17) = 1;
LABEL_20:
  RtlAvlInsertNodeEx((char *)this + 64, v19, v17, v16);
  *((_DWORD *)v16 + 22) = 2;
  v25 = *v15;
  v26 = v25;
  v28 = VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible((int *)v16);
  while ( v26 != &v65 )
  {
    v29 = (int *)(v26 - 19);
    v30 = *((_DWORD *)v26 - 16);
    *((_DWORD *)v26 - 16) = 3;
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v30, (__int64)(v26 - 19));
    v26 = (_QWORD *)*v26;
    VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v29);
  }
  v31 = VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v28, v27);
  if ( v25 == &v65 && !v31 )
  {
    v34 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v28 + 8);
    if ( v34 == *((struct VIDMM_RECYCLE_RANGE **)v28 + 9) )
    {
      VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)v28 + 10), v34);
      VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(
        *((VIDMM_RECYCLE_BLOCK **)v28 + 10),
        *((struct VIDMM_RECYCLE_RANGE **)v28 + 8));
    }
  }
}
