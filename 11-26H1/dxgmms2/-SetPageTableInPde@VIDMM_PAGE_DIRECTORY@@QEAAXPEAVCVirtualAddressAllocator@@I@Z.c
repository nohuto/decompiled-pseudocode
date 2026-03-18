/*
 * XREFs of ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1400DC714
 * Callers:
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@PEBUCOMMIT_VA_STATE@@_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400AA114 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DC464 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@PEBUCOMMIT_VA_STATE@@_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1401257B4 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGE_DIRECTORY::SetPageTableInPde(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3)
{
  __int64 v3; // r10
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx

  v3 = 8LL * a3;
  v4 = 16LL * a3;
  *(_QWORD *)(v4 + *((_QWORD *)this + 6) + 8) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 7) + v3) + 8LL) >> 12;
  v5 = *(unsigned int *)(32LL * ((*(_DWORD *)this >> 8) & 0x1F) + *((_QWORD *)a2 + 16) + 28);
  *(_QWORD *)(v4 + *((_QWORD *)this + 6)) = (32 * v5) ^ (*(_QWORD *)(v4 + *((_QWORD *)this + 6)) ^ (32 * v5)) & 0xFFFFFFFFFFFFFC1FuLL;
  *(_QWORD *)(v4 + *((_QWORD *)this + 6)) = *(_QWORD *)(v4 + *((_QWORD *)this + 6)) & 0xFFFFFFFFFFFE07FFuLL | (8LL * (**(_DWORD **)(v3 + *((_QWORD *)this + 7)) & 0x1F00));
  v6 = *((_QWORD *)this + 6);
  if ( (**(_DWORD **)(v3 + *((_QWORD *)this + 7)) & 0x40) != 0 )
    *(_QWORD *)(v4 + v6) = *(_QWORD *)(v4 + v6) & 0xFFFFFFFFFFF9FFFFuLL | 0x20000;
  else
    *(_QWORD *)(v4 + v6) &= 0xFFFFFFFFFFF9FFFFuLL;
}
