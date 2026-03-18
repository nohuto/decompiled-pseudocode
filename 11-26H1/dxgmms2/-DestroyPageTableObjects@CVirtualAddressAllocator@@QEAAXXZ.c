/*
 * XREFs of ?DestroyPageTableObjects@CVirtualAddressAllocator@@QEAAXXZ @ 0x1400AA030
 * Callers:
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x14009B8C0 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1401050F8 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 */

void __fastcall CVirtualAddressAllocator::DestroyPageTableObjects(CVirtualAddressAllocator *this)
{
  unsigned int i; // edi
  __int64 v3; // rbp
  __int64 v4; // rsi
  VIDMM_PAGE_DIRECTORY *v5; // rcx

  if ( *((_QWORD *)this + 16) )
  {
    for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 12) + 6952LL); ++i )
    {
      v3 = *((_QWORD *)this + 16);
      v4 = 32LL * i;
      v5 = *(VIDMM_PAGE_DIRECTORY **)(v4 + v3);
      if ( v5 )
      {
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v5, this, 0LL);
        *(_QWORD *)(v4 + v3) = 0LL;
      }
    }
  }
}
