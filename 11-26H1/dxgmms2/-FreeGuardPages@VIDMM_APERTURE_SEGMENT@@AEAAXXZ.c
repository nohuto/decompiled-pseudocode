/*
 * XREFs of ?FreeGuardPages@VIDMM_APERTURE_SEGMENT@@AEAAXXZ @ 0x1400BD2B8
 * Callers:
 *     ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1400BD030 (--1VIDMM_APERTURE_SEGMENT@@UEAA@XZ.c)
 *     ?InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@AEAAJXZ @ 0x1400BD44C (-InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@AEAAJXZ.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::FreeGuardPages(VIDMM_APERTURE_SEGMENT *this)
{
  __int64 v1; // rbp
  PMDL *v2; // rdi
  PMDL v4; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  v1 = *((_QWORD *)this + 65);
  v2 = (PMDL *)((char *)this + 512);
  if ( v1 )
  {
    v4 = *v2;
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, PMDL))VirtualMemoryInterface + 6))(v1, v4);
    *((_QWORD *)this + 65) = 0LL;
  }
  if ( *v2 )
  {
    MmFreePagesFromMdl(*v2);
    ExFreePoolWithTag(*v2, 0);
    *v2 = 0LL;
  }
}
