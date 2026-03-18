/*
 * XREFs of ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x140037560
 * Callers:
 *     ?GetPte@CVirtualAddressAllocator@@QEAA?AU_DXGK_PTE@@_K@Z @ 0x1400AA3A4 (-GetPte@CVirtualAddressAllocator@@QEAA-AU_DXGK_PTE@@_K@Z.c)
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1400D7DF4 (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400D9B1C (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x140105120 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualAddressAllocator::GetNumPde(CVirtualAddressAllocator *this, struct VIDMM_PAGE_DIRECTORY *a2)
{
  __int64 v2; // rax

  v2 = (*(_DWORD *)a2 >> 8) & 0x1F;
  if ( (*(_DWORD *)a2 & 0x10) != 0 )
    return *(unsigned int *)(32 * v2 + *((_QWORD *)this + 16) + 16);
  else
    return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 40320LL) + 8 * v2)
                           + 48LL * (*(_DWORD *)a2 & 7)
                           + 208);
}
