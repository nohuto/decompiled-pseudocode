/*
 * XREFs of ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1400F3B94
 * Callers:
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F2B9C (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 * Callees:
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EDD50 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EFC60 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400EFE10 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F2134 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400F4640 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::CombineFreedRanges(
        VIDMM_RECYCLE_BLOCK *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        struct VIDMM_RECYCLE_RANGE *a3,
        struct VIDMM_RECYCLE_RANGE *a4)
{
  _QWORD *v7; // rax
  struct VIDMM_RECYCLE_MULTIRANGE *v8; // r14
  struct VIDMM_RECYCLE_RANGE *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rsi
  _QWORD *v17; // r12
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rsi
  ULONG_PTR v22; // rcx
  __int64 v23; // r8
  struct _RTL_BALANCED_NODE *v24; // rbx
  ULONG_PTR v25; // rax
  struct _RTL_BALANCED_NODE *v26; // rax
  __int64 v27; // r8
  VIDMM_RECYCLE_HEAP_MGR *v28; // rsi
  __int64 v29; // rdx
  struct VIDMM_RECYCLE_RANGE *v30; // rbx
  bool v31; // zf
  struct VIDMM_RECYCLE_RANGE *v32; // rax
  struct VIDMM_RECYCLE_MULTIRANGE *v33; // rdx
  ULONG_PTR v34[2]; // [rsp+20h] [rbp-48h] BYREF
  char v35; // [rsp+30h] [rbp-38h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v7[3] = a2;
    v7[4] = a4;
    v7[5] = a3;
    v7[6] = *((_QWORD *)a2 + 9);
    WdLogGlobalForLineNumber = 7014;
  }
  v8 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)a4 + 17);
  v9 = a2;
  while ( 1 )
  {
    v10 = *((_QWORD *)v9 + 9);
    if ( *((_DWORD *)v9 + 22) == 2 )
    {
      v11 = *(_QWORD *)(v10 + 32);
      WdLogSingleEntry2(3LL, v9, 2LL);
      WdLogGlobalForLineNumber = 8405;
      RtlAvlRemoveNode(v11 + 64, v9);
      *((_DWORD *)v9 + 22) = 3;
    }
    else
    {
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(*(_QWORD *)(v10 + 32), 2, *((_QWORD *)v9 + 17));
      if ( !v8 )
        v8 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v9 + 17);
    }
    if ( v9 == a3 )
      break;
    v13 = *((_QWORD *)v9 + 15);
    v14 = *((_QWORD *)v9 + 9);
    v9 = 0LL;
    if ( v13 != v14 + 72 )
      v9 = (struct VIDMM_RECYCLE_RANGE *)(v13 - 120);
  }
  v15 = *((_QWORD *)a2 + 4);
  v16 = *((_QWORD *)a3 + 5);
  v17 = (_QWORD *)*((_QWORD *)a2 + 16);
  v18 = *((_QWORD *)a3 + 15);
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = v8;
    WdLogGlobalForLineNumber = 7069;
  }
  *((_QWORD *)a4 + 4) = v15;
  *((_QWORD *)a4 + 5) = v16;
  if ( v8 )
  {
    *((_QWORD *)v8 + 4) = v15;
    *((_QWORD *)v8 + 5) = v16;
    *((_QWORD *)v8 + 8) = a4;
    *((_QWORD *)v8 + 9) = a4;
    *((_QWORD *)a4 + 17) = v8;
  }
  v19 = *((_QWORD *)a4 + 9);
  v20 = *(_QWORD *)(v19 + 32);
  if ( v8 )
  {
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(*(_QWORD **)(v19 + 32), 2, (__int64)v8);
    goto LABEL_26;
  }
  WdLogSingleEntry2(3LL, a4, 2LL);
  v21 = v20 + 64;
  v22 = *((_QWORD *)a4 + 5) - *((_QWORD *)a4 + 4);
  LOBYTE(v23) = 0;
  v24 = *(struct _RTL_BALANCED_NODE **)(v20 + 64);
  v25 = *((_QWORD *)a4 + 7);
  WdLogGlobalForLineNumber = 8353;
  v34[0] = v22;
  v34[1] = v25;
  v35 = 0;
  if ( !v24 )
    goto LABEL_24;
  while ( (int)VidMmCompareForInsertAlignedRange(v34, v24) >= 0 )
  {
    v26 = v24->Children[1];
    if ( !v26 )
    {
      LOBYTE(v23) = 1;
      goto LABEL_24;
    }
LABEL_22:
    v24 = v26;
  }
  v26 = v24->Children[0];
  if ( v24->Children[0] )
    goto LABEL_22;
  LOBYTE(v23) = 0;
LABEL_24:
  RtlAvlInsertNodeEx(v21, v24, v23, a4);
  *((_DWORD *)a4 + 22) = 2;
LABEL_26:
  v28 = *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)a2 + 9) + 32LL) + 8LL);
  while ( 1 )
  {
    v29 = *((_QWORD *)a2 + 15);
    v30 = 0LL;
    v31 = v29 == *((_QWORD *)a2 + 9) + 72LL;
    v32 = (struct VIDMM_RECYCLE_RANGE *)(v29 - 120);
    v33 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)a2 + 17);
    if ( !v31 )
      v30 = v32;
    if ( v33 && v33 != v8 )
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v28, v33);
    if ( a2 != a4 )
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange((PLOOKASIDE_LIST_EX *)v28, a2, v27);
    if ( a2 == a3 )
      break;
    a2 = v30;
  }
  *((_QWORD *)a4 + 16) = v17;
  *v17 = (char *)a4 + 120;
  *((_QWORD *)a4 + 15) = v18;
  *(_QWORD *)(v18 + 8) = (char *)a4 + 120;
}
