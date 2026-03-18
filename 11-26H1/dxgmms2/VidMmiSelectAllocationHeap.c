/*
 * XREFs of VidMmiSelectAllocationHeap @ 0x1400A37D8
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX77KE7PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAVVIDMM_FENCE_STORAGE_PAGE@@PEAPEAUVIDMM_GLOBAL_ALLOC@@PEAE@Z @ 0x1400DEEC4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SE.c)
 * Callees:
 *     <none>
 */

struct VIDMM_EXISTINGSYSMEM_HEAP *__fastcall VidMmiSelectAllocationHeap(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // r9d
  int v6; // ecx
  __int64 v7; // rax

  v3 = *(_DWORD *)(a2 + 28);
  if ( (v3 & 2) != 0 )
    return 0LL;
  if ( (v3 & 0x50) != 0 )
    return *(struct VIDMM_EXISTINGSYSMEM_HEAP **)(a1 + 48);
  v6 = **(_DWORD **)(a2 + 368);
  if ( (v6 & 0x30) != 0 )
    return g_pExistingSysMemHeap;
  if ( byte_14008A544
    || (*(_DWORD *)(a1 + 152) & 0x80u) != 0
    || (v3 & 0x200) != 0
    || (v6 & 0x20008) != 0
    || (v3 & 0x4000) != 0
    || (v6 & 0x2000000) != 0 && (v3 & 8) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 56);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 40);
  }
  return *(struct VIDMM_EXISTINGSYSMEM_HEAP **)(v7 + 8LL * a3);
}
