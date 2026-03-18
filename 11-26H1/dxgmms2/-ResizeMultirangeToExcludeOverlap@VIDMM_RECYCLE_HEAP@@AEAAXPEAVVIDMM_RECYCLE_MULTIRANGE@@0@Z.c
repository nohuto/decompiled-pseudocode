/*
 * XREFs of ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1400EEAAC
 * Callers:
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EE4D8 (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 * Callees:
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1400EDE24 (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400EDEF0 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EFC60 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400EFE10 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1400F0AA8 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400F4640 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14010C08C (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2,
        struct VIDMM_RECYCLE_MULTIRANGE *a3)
{
  __int64 v3; // r13
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r15
  __int64 v9; // r12
  char v10; // di
  char *v11; // rcx
  struct VIDMM_RECYCLE_MULTIRANGE *v12; // r8
  _QWORD *v13; // r8
  unsigned __int64 v14; // r10
  _QWORD *v15; // rbx
  unsigned __int64 v16; // r11
  unsigned __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // r8
  __int64 v22; // rax
  struct _RTL_BALANCED_NODE *v23; // rbx
  struct _RTL_BALANCED_NODE *v24; // rax
  char *v25; // rcx
  int v26; // edx
  struct _RTL_BALANCED_NODE *v27; // rax
  struct _RTL_BALANCED_NODE *v28; // rax
  int v29; // ecx
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  VIDMM_RECYCLE_MULTIRANGE *Multirange; // rax
  struct VIDMM_RECYCLE_MULTIRANGE *v37; // rbx
  int v38; // ecx
  int v39; // ecx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD v43[2]; // [rsp+30h] [rbp-58h] BYREF
  char v44; // [rsp+40h] [rbp-48h]
  unsigned __int64 v45; // [rsp+98h] [rbp+10h]
  unsigned __int64 v47; // [rsp+A8h] [rbp+20h]

  v5 = *((_QWORD *)a3 + 4);
  v7 = *((_QWORD *)a2 + 5);
  v8 = *((_QWORD *)a3 + 5);
  v9 = *((int *)a2 + 22);
  v45 = *((_QWORD *)a2 + 4);
  v47 = v5;
  WdLogSingleEntry2(4LL, a2, v9);
  v10 = 0;
  WdLogGlobalForLineNumber = 8517;
  if ( (_DWORD)v9 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v11 = (char *)this + 56;
    }
    else
    {
      if ( (_DWORD)v9 != 2 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v9, 0LL);
        WdLogGlobalForLineNumber = 213;
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 15LL, v9, 0LL);
        WdLogGlobalForLineNumber = 213;
        goto LABEL_73;
      }
      v11 = (char *)this + 64;
    }
  }
  else
  {
    v11 = (char *)this + 48;
  }
  RtlAvlRemoveNode(v11, a2);
  *((_DWORD *)a2 + 22) = 3;
  if ( v5 > v45 )
  {
    if ( v8 >= v7 )
    {
      VIDMM_RECYCLE_MULTIRANGE::ShrinkTo(a2, *((_QWORD *)a2 + 4), v5);
      v12 = a2;
LABEL_8:
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, (unsigned int)v9, v12);
      return;
    }
    v7 = 0LL;
    v33 = *((_QWORD *)a2 + 5);
    v3 = *((_QWORD *)a2 + 9);
    v34 = *((_QWORD *)a3 + 9);
    v35 = *(_QWORD *)(v34 + 120);
    if ( v35 != *(_QWORD *)(v34 + 72) + 72LL )
      v7 = v35 - 120;
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo(a2, *((_QWORD *)a2 + 4), v47);
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, (unsigned int)v9, a2);
    Multirange = (VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                               *((_QWORD *)this + 1),
                                               *((unsigned int *)a2 + 42),
                                               *((_QWORD *)a2 + 10),
                                               v8,
                                               v33);
    v37 = Multirange;
    if ( Multirange )
    {
      *((_QWORD *)Multirange + 8) = v7;
      *((_QWORD *)Multirange + 9) = v3;
      VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(Multirange);
      v12 = v37;
      goto LABEL_8;
    }
    while ( 1 )
    {
LABEL_73:
      v38 = *(_DWORD *)(v7 + 64);
      if ( v38 )
      {
        v39 = v38 - 4;
        if ( v39 )
        {
          if ( v39 != 1 )
            goto LABEL_80;
          v40 = 1LL;
        }
        else
        {
          v40 = 0LL;
        }
      }
      else
      {
        v40 = 2LL;
      }
      VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v40, v7);
LABEL_80:
      if ( v7 == v3 )
        return;
      v41 = *(_QWORD *)(v7 + 120);
      v42 = *(_QWORD *)(v7 + 72);
      v7 = 0LL;
      if ( v41 != v42 + 72 )
        v7 = v41 - 120;
    }
  }
  v13 = (_QWORD *)*((_QWORD *)a2 + 8);
  if ( v8 >= v7 )
  {
    while ( 1 )
    {
      v29 = *((_DWORD *)a2 + 42);
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( v30 )
        {
          if ( v30 == 1 )
            v13[19] = 0LL;
        }
        else
        {
          v13[18] = 0LL;
        }
      }
      else
      {
        v13[17] = 0LL;
      }
      if ( v13 == *((_QWORD **)a2 + 9) )
        break;
      v31 = v13[15];
      v32 = v13[9];
      v13 = 0LL;
      if ( v31 != v32 + 72 )
        v13 = (_QWORD *)(v31 - 120);
    }
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), a2);
    return;
  }
  v14 = *((_QWORD *)a2 + 5);
  v15 = (_QWORD *)*((_QWORD *)a2 + 9);
  while ( 1 )
  {
    v16 = v13[4];
    v17 = v13 + 5;
    if ( v16 >= v14 || *v17 <= v8 )
    {
      v20 = *((_DWORD *)a2 + 42);
      if ( v20 )
      {
        v26 = v20 - 1;
        if ( v26 )
        {
          if ( v26 == 1 )
            v13[19] = 0LL;
        }
        else
        {
          v13[18] = 0LL;
        }
      }
      else
      {
        v13[17] = 0LL;
      }
    }
    if ( v16 == v8 )
      *((_QWORD *)a2 + 8) = v13;
    if ( *v17 == v14 )
      *((_QWORD *)a2 + 9) = v13;
    if ( v13 == v15 )
      break;
    v18 = v13[15];
    v19 = v13[9];
    v13 = 0LL;
    if ( v18 != v19 + 72 )
      v13 = (_QWORD *)(v18 - 120);
  }
  *((_QWORD *)a2 + 4) = v8;
  *((_QWORD *)a2 + 5) = v14;
  *((_QWORD *)a2 + 6) = v8;
  WdLogSingleEntry2(4LL, a2, v9);
  v22 = *((_QWORD *)a2 + 7);
  v43[0] = *((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4);
  WdLogGlobalForLineNumber = 8467;
  v43[1] = v22;
  v44 = 0;
  if ( !(_DWORD)v9 )
  {
    v23 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
    if ( v23 )
    {
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v43, v23) < 0 )
        {
          v28 = v23->Children[0];
          if ( !v23->Children[0] )
            break;
        }
        else
        {
          v28 = v23->Children[1];
          if ( !v28 )
          {
            v10 = 1;
            break;
          }
        }
        v23 = v28;
      }
    }
    v25 = (char *)this + 48;
    goto LABEL_33;
  }
  if ( (_DWORD)v9 == 1 )
  {
    v23 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
    if ( v23 )
    {
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v43, v23) < 0 )
        {
          v27 = v23->Children[0];
          if ( !v23->Children[0] )
            break;
        }
        else
        {
          v27 = v23->Children[1];
          if ( !v27 )
          {
            v10 = 1;
            break;
          }
        }
        v23 = v27;
      }
    }
    v25 = (char *)this + 56;
    goto LABEL_33;
  }
  v23 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
  if ( !v23 )
    goto LABEL_32;
  while ( (int)VidMmCompareForInsertAlignedRange(v43, v23) < 0 )
  {
    v24 = v23->Children[0];
    if ( !v23->Children[0] )
      goto LABEL_32;
LABEL_28:
    v23 = v24;
  }
  v24 = v23->Children[1];
  if ( v24 )
    goto LABEL_28;
  v10 = 1;
LABEL_32:
  v25 = (char *)this + 64;
LABEL_33:
  LOBYTE(v21) = v10;
  RtlAvlInsertNodeEx(v25, v23, v21, a2);
  *((_DWORD *)a2 + 22) = v9;
}
