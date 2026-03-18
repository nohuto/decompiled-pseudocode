/*
 * XREFs of ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400D4590
 * Callers:
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@PEBUCOMMIT_VA_STATE@@_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400AA114 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 *     ?DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@II_K1PEAUVIDMM_ALLOC@@@Z @ 0x1400D4458 (-DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@II_K1PEA.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1400DDDD8 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x140105120 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@PEBUCOMMIT_VA_STATE@@_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1401257B4 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     Feature_CommitPagetableInstrumentation__private_IsEnabledPreCheck @ 0x14003E51C (Feature_CommitPagetableInstrumentation__private_IsEnabledPreCheck.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D47A8 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D51C0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@PEBU_DXGK_PTE@@@Z @ 0x1400D5894 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 */

void __fastcall VIDMM_PAGE_TABLE::DestroyPageTable(
        struct VIDMM_GLOBAL_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3)
{
  struct VIDMM_GLOBAL_ALLOC *v6; // rax
  VIDMM_GLOBAL *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  struct VIDMM_GLOBAL_ALLOC *v12; // r8
  struct VIDMM_GLOBAL_ALLOC *v13; // rcx
  struct VIDMM_GLOBAL_ALLOC *v14; // rcx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-58h] BYREF

  Feature_CommitPagetableInstrumentation__private_IsEnabledPreCheck();
  WdLogSingleEntry3(4LL, this, this[4], this[3]);
  v6 = this[3];
  v7 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 12);
  WdLogGlobalForLineNumber = 5817;
  if ( v6 && (*(_DWORD *)(*(_QWORD *)v6 + 56LL) & 1) != 0 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)v7 + 5040) + 8LL * ((*(_DWORD *)this >> 8) & 0x1F));
    if ( (**(_DWORD **)(v8 + 560) & 8) != 0 )
      VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
        (VIDMM_PAGE_TABLE *)this,
        a2,
        0,
        *(_DWORD *)(((*(_DWORD *)this & 0x40) != 0 ? 4 : 0) + v8 + 200),
        a3,
        (struct _DXGK_UPDATEPAGETABLEFLAGS)((*(_DWORD *)this & 0x40) != 0 ? 12 : 4),
        0LL);
    *((_DWORD *)this[3] + 6) |= 0x10000u;
    *((_BYTE *)this[3] + 42) = 0;
    VIDMM_GLOBAL::EvictOneAllocation(v7, this[4], 0);
    *((_DWORD *)this[3] + 6) &= ~0x10000u;
    *(_DWORD *)this &= 0xF81FFFFF;
    this[1] = 0LL;
    if ( byte_14008A204 < 0 )
      McTemplateK0x_EtwWriteTransfer(v9, &EventEvictPageTable, v10, this[4]);
  }
  if ( this[4] )
  {
    v11 = *((_QWORD *)a2 + 13);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v11 + 16), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(v7, this[4], 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    KeUnstackDetachProcess(&ApcState);
    this[4] = 0LL;
  }
  v12 = this[3];
  if ( v12 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation(v7, 0LL, v12, 0);
    this[3] = 0LL;
  }
  v13 = this[5];
  if ( v13 )
  {
    operator delete(v13);
    this[5] = 0LL;
  }
  v14 = this[6];
  if ( v14 )
  {
    operator delete(v14);
    this[6] = 0LL;
  }
  operator delete(this);
}
