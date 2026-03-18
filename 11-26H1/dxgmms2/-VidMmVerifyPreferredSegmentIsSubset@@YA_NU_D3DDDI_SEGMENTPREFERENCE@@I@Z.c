/*
 * XREFs of ?VidMmVerifyPreferredSegmentIsSubset@@YA_NU_D3DDDI_SEGMENTPREFERENCE@@I@Z @ 0x140115E78
 * Callers:
 *     UpdateAllocationProperty @ 0x1400B2A2C (UpdateAllocationProperty.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX77KE7PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAVVIDMM_FENCE_STORAGE_PAGE@@PEAPEAUVIDMM_GLOBAL_ALLOC@@PEAE@Z @ 0x1400DEEC4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SE.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBUVIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x140126110 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBU.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidMmVerifyPreferredSegmentIsSubset(struct _D3DDDI_SEGMENTPREFERENCE a1, int a2)
{
  int v2; // r8d
  unsigned int i; // edx
  UINT v5; // r9d

  v2 = 0;
  if ( a1.0 )
  {
    for ( i = 0; i < 0x1E; i += 6 )
    {
      v5 = (a1.Value >> i) & 0x1F;
      if ( v5 )
        _bittestandset(&v2, (unsigned __int16)(v5 - 1));
    }
    return (~a2 & v2) == 0;
  }
  else
  {
    return 1;
  }
}
