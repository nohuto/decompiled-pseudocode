/*
 * XREFs of ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@PEBU_DXGK_PTE@@@Z @ 0x1400D5894
 * Callers:
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400D4590 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DC7DC (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x140105818 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z @ 0x140113140 (-Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x1400D5AD4 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@2IIPEBU_DXGK_PTE@@5II2W4_DXGK_PAGETABLEUPDATEMODE@@2U_DXGK_UPDATEPAGETABLEFLAGS@@2@Z @ 0x1400D5DA0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_AL.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@EE@Z @ 0x140106574 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        struct _DXGK_UPDATEPAGETABLEFLAGS a6,
        const struct _DXGK_PTE *a7)
{
  VIDMM_GLOBAL *v7; // r14
  enum _DXGK_PAGETABLEUPDATEMODE v12; // ecx
  unsigned __int64 v13; // rbx
  __int64 v14; // rsi
  int v15; // ecx
  __int64 v16; // rcx
  CVirtualAddressAllocator *v18; // r10
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  struct VIDMM_MAPPED_VA_RANGE *v22; // rdx
  __int128 v23; // [rsp+90h] [rbp-11h] BYREF
  char v24; // [rsp+A0h] [rbp-1h]
  int v25; // [rsp+A4h] [rbp+3h]
  struct VIDMM_ALLOC *v26; // [rsp+F0h] [rbp+4Fh] BYREF
  unsigned __int64 v27; // [rsp+F8h] [rbp+57h] BYREF

  v7 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 12);
  v24 = 1;
  LODWORD(v26) = 0;
  v27 = 0LL;
  v23 = 0LL;
  VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
    this,
    a2,
    (unsigned int *)&v26,
    &v27,
    (struct VIDMM_SYSTEM_ADDRESS_CONTEXT *)&v23);
  if ( *((_BYTE *)v7 + 41068) )
    v12 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
  else
    v12 = (int)(*(_DWORD *)this << 15) >> 29;
  v13 = v27;
  VIDMM_GLOBAL::UpdatePageTable(
    v7,
    this,
    *((struct VIDMM_PROCESS **)a2 + 13),
    0LL,
    0LL,
    0LL,
    0LL,
    a3,
    a4,
    a7,
    0LL,
    (*(_DWORD *)this >> 8) & 0x1F,
    (unsigned int)v26,
    v27,
    v12,
    a5,
    a6,
    0LL);
  v14 = *((_QWORD *)a2 + 12);
  if ( *(_BYTE *)(v14 + 41068) )
    v15 = 0;
  else
    v15 = (int)(*(_DWORD *)this << 15) >> 29;
  if ( !*(_BYTE *)(v14 + 41069) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 85LL, 2LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x1400D5ACCLL);
  }
  *(_BYTE *)(v14 + 41069) = v25 != 0;
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      v18 = *(CVirtualAddressAllocator **)(v14 + 8LL * ((*(_DWORD *)this >> 8) & 0x1F) + 40544);
      if ( (*(_DWORD *)this & 0x100000) == 0 )
      {
        v19 = *(_QWORD *)(v14 + 41128);
        v20 = *((_QWORD *)this + 3);
        v26 = 0LL;
        v21 = *(_QWORD *)(v19 + 112);
        *(_QWORD *)(v19 + 112) = *(_QWORD *)(v19 + 104) + *(unsigned int *)(*(_QWORD *)v20 + 16LL);
        v22 = *(struct VIDMM_MAPPED_VA_RANGE **)(v14 + 41128);
        *((_DWORD *)v22 + 18) = *((_DWORD *)v22 + 18) & 0xFFFFFC0F | (*(_DWORD *)this >> 4) & 0x1F0;
        CVirtualAddressAllocator::UncommitVirtualAddressRange(v18, v22, &v26, 1u, 0);
        *(_QWORD *)(*(_QWORD *)(v14 + 41128) + 112LL) = v21;
      }
    }
  }
  else
  {
    v16 = *(_QWORD *)(*(_QWORD *)(v14 + 40320) + 8LL * ((*(_DWORD *)this >> 8) & 0x1F));
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, __int128 *))(*(_QWORD *)v16 + 24LL))(
      v16,
      **((_QWORD **)this + 3),
      v13,
      &v23);
  }
  return 0LL;
}
