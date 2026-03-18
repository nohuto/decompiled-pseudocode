/*
 * XREFs of ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x140105818
 * Callers:
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1401053E0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBA_NXZ @ 0x140039020 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBA_NXZ.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D47A8 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@PEBU_DXGK_PTE@@@Z @ 0x1400D5894 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 */

void __fastcall VIDMM_PAGE_TABLE::EvictPageTable(
        __int64 ****this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3)
{
  struct CVirtualAddressAllocator *v5; // rdx
  char v6; // r9
  VIDMM_GLOBAL *v7; // rdi
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // r8

  if ( VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) )
  {
    v7 = (VIDMM_GLOBAL *)*((_QWORD *)v5 + 12);
    v8 = *(_QWORD *)(*((_QWORD *)v7 + 5040) + 8LL * ((*(_DWORD *)this >> 8) & 0x1F));
    if ( (**(_DWORD **)(v8 + 560) & 8) != 0 && v6 )
      VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
        (VIDMM_PAGE_TABLE *)this,
        v5,
        0,
        *(_DWORD *)(((*(_DWORD *)this & 0x40) != 0 ? 4 : 0) + v8 + 200),
        a3,
        (struct _DXGK_UPDATEPAGETABLEFLAGS)((*(_DWORD *)this & 0x40) != 0 ? 12 : 4),
        0LL);
    *((_DWORD *)this[3] + 6) |= 0x10000u;
    *((_BYTE *)this[3] + 42) = 0;
    VIDMM_GLOBAL::EvictOneAllocation(v7, this[4], 0LL);
    *((_DWORD *)this[3] + 6) &= ~0x10000u;
    *(_DWORD *)this &= 0xF81FFFFF;
    this[1] = 0LL;
    if ( byte_14008A204 < 0 )
      McTemplateK0x_EtwWriteTransfer(v9, &EventEvictPageTable, v10, this[4]);
  }
}
