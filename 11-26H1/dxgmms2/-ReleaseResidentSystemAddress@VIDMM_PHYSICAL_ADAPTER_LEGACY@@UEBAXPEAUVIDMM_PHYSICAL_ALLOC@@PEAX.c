/*
 * XREFs of ?ReleaseResidentSystemAddress@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAXPEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x140110300
 * Callers:
 *     <none>
 * Callees:
 *     ReleaseResidentSystemAddressInCpuHostAperture @ 0x1400B2780 (ReleaseResidentSystemAddressInCpuHostAperture.c)
 *     ?FreeAddressForPageTableInCpuHostAperture@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x140110398 (-FreeAddressForPageTableInCpuHostAperture@VIDMM_MEMORY_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::ReleaseResidentSystemAddress(
        VIDMM_PHYSICAL_ADAPTER_LEGACY *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        void *a3,
        struct VIDMM_SYSTEM_ADDRESS_CONTEXT *a4)
{
  __int64 v4; // r10
  int v5; // eax

  v4 = *((_QWORD *)a2 + 8);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 0x1001) == 0 )
  {
    if ( (v5 & 4) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 7) + 24LL) + 444LL) & 8) == 0 )
      {
        if ( *((_BYTE *)a4 + 16) )
          MmUnmapReservedMapping(a3, 0x6D4D6956u, *(PMDL *)(*(_QWORD *)(v4 + 16) + 1712LL));
        else
          MmUnmapIoSpace(a3, *((_QWORD *)a2 + 2));
      }
    }
    else if ( *((_BYTE *)a4 + 16) )
    {
      VIDMM_MEMORY_SEGMENT::FreeAddressForPageTableInCpuHostAperture(*((VIDMM_MEMORY_SEGMENT **)a2 + 8));
    }
    else
    {
      ReleaseResidentSystemAddressInCpuHostAperture(*(VIDMM_CPU_HOST_APERTURE **)(v4 + 512), (__int64)a3, (__int64)a4);
    }
  }
}
