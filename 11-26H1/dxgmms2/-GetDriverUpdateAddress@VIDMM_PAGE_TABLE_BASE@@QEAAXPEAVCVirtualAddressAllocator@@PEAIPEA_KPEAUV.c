/*
 * XREFs of ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x1400D5AD4
 * Callers:
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400D3C74 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1400D3F00 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@PEBU_DXGK_PTE@@@Z @ 0x1400D5894 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1401053E0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 * Callees:
 *     ?VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z @ 0x140038928 (-VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z @ 0x1400D8A54 (-MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?EnterUpdatePageTable@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@_N@Z @ 0x140115F18 (-EnterUpdatePageTable@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@_N@Z.c)
 *     InitializeAdlForPageTable @ 0x140117D94 (InitializeAdlForPageTable.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        struct VIDMM_SYSTEM_ADDRESS_CONTEXT *a5)
{
  __int64 v5; // rsi
  unsigned int v10; // ebp
  unsigned __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 AllocGpuVirtualAddress; // rax
  int v17; // eax
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rbx
  bool MustFlushTlbOnValidTransition; // al
  unsigned int v23; // r10d
  __int128 v24; // [rsp+60h] [rbp-38h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+10h] BYREF

  v5 = *((_QWORD *)a2 + 12);
  v10 = 0;
  if ( *(_BYTE *)(v5 + 41068) || (v11 = *(unsigned int *)this, (v12 = (int)((_DWORD)v11 << 15) >> 29) == 0) )
  {
    v13 = *(unsigned __int8 *)(v5 + 41069);
    if ( !(_BYTE)v13 )
    {
      *((_DWORD *)a5 + 5) = v13;
      v14 = *(_QWORD *)(v5 + 40320);
      *(_BYTE *)(v5 + 41069) = 1;
      v15 = *(_QWORD *)(v14 + 8LL * ((*(_DWORD *)this >> 8) & 0x1F));
      AllocGpuVirtualAddress = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 16LL))(
                                 v15,
                                 **((_QWORD **)this + 3));
      goto LABEL_5;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 85LL, 1LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
LABEL_13:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 85LL, 1LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x1400D5D8BLL);
  }
  if ( v12 != 1 )
  {
    v17 = *(unsigned __int8 *)(v5 + 41069);
    if ( !(_BYTE)v17 )
    {
      *((_DWORD *)a5 + 5) = v17;
      *(_BYTE *)(v5 + 41069) = 1;
      AllocGpuVirtualAddress = *((_QWORD *)this + 1);
      v10 = (*(_DWORD *)this >> 21) & 0x3F;
      goto LABEL_5;
    }
    goto LABEL_13;
  }
  v18 = *(_QWORD *)(v5 + 8 * ((v11 >> 8) & 0x1F) + 40544);
  if ( (v11 & 0x100000) != 0 )
  {
    *((_DWORD *)a5 + 5) = *(unsigned __int8 *)(v5 + 41069);
    *(_BYTE *)(v5 + 41069) = 1;
    AllocGpuVirtualAddress = VidMmGetAllocGpuVirtualAddress(
                               *((const struct VIDMM_ALLOC **)this + 4),
                               (*(_DWORD *)this >> 8) & 0x1F);
  }
  else
  {
    EnterUpdatePageTable((struct VIDMM_GLOBAL *)v5, a5, 0);
    v10 = *(_DWORD *)((-(__int64)((*(_DWORD *)this & 7) != 0) & 0xFFFFFFFFFFFFFFFCuLL)
                    + 28
                    + 32LL * ((*(_DWORD *)this >> 8) & 0x1F)
                    + *((_QWORD *)a2 + 16));
    v25 = 0LL;
    v24 = 0LL;
    InitializeAdlForPageTable((struct _DXGK_ADL *)&v24);
    v19 = *(_QWORD *)(v5 + 41128);
    v20 = *(_QWORD *)(v19 + 112);
    *(_QWORD *)(v19 + 112) = *(_QWORD *)(v19 + 104) + *(unsigned int *)(**((_QWORD **)this + 3) + 16LL);
    v21 = *(_QWORD *)(v5 + 41128);
    *(_DWORD *)(v21 + 72) = *(_DWORD *)(v21 + 72) & 0xFFFFFC0F | (*(_DWORD *)this >> 4) & 0x1F0;
    MustFlushTlbOnValidTransition = VIDMM_GLOBAL::MustFlushTlbOnValidTransition(
                                      (VIDMM_GLOBAL *)v5,
                                      (*(_DWORD *)this >> 8) & 0x1F);
    CVirtualAddressAllocator::CommitVirtualAddressRange(
      v18,
      v21,
      v23,
      v10,
      0LL,
      &v24,
      MustFlushTlbOnValidTransition,
      &v25,
      0LL,
      0,
      0LL);
    *(_QWORD *)(*(_QWORD *)(v5 + 41128) + 112LL) = v20;
    AllocGpuVirtualAddress = *(_QWORD *)(v21 + 104);
  }
LABEL_5:
  *a3 = v10;
  *a4 = AllocGpuVirtualAddress;
}
