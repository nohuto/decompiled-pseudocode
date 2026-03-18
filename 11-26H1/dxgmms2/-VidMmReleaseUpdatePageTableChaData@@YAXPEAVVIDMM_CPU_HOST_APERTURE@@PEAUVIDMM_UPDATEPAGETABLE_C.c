/*
 * XREFs of ?VidMmReleaseUpdatePageTableChaData@@YAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM_UPDATEPAGETABLE_CHA_DATA@@@Z @ 0x1400BC5CC
 * Callers:
 *     FreePageTableResourcesFromSegment @ 0x1400AF6F8 (FreePageTableResourcesFromSegment.c)
 *     ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1400BE0F8 (--1VIDMM_MEMORY_SEGMENT@@UEAA@XZ.c)
 *     ?FreeUpdatePageTableChaRange@VIDMM_MEMORY_SEGMENT@@UEAAXXZ @ 0x1400BE690 (-FreeUpdatePageTableChaRange@VIDMM_MEMORY_SEGMENT@@UEAAXXZ.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x140124588 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 */

void __fastcall VidMmReleaseUpdatePageTableChaData(
        struct VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_UPDATEPAGETABLE_CHA_DATA *a2)
{
  __int64 v2; // rsi
  __int64 v5; // r14
  void *v6; // rbp
  int v7; // r15d
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  v2 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    v5 = *((_QWORD *)a2 + 1);
    v6 = (void *)*((_QWORD *)a2 + 2);
    v7 = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * *(unsigned int *)(v2 + 32));
    if ( v5 )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, void *))VirtualMemoryInterface + 6))(v5, v6);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    VIDMM_CPU_HOST_APERTURE::ReleaseRange(this, (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v2);
    *((_DWORD *)this + 21) -= v7;
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_QWORD *)a2 + 2) = 0LL;
  }
}
