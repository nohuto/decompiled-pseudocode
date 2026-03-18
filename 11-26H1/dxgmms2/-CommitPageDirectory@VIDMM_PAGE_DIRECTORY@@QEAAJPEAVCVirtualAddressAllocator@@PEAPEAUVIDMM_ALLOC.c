/*
 * XREFs of ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE298
 * Callers:
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE52C (-PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBA_NXZ @ 0x140039020 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBA_NXZ.c)
 *     ?PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU3@@Z @ 0x1400CE330 (-PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitPageDirectory(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_ALLOC **a3)
{
  __int64 v5; // rdx
  struct VIDMM_ALLOC **v6; // r8
  struct VIDMM_ALLOC *v7; // r9
  VIDMM_GLOBAL *v8; // rcx
  bool v10; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) && this[3] != v7 )
  {
    v8 = *(VIDMM_GLOBAL **)(v5 + 96);
    v10 = (char)v7;
    LODWORD(v7) = VIDMM_GLOBAL::PageInPageTableOrDirectory(
                    v8,
                    (struct VIDMM_PAGE_TABLE_BASE *)this,
                    this[4],
                    (*(_DWORD *)(v5 + 152) & 4) != 0,
                    &v10,
                    v6);
    if ( (int)v7 >= 0 && (*(_DWORD *)this & 0x10) != 0 )
      ++*(_QWORD *)(32 * (((unsigned __int64)*(unsigned int *)this >> 8) & 0x1F) + *((_QWORD *)a2 + 16) + 8);
  }
  return (unsigned int)v7;
}
