/*
 * XREFs of ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D7254
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D51C0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX77KE7PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAVVIDMM_FENCE_STORAGE_PAGE@@PEAPEAUVIDMM_GLOBAL_ALLOC@@PEAE@Z @ 0x1400DEEC4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SE.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x14010CF0C (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E090 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitGlobalBackingStore(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        __int64 a4)
{
  _DWORD **v4; // rsi
  __int64 v5; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx

  v4 = (_DWORD **)((char *)a2 + 368);
  v5 = *(_QWORD *)a2;
  if ( (*((_DWORD *)a2 + 7) & 0x200) == 0 && (**v4 & 0x20008) == 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      WdLogGlobalForLineNumber = 28149;
    }
    goto LABEL_5;
  }
  v10 = (unsigned int)**v4;
  if ( (v10 & 0x20000000) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v10);
      WdLogGlobalForLineNumber = 28117;
    }
  }
  else if ( (v10 & 0x20000) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v10);
      WdLogGlobalForLineNumber = 28121;
    }
  }
  else if ( (v10 & 8) != 0 && g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v10);
    WdLogGlobalForLineNumber = 28125;
  }
  if ( (**v4 & 0x4000000) == 0 )
  {
LABEL_5:
    if ( *((_DWORD *)a2 + 58) )
      goto LABEL_8;
    goto LABEL_6;
  }
  if ( *((_DWORD *)a2 + 58) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v10);
      WdLogGlobalForLineNumber = 28137;
    }
    goto LABEL_5;
  }
LABEL_6:
  v9 = *((_QWORD *)a2 + 28);
  if ( v9 )
  {
    LOBYTE(a4) = a3;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**((_QWORD **)a2 + 27) + 136LL))(
      *((_QWORD *)a2 + 27),
      v9,
      *((_QWORD *)a2 + 26),
      a4);
    *((_QWORD *)a2 + 28) = 0LL;
    *((_QWORD *)a2 + 26) = 0LL;
  }
LABEL_8:
  _InterlockedAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(v5 + 52) >> 2) & 0x3F))
                              + 1696LL),
    -*(_QWORD *)(v5 + 16));
  *((_DWORD *)a2 + 8) &= ~0x20u;
}
