/*
 * XREFs of ?VidMmGetMostPreferredSegment@@YAPEAUVIDMM_SEGMENT_BASE@@PEAUVIDMM_PHYSICAL_ADAPTER@@U_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x14011681C
 * Callers:
 *     UpdateAllocationProperty @ 0x1400B2A2C (UpdateAllocationProperty.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX77KE7PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAVVIDMM_FENCE_STORAGE_PAGE@@PEAPEAUVIDMM_GLOBAL_ALLOC@@PEAE@Z @ 0x1400DEEC4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SE.c)
 *     HandlePromotionCandidates @ 0x14011A818 (HandlePromotionCandidates.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBUVIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x140126110 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBU.c)
 * Callees:
 *     <none>
 */

struct VIDMM_SEGMENT_BASE *__fastcall VidMmGetMostPreferredSegment(
        struct VIDMM_PHYSICAL_ADAPTER *a1,
        struct _D3DDDI_SEGMENTPREFERENCE a2,
        bool *a3)
{
  __int64 v3; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  UINT v9; // edx
  __int64 v10; // rdx

  v3 = 0LL;
  if ( a2.0 )
  {
    if ( (*(_BYTE *)&a2.0 & 0x1F) != 0 )
    {
      v5 = (unsigned __int16)((*(_BYTE *)&a2.0 & 0x1F) - 1);
      v6 = *(_QWORD *)(*((_QWORD *)a1 + 219) + 8 * v5);
      v3 = (v6 + 8) & -(__int64)(v6 != 0);
      v7 = *((_DWORD *)a1 + 24);
      *a3 = _bittest(&v7, v5);
    }
    else
    {
      v9 = (a2.Value >> 6) & 0x1F;
      if ( v9 )
      {
        v10 = *(_QWORD *)(*((_QWORD *)a1 + 219) + 8LL * (unsigned __int16)(v9 - 1));
        return (struct VIDMM_SEGMENT_BASE *)((v10 + 8) & -(__int64)(v10 != 0));
      }
    }
  }
  return (struct VIDMM_SEGMENT_BASE *)v3;
}
