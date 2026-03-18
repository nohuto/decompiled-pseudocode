/*
 * XREFs of ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400D3C74
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DC7DC (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z @ 0x140113140 (-Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x1400D5AD4 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@2IIPEBU_DXGK_PTE@@5II2W4_DXGK_PAGETABLEUPDATEMODE@@2U_DXGK_UPDATEPAGETABLEFLAGS@@2@Z @ 0x1400D5DA0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_AL.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@EE@Z @ 0x140106574 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PAGE_TABLE::UpdatePageTable(
        VIDMM_PAGE_TABLE_BASE *a1,
        VIDMM_GLOBAL **a2,
        __int64 a3,
        struct VIDMM_GLOBAL_ALLOC ***a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        struct _DXGK_UPDATEPAGETABLEFLAGS a10)
{
  VIDMM_GLOBAL *v10; // r14
  struct VIDMM_ALLOC *v15; // r11
  struct VIDMM_GLOBAL_ALLOC *v16; // r10
  enum _DXGK_PAGETABLEUPDATEMODE v17; // ecx
  unsigned __int64 v18; // rbx
  VIDMM_GLOBAL *v19; // rsi
  int v20; // ecx
  __int64 v21; // rcx
  CVirtualAddressAllocator *v23; // r10
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rbx
  struct VIDMM_MAPPED_VA_RANGE *v27; // rdx
  __int128 v28; // [rsp+90h] [rbp-19h] BYREF
  char v29; // [rsp+A0h] [rbp-9h]
  int v30; // [rsp+A4h] [rbp-5h]
  struct VIDMM_ALLOC *v31; // [rsp+E0h] [rbp+37h] BYREF
  unsigned __int64 v32; // [rsp+E8h] [rbp+3Fh] BYREF

  v10 = a2[12];
  LODWORD(v31) = 0;
  v32 = 0LL;
  v29 = 1;
  v28 = 0LL;
  VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
    a1,
    (struct CVirtualAddressAllocator *)a2,
    (unsigned int *)&v31,
    &v32,
    (struct VIDMM_SYSTEM_ADDRESS_CONTEXT *)&v28);
  v15 = 0LL;
  if ( a6 == 1 )
  {
    v15 = (struct VIDMM_ALLOC *)a4;
    v16 = **a4;
  }
  else
  {
    v16 = 0LL;
    if ( a6 == 3 )
      v16 = (struct VIDMM_GLOBAL_ALLOC *)a4;
  }
  if ( *((_BYTE *)v10 + 41068) )
    v17 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
  else
    v17 = (int)(*(_DWORD *)a1 << 15) >> 29;
  v18 = v32;
  VIDMM_GLOBAL::UpdatePageTable(
    v10,
    a1,
    a2[13],
    *(_QWORD *)(a3 + 16),
    v15,
    v16,
    a5,
    a7,
    a8,
    (const struct _DXGK_PTE *)(*((_QWORD *)a1 + 5) + 16LL * a7),
    0LL,
    (*(_DWORD *)a1 >> 8) & 0x1F,
    (unsigned int)v31,
    v32,
    v17,
    a9,
    a10,
    *(_QWORD *)(a3 + 88));
  v19 = a2[12];
  if ( *((_BYTE *)v19 + 41068) )
    v20 = 0;
  else
    v20 = (int)(*(_DWORD *)a1 << 15) >> 29;
  if ( !*((_BYTE *)v19 + 41069) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 85LL, 2LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x1400D3EF7LL);
  }
  *((_BYTE *)v19 + 41069) = v30 != 0;
  if ( v20 )
  {
    if ( v20 == 1 )
    {
      v23 = (CVirtualAddressAllocator *)*((_QWORD *)v19 + ((*(_DWORD *)a1 >> 8) & 0x1F) + 5068);
      if ( (*(_DWORD *)a1 & 0x100000) == 0 )
      {
        v24 = *((_QWORD *)v19 + 5141);
        v25 = *((_QWORD *)a1 + 3);
        v31 = 0LL;
        v26 = *(_QWORD *)(v24 + 112);
        *(_QWORD *)(v24 + 112) = *(_QWORD *)(v24 + 104) + *(unsigned int *)(*(_QWORD *)v25 + 16LL);
        v27 = (struct VIDMM_MAPPED_VA_RANGE *)*((_QWORD *)v19 + 5141);
        *((_DWORD *)v27 + 18) = *((_DWORD *)v27 + 18) & 0xFFFFFC0F | (*(_DWORD *)a1 >> 4) & 0x1F0;
        CVirtualAddressAllocator::UncommitVirtualAddressRange(v23, v27, &v31, 1u, 0);
        *(_QWORD *)(*((_QWORD *)v19 + 5141) + 112LL) = v26;
      }
    }
  }
  else
  {
    v21 = *(_QWORD *)(*((_QWORD *)v19 + 5040) + 8LL * ((*(_DWORD *)a1 >> 8) & 0x1F));
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, __int128 *))(*(_QWORD *)v21 + 24LL))(
      v21,
      **((_QWORD **)a1 + 3),
      v18,
      &v28);
  }
  return 0LL;
}
