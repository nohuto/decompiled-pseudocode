/*
 * XREFs of ?VidMmCheckForCpuVisibleMemorySegment@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@I@Z @ 0x140117824
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX77KE7PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAVVIDMM_FENCE_STORAGE_PAGE@@PEAPEAUVIDMM_GLOBAL_ALLOC@@PEAE@Z @ 0x1400DEEC4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SE.c)
 * Callees:
 *     <none>
 */

char __fastcall VidMmCheckForCpuVisibleMemorySegment(const struct VIDMM_PHYSICAL_ADAPTER *a1, unsigned int a2)
{
  int v3; // eax
  __int64 v4; // r9
  __int64 v6; // rdx
  __int64 v7; // rax

  while ( 1 )
  {
    if ( !a2 )
      return 0;
    v3 = *((_DWORD *)a1 + 21);
    _BitScanForward((unsigned int *)&v4, a2);
    if ( _bittest(&v3, v4) )
    {
      v6 = *(_QWORD *)(*((_QWORD *)a1 + 219) + 8 * v4);
      v7 = v6 + 64;
      if ( !v6 )
        v7 = 56LL;
      if ( (*(_DWORD *)v7 & 0x6004) != 0 )
        break;
    }
    a2 &= ~(1 << v4);
  }
  return 1;
}
