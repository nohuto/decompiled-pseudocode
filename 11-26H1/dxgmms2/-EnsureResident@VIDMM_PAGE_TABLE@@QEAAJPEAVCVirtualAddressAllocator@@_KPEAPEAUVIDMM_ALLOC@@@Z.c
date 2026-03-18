/*
 * XREFs of ?EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400AA0B4
 * Callers:
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@PEBUCOMMIT_VA_STATE@@_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400AA114 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DC7DC (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBA_NXZ @ 0x140039020 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBA_NXZ.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CEC00 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::EnsureResident(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        __int64 a3,
        struct VIDMM_ALLOC **a4)
{
  struct CVirtualAddressAllocator *v5; // rdx
  struct VIDMM_ALLOC **v6; // r9
  int v7; // edi
  __int64 result; // rax

  if ( !VIDMM_PAGE_TABLE_BASE::IsResident(this) )
  {
    v7 = VIDMM_PAGE_TABLE::CommitPageTable(this, v5, v6);
    if ( v7 < 0 )
    {
      WdLogSingleEntry0(3LL);
      result = (unsigned int)v7;
      WdLogGlobalForLineNumber = 6581;
      return result;
    }
    *(_DWORD *)this &= ~0x20000u;
  }
  return 0LL;
}
