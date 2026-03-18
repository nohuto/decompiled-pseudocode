/*
 * XREFs of ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F106C
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE_FLAGS@@@Z @ 0x1400ACA7C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1400F1384 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x14003B5E0 (-GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EDD50 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F2134 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F4498 (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400F4640 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14010BFB8 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  VIDMM_RECYCLE_HEAP_MGR *v5; // r12
  VIDMM_RECYCLE_HEAP_MGR *v6; // rcx
  __int64 v7; // r15
  unsigned __int64 SmallAllocationBlockSize; // rax
  unsigned int v9; // r8d
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  char v12; // di
  __int64 v14; // r11
  char v15; // r10
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  char v21; // r14
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v23; // eax
  __int64 v24; // rdx
  _QWORD *v25; // rdx
  int v26; // edx
  struct VIDMM_RECYCLE_RANGE *v27; // rdi
  struct VIDMM_RECYCLE_RANGE *v28; // r15
  _QWORD *v29; // rcx
  char v30; // bl
  __int64 v31; // r8
  struct VIDMM_RECYCLE_RANGE *v32; // rsi
  __int64 v33; // [rsp+70h] [rbp+8h] BYREF
  __int64 v34; // [rsp+78h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 136);
  v5 = *(VIDMM_RECYCLE_HEAP_MGR **)(a1[4] + 8);
  if ( VIDMM_RECYCLE_BLOCK::CleanupFreeBlock((VIDMM_RECYCLE_BLOCK *)a1, (struct VIDMM_RECYCLE_RANGE *)a2) )
    return 2LL;
  v6 = (VIDMM_RECYCLE_HEAP_MGR *)*(unsigned int *)a1[4];
  if ( (_DWORD)v6 != 2 && (_DWORD)v6 != 1 )
    return 0LL;
  v7 = a1[5];
  SmallAllocationBlockSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(v6, 0);
  v11 = v10 - v7;
  if ( v3 && *(_QWORD *)(v3 + 40) == v10 && v11 > SmallAllocationBlockSize )
  {
    v12 = v9;
LABEL_6:
    if ( !v12 )
      return 0LL;
    v14 = *(_QWORD *)(v3 + 64);
    v15 = 0;
    v16 = *(_QWORD *)(v3 + 72);
    v17 = v14;
    v33 = 0LL;
    while ( !v15 )
    {
      if ( *(_DWORD *)(v17 + 64) )
        return 0LL;
      if ( v17 == v16 )
      {
        v15 = 1;
      }
      else
      {
        v18 = *(_QWORD *)(v17 + 120);
        v19 = *(_QWORD *)(v17 + 72);
        v17 = 0LL;
        if ( v18 != v19 + 72 )
          v17 = v18 - 120;
      }
    }
    v20 = *(_QWORD *)(v14 + 32);
    v9 = 1;
    goto LABEL_21;
  }
  v12 = 0;
  if ( v3 || *(_QWORD *)(a2 + 40) != v10 || v11 <= SmallAllocationBlockSize )
    goto LABEL_6;
  v20 = *(_QWORD *)(a2 + 32);
  v33 = 0LL;
LABEL_21:
  v33 = v20;
  v34 = v10 - v20;
  if ( v20 == v7 )
  {
    v21 = v9;
  }
  else
  {
    v21 = 0;
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v23 = (*((__int64 (__fastcall **)(__int64, __int64 *, __int64 *, __int64))VirtualMemoryInterface + 2))(
            -1LL,
            &v33,
            &v34,
            0x8000LL);
    if ( v23 < 0 )
    {
      WdLogSingleEntry4(3LL, v33, a1, v23, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[4] + 8) + 8LL) + 16LL));
      WdLogGlobalForLineNumber = 7392;
      return 0LL;
    }
    v9 = 1;
    a1[6] = v33;
  }
  if ( v12 )
  {
    v26 = *(_DWORD *)(v3 + 88);
    v27 = *(struct VIDMM_RECYCLE_RANGE **)(v3 + 64);
    v28 = *(struct VIDMM_RECYCLE_RANGE **)(v3 + 72);
    if ( v26 != 2 && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = v9;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
    }
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(a1[4], v26, v3);
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v5, (struct VIDMM_RECYCLE_MULTIRANGE *)v3);
    v29 = (_QWORD *)*((_QWORD *)v27 + 16);
    *v29 = a1 + 9;
    a1[10] = (__int64)v29;
    v30 = 0;
    while ( 1 )
    {
      v31 = *((_QWORD *)v27 + 15);
      v32 = 0LL;
      if ( v31 != *((_QWORD *)v27 + 9) + 72LL )
        v32 = (struct VIDMM_RECYCLE_RANGE *)(v31 - 120);
      if ( v27 == v28 )
        v30 = 1;
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v5, v27);
      if ( v30 )
        break;
      v27 = v32;
    }
  }
  else
  {
    v24 = *(unsigned int *)(a2 + 88);
    if ( (_DWORD)v24 != 2 && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = v9;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
      JUMPOUT(0x1400F137ELL);
    }
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(a1[4], v24, a2);
    v25 = *(_QWORD **)(a2 + 128);
    *v25 = a1 + 9;
    a1[10] = (__int64)v25;
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v5, (struct VIDMM_RECYCLE_RANGE *)a2);
  }
  return (unsigned int)(v21 != 0) + 1;
}
