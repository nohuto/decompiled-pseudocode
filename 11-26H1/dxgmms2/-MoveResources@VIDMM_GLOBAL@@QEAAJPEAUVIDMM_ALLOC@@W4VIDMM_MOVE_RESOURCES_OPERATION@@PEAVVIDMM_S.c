/*
 * XREFs of ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@33W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400A1420
 * Callers:
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1400A1660 (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x14011146C (-CurateVPR@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x14004DBC8 (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     ?GetActiveVprStart@VIDMM_SEGMENT@@QEBA_KXZ @ 0x14004DBEC (-GetActiveVprStart@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_K@Z @ 0x1400B6084 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUV.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x140126570 (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?FindBestDefragmentRegion@VIDMM_LINEAR_POOL@@QEAA?AURegionSearchResult@1@_K00@Z @ 0x140126F78 (-FindBestDefragmentRegion@VIDMM_LINEAR_POOL@@QEAA-AURegionSearchResult@1@_K00@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::MoveResources(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        _BYTE *a10,
        _QWORD *a11)
{
  __int64 v11; // r14
  unsigned __int8 v12; // si
  __int64 v14; // rdx
  bool v17; // r12
  unsigned __int64 v18; // rbx
  __int64 v19; // r15
  _QWORD *v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdx
  VIDMM_SEGMENT *v23; // rcx
  unsigned __int64 ActiveVprEnd; // rax
  int v25; // edx
  VIDMM_SEGMENT *v26; // rcx
  _QWORD v28[3]; // [rsp+40h] [rbp-38h] BYREF
  char v29; // [rsp+58h] [rbp-20h]

  v11 = *(unsigned __int16 *)(a4 + 68);
  v12 = 1;
  v14 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 3032LL);
  v17 = (*(_DWORD *)(352 * v11 + v14 + 16) & 8) != 0;
  if ( (*(_DWORD *)(352 * v11 + v14 + 16) & 8) != 0 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(a1, v11, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(a1, v11);
  }
  if ( !a3 )
  {
    v21 = a8;
    v18 = a7;
    if ( !a8 && !a7 )
    {
      if ( a6 )
      {
        VIDMM_SEGMENT::GetActiveVprStart((VIDMM_SEGMENT *)a4);
        ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(v23);
        if ( v25 != 1 )
        {
          if ( v25 == 2 )
          {
            v18 = v21;
            v21 = ActiveVprEnd;
          }
          else
          {
            v21 = *(_QWORD *)(a4 + 40);
            v18 = ActiveVprEnd;
          }
        }
      }
    }
    v20 = a11;
    v22 = v18;
LABEL_19:
    VIDMM_SEGMENT::DefragmentResourcesOverRange(a4, v22, v21, a9, a10, v20);
    goto LABEL_20;
  }
  if ( a3 == 1 )
  {
    v18 = a7;
    v19 = *(_QWORD *)*MEMORY[0];
    VIDMM_LINEAR_POOL::FindBestDefragmentRegion(*(_QWORD *)(a4 + 256), v28, a7, a8, *(_QWORD *)(v19 + 16));
    v20 = a11;
    if ( !v29 )
    {
      *a11 = v19;
      *a10 = 0;
      goto LABEL_20;
    }
    v21 = v28[1];
    v22 = v28[0];
    goto LABEL_19;
  }
  if ( g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  v18 = a7;
LABEL_20:
  if ( v17 )
  {
    if ( v18 != VIDMM_SEGMENT::GetActiveVprStart((VIDMM_SEGMENT *)a4) || v18 == VIDMM_SEGMENT::GetActiveVprEnd(v26) )
      v12 = 0;
    VIDMM_GLOBAL::FlushPagingBufferInternal(a1, v11, 0, 0LL, 0LL, 0, v12);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(a1, v11);
  }
  return VIDMM_SEGMENT::UpdateActiveVPRAfterMove((VIDMM_SEGMENT *)a4);
}
