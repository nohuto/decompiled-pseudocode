/*
 * XREFs of ?InvalidateVirtualAddresses@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXXZ @ 0x1400B2660
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400B66CC (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::InvalidateVirtualAddresses(VIDMM_PHYSICAL_ADAPTER_LEGACY *this)
{
  unsigned __int16 i; // bx

  for ( i = 0; (unsigned int)i < *((_DWORD *)this + 34); ++i )
    VIDMM_SEGMENT::InvalidateAllVirtualAddress(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 219) + 8LL * i));
}
