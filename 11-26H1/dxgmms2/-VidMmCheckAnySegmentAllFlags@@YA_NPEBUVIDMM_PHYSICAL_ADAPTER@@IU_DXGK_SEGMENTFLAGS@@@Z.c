/*
 * XREFs of ?VidMmCheckAnySegmentAllFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IU_DXGK_SEGMENTFLAGS@@@Z @ 0x1401111EC
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX77KE7PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAVVIDMM_FENCE_STORAGE_PAGE@@PEAPEAUVIDMM_GLOBAL_ALLOC@@PEAE@Z @ 0x1400DEEC4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SE.c)
 *     ?VidMmVerifySupportedSegmentSetAndAdjustFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K2_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x140110DC0 (-VidMmVerifySupportedSegmentSetAndAdjustFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IPEAU_DXGK_ALLOCA.c)
 * Callees:
 *     <none>
 */

char __fastcall VidMmCheckAnySegmentAllFlags(
        const struct VIDMM_PHYSICAL_ADAPTER *a1,
        unsigned int a2,
        struct _DXGK_SEGMENTFLAGS a3)
{
  unsigned int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rax

  v3 = a2;
  if ( a2 )
  {
    while ( v3 )
    {
      _BitScanForward((unsigned int *)&v4, v3);
      v5 = *(_QWORD *)(*((_QWORD *)a1 + 219) + 8 * v4);
      v6 = v5 + 64;
      if ( !v5 )
        v6 = 56LL;
      if ( (a3.Value & *(_DWORD *)v6) == a3.0 )
        return 1;
      v3 &= ~(1 << v4);
    }
  }
  return 0;
}
