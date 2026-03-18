/*
 * XREFs of ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x140041F78
 * Callers:
 *     ?ResetAddressSpaceForFailure@CVirtualAddressAllocator@@QEAAXI@Z @ 0x1400AAFA4 (-ResetAddressSpaceForFailure@CVirtualAddressAllocator@@QEAAXI@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@@Z @ 0x14011C720 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@@Z.c)
 * Callees:
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1401053E0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 */

void __fastcall CVirtualAddressAllocator::EvictRootPageTable(CVirtualAddressAllocator *this, unsigned int a2, char a3)
{
  __int64 v3; // r9
  VIDMM_PAGE_DIRECTORY *v4; // r10

  v3 = 32LL * a2;
  v4 = *(VIDMM_PAGE_DIRECTORY **)(v3 + *((_QWORD *)this + 16));
  if ( v4 )
    VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v4, this, 0LL, v3, a3);
}
