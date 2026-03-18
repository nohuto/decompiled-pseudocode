/*
 * XREFs of ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400D9B1C
 * Callers:
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400D9B1C (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x140037560 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400D9B1C (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z @ 0x1400D9BF4 (-MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z.c)
 */

int __fastcall VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2)
{
  unsigned int NumPde; // eax
  unsigned int v5; // r9d
  unsigned int v6; // ebp
  __int64 i; // rbx
  __int64 v8; // rax
  VIDMM_PAGE_DIRECTORY *v9; // rcx
  int result; // eax

  NumPde = CVirtualAddressAllocator::GetNumPde(a2, this);
  v5 = *(_DWORD *)this;
  v6 = 2 * NumPde;
  if ( (*(_DWORD *)this & 0x2020) != 0x2020 )
    v6 = NumPde;
  if ( (v5 & 0x100000) == 0 )
    return 0;
  if ( (v5 & 0x1C000) != 0x4000 || (result = MapPageTableToGpuVa(a2, this, (v5 >> 8) & 0x1F), result >= 0) )
  {
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
    {
      v8 = *((_QWORD *)this + 7);
      v9 = *(VIDMM_PAGE_DIRECTORY **)(v8 + 8 * i);
      if ( v9 && (*(_DWORD *)v9 & 0x100000) != 0 )
      {
        if ( (*(_DWORD *)this & 0x20) != 0 )
        {
          result = MapPageTableToGpuVa(
                     a2,
                     *(struct VIDMM_PAGE_TABLE_BASE **)(v8 + 8 * i),
                     (*(_DWORD *)this >> 8) & 0x1F);
          if ( result < 0 )
            return result;
        }
        else
        {
          VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(v9, a2);
        }
      }
    }
    return 0;
  }
  return result;
}
