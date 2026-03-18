/*
 * XREFs of ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EE4D8
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE_FLAGS@@@Z @ 0x1400ACA7C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE.c)
 * Callees:
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1400EDE24 (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400EDEF0 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1400EEAAC (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EFC60 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400EFE10 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1400F0AA8 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400F4640 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14010C08C (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch(
        VIDMM_RECYCLE_HEAP_MGR **this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  _QWORD *v2; // r14
  bool v5; // zf
  struct VIDMM_RECYCLE_MULTIRANGE *v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  char *v12; // rcx
  VIDMM_RECYCLE_MULTIRANGE *v13; // r8
  __int64 v14; // r8
  char *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct VIDMM_RECYCLE_MULTIRANGE *v18; // rbx
  _QWORD *v19; // r8
  unsigned __int64 v20; // r10
  _QWORD *v21; // rbx
  unsigned __int64 v22; // r11
  unsigned __int64 *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edx
  __int64 v27; // rax
  struct _RTL_BALANCED_NODE *v28; // rbx
  struct _RTL_BALANCED_NODE *v29; // rax
  int v30; // edx
  struct _RTL_BALANCED_NODE *v31; // rax
  struct _RTL_BALANCED_NODE *v32; // rax
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rbx
  __int64 v40; // rdx
  VIDMM_RECYCLE_MULTIRANGE *Multirange; // rax
  VIDMM_RECYCLE_MULTIRANGE *v42; // rbx
  int v43; // ecx
  int v44; // ecx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  _QWORD v48[2]; // [rsp+30h] [rbp-58h] BYREF
  char v49; // [rsp+40h] [rbp-48h]
  unsigned __int64 v50; // [rsp+98h] [rbp+10h]
  __int64 v51; // [rsp+98h] [rbp+10h]
  unsigned __int64 v52; // [rsp+A0h] [rbp+18h]

  v2 = (_QWORD *)*((_QWORD *)a2 + 8);
  while ( 2 )
  {
    WdLogSingleEntry1(4LL, v2);
    v5 = *((_DWORD *)a2 + 42) == 0;
    WdLogGlobalForLineNumber = 8112;
    if ( !v5 )
    {
      v6 = (struct VIDMM_RECYCLE_MULTIRANGE *)v2[17];
      if ( v6 )
      {
        WdLogSingleEntry1(4LL, v2[17]);
        WdLogGlobalForLineNumber = 8123;
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap((VIDMM_RECYCLE_HEAP *)this, v6, a2);
        v2[17] = 0LL;
      }
    }
    if ( *((_DWORD *)a2 + 42) == 1 )
      goto LABEL_19;
    v7 = v2[18];
    if ( !v7 )
      goto LABEL_19;
    WdLogSingleEntry1(4LL, v2[18]);
    v8 = *((_QWORD *)a2 + 4);
    v9 = *(_QWORD *)(v7 + 40);
    v10 = *((_QWORD *)a2 + 5);
    v11 = *(int *)(v7 + 88);
    v50 = *(_QWORD *)(v7 + 32);
    WdLogGlobalForLineNumber = 8137;
    v52 = v8;
    WdLogSingleEntry2(4LL, v7, v11);
    WdLogGlobalForLineNumber = 8517;
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == 1 )
      {
        v12 = (char *)(this + 7);
      }
      else
      {
        if ( (_DWORD)v11 != 2 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v11, 0LL);
          WdLogGlobalForLineNumber = 213;
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 52LL, 15LL, v11, v8);
          WdLogGlobalForLineNumber = 213;
          JUMPOUT(0x1400EEAA6LL);
        }
        v12 = (char *)(this + 8);
      }
    }
    else
    {
      v12 = (char *)(this + 6);
    }
    RtlAvlRemoveNode(v12, v7);
    *(_DWORD *)(v7 + 88) = 3;
    if ( v8 > v50 )
    {
      if ( v10 >= v9 )
      {
        VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((VIDMM_RECYCLE_MULTIRANGE *)v7, *(_QWORD *)(v7 + 32), v8);
        v13 = (VIDMM_RECYCLE_MULTIRANGE *)v7;
LABEL_14:
        VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, (unsigned int)v11, v13);
        goto LABEL_18;
      }
      v37 = *((_QWORD *)a2 + 9);
      v38 = 0LL;
      v39 = *(_QWORD *)(v7 + 40);
      v40 = *(_QWORD *)(v37 + 120);
      if ( v40 != *(_QWORD *)(v37 + 72) + 72LL )
        v38 = v40 - 120;
      v51 = *(_QWORD *)(v7 + 72);
      VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((VIDMM_RECYCLE_MULTIRANGE *)v7, *(_QWORD *)(v7 + 32), v52);
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, (unsigned int)v11, v7);
      Multirange = (VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                                 this[1],
                                                 *(unsigned int *)(v7 + 168),
                                                 *(_QWORD *)(v7 + 80),
                                                 v10,
                                                 v39);
      v42 = Multirange;
      if ( Multirange )
      {
        *((_QWORD *)Multirange + 8) = v38;
        *((_QWORD *)Multirange + 9) = v51;
        VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(Multirange);
        v13 = v42;
        goto LABEL_14;
      }
      while ( 1 )
      {
        v43 = *(_DWORD *)(v38 + 64);
        if ( v43 )
        {
          v44 = v43 - 4;
          if ( v44 )
          {
            if ( v44 != 1 )
              goto LABEL_93;
            v45 = 1LL;
          }
          else
          {
            v45 = 0LL;
          }
        }
        else
        {
          v45 = 2LL;
        }
        VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v45, v38);
LABEL_93:
        if ( v38 == v51 )
          goto LABEL_18;
        v46 = *(_QWORD *)(v38 + 120);
        v47 = *(_QWORD *)(v38 + 72);
        v38 = 0LL;
        if ( v46 != v47 + 72 )
          v38 = v46 - 120;
      }
    }
    v19 = *(_QWORD **)(v7 + 64);
    if ( v10 >= v9 )
    {
      while ( 1 )
      {
        v33 = *(_DWORD *)(v7 + 168);
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( v34 )
          {
            if ( v34 == 1 )
              v19[19] = 0LL;
          }
          else
          {
            v19[18] = 0LL;
          }
        }
        else
        {
          v19[17] = 0LL;
        }
        if ( v19 == *(_QWORD **)(v7 + 72) )
          break;
        v35 = v19[15];
        v36 = v19[9];
        v19 = 0LL;
        if ( v35 != v36 + 72 )
          v19 = (_QWORD *)(v35 - 120);
      }
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], (struct VIDMM_RECYCLE_MULTIRANGE *)v7);
      goto LABEL_18;
    }
    v20 = *(_QWORD *)(v7 + 40);
    v21 = *(_QWORD **)(v7 + 72);
    while ( 1 )
    {
      v22 = v19[4];
      v23 = v19 + 5;
      if ( v22 >= v20 || *v23 <= v10 )
      {
        v26 = *(_DWORD *)(v7 + 168);
        if ( v26 )
        {
          v30 = v26 - 1;
          if ( v30 )
          {
            if ( v30 == 1 )
              v19[19] = 0LL;
          }
          else
          {
            v19[18] = 0LL;
          }
        }
        else
        {
          v19[17] = 0LL;
        }
      }
      if ( v22 == v10 )
        *(_QWORD *)(v7 + 64) = v19;
      if ( *v23 == v20 )
        *(_QWORD *)(v7 + 72) = v19;
      if ( v19 == v21 )
        break;
      v24 = v19[15];
      v25 = v19[9];
      v19 = 0LL;
      if ( v24 != v25 + 72 )
        v19 = (_QWORD *)(v24 - 120);
    }
    *(_QWORD *)(v7 + 32) = v10;
    *(_QWORD *)(v7 + 40) = v20;
    *(_QWORD *)(v7 + 48) = v10;
    WdLogSingleEntry2(4LL, v7, v11);
    v27 = *(_QWORD *)(v7 + 56);
    v48[0] = *(_QWORD *)(v7 + 40) - *(_QWORD *)(v7 + 32);
    WdLogGlobalForLineNumber = 8467;
    v48[1] = v27;
    v49 = 0;
    if ( !(_DWORD)v11 )
    {
      v28 = (struct _RTL_BALANCED_NODE *)this[6];
      LOBYTE(v14) = 0;
      if ( v28 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v48, v28) < 0 )
          {
            v32 = v28->Children[0];
            if ( !v28->Children[0] )
            {
              LOBYTE(v14) = 0;
              break;
            }
          }
          else
          {
            v32 = v28->Children[1];
            if ( !v32 )
            {
              LOBYTE(v14) = 1;
              break;
            }
          }
          v28 = v32;
        }
      }
      v15 = (char *)(this + 6);
      goto LABEL_17;
    }
    if ( (_DWORD)v11 == 1 )
    {
      v28 = (struct _RTL_BALANCED_NODE *)this[7];
      LOBYTE(v14) = 0;
      if ( v28 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v48, v28) < 0 )
          {
            v31 = v28->Children[0];
            if ( !v28->Children[0] )
            {
              LOBYTE(v14) = 0;
              break;
            }
          }
          else
          {
            v31 = v28->Children[1];
            if ( !v31 )
            {
              LOBYTE(v14) = 1;
              break;
            }
          }
          v28 = v31;
        }
      }
      v15 = (char *)(this + 7);
      goto LABEL_17;
    }
    v28 = (struct _RTL_BALANCED_NODE *)this[8];
    LOBYTE(v14) = 0;
    if ( !v28 )
      goto LABEL_16;
    while ( (int)VidMmCompareForInsertAlignedRange(v48, v28) >= 0 )
    {
      v29 = v28->Children[1];
      if ( !v29 )
      {
        LOBYTE(v14) = 1;
        goto LABEL_16;
      }
LABEL_46:
      v28 = v29;
    }
    v29 = v28->Children[0];
    if ( v28->Children[0] )
      goto LABEL_46;
    LOBYTE(v14) = 0;
LABEL_16:
    v15 = (char *)(this + 8);
LABEL_17:
    RtlAvlInsertNodeEx(v15, v28, v14, v7);
    *(_DWORD *)(v7 + 88) = v11;
LABEL_18:
    v2[18] = 0LL;
LABEL_19:
    if ( *((_DWORD *)a2 + 42) != 2 )
    {
      v18 = (struct VIDMM_RECYCLE_MULTIRANGE *)v2[19];
      if ( v18 )
      {
        WdLogSingleEntry1(4LL, v2[19]);
        WdLogGlobalForLineNumber = 8151;
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap((VIDMM_RECYCLE_HEAP *)this, v18, a2);
        v2[19] = 0LL;
      }
    }
    if ( v2 != *((_QWORD **)a2 + 9) )
    {
      v16 = v2[15];
      v17 = v2[9];
      v2 = 0LL;
      if ( v16 != v17 + 72 )
        v2 = (_QWORD *)(v16 - 120);
      continue;
    }
    break;
  }
}
