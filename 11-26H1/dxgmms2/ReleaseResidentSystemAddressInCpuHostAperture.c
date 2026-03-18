/*
 * XREFs of ReleaseResidentSystemAddressInCpuHostAperture @ 0x1400B2780
 * Callers:
 *     ?ReleaseResidentSystemAddress@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAXPEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x140110300 (-ReleaseResidentSystemAddress@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAX.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1401103FC (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x140124588 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 */

void __fastcall ReleaseResidentSystemAddressInCpuHostAperture(VIDMM_CPU_HOST_APERTURE *this, __int64 a2, __int64 a3)
{
  PVOID v6; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  VIDMM_CPU_HOST_APERTURE::UnmapRange(this, *(struct VIDMM_CPU_HOST_APERTURE_RANGE **)(a3 + 8));
  VIDMM_CPU_HOST_APERTURE::ReleaseRange(this, *(struct VIDMM_CPU_HOST_APERTURE_RANGE **)(a3 + 8));
  v6 = *(PVOID *)a3;
  *(_QWORD *)(a3 + 8) = 0LL;
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  (*((void (__fastcall **)(__int64, PVOID))VirtualMemoryInterface + 6))(a2, v6);
  ExFreePoolWithTag(*(PVOID *)a3, 0);
  *(_QWORD *)a3 = 0LL;
}
