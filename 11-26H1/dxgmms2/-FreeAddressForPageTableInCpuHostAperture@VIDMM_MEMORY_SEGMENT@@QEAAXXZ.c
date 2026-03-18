/*
 * XREFs of ?FreeAddressForPageTableInCpuHostAperture@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x140110398
 * Callers:
 *     ?ReleaseResidentSystemAddress@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAXPEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x140110300 (-ReleaseResidentSystemAddress@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAX.c)
 * Callees:
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1401103FC (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::FreeAddressForPageTableInCpuHostAperture(VIDMM_MEMORY_SEGMENT *this)
{
  __int64 v1; // r8

  v1 = *((_QWORD *)this + 2);
  if ( (*(_BYTE *)(v1 + 556) & 2) != 0 )
  {
    MmUnmapReservedMapping(*((PVOID *)this + 67), 0x6D4D6956u, *(PMDL *)(v1 + 1712));
    *((_QWORD *)this + 67) = 0LL;
  }
  VIDMM_CPU_HOST_APERTURE::UnmapRange(
    *((VIDMM_CPU_HOST_APERTURE **)this + 64),
    *((struct VIDMM_CPU_HOST_APERTURE_RANGE **)this + 66));
}
