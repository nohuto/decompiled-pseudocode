/*
 * XREFs of ?MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z @ 0x1400D9BF4
 * Callers:
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400D9B1C (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z @ 0x140038928 (-VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003B2E8 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?VidMmiInitializeAdlForPfn@@YAXPEAU_DXGK_ADL@@_K1@Z @ 0x1400A4C38 (-VidMmiInitializeAdlForPfn@@YAXPEAU_DXGK_ADL@@_K1@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1400CC7D4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 */

__int64 __fastcall MapPageTableToGpuVa(
        struct CVirtualAddressAllocator *a1,
        struct VIDMM_PAGE_TABLE_BASE *a2,
        unsigned int a3)
{
  __int64 v4; // rbp
  void *const *v6; // rcx
  __int64 v7; // r14
  unsigned __int64 LogicalAddress; // rax
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // esi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int128 v15; // [rsp+80h] [rbp-38h] BYREF
  __int64 v16; // [rsp+C8h] [rbp+10h] BYREF

  v4 = a3;
  if ( VidMmGetAllocGpuVirtualAddress(*((const struct VIDMM_ALLOC **)a2 + 4), a3)
    || CVirtualAddressAllocator::MapVirtualAddressRange(
         a1,
         a2,
         0LL,
         5u,
         *(unsigned int *)(**((_QWORD **)a2 + 3) + 16LL),
         0LL,
         *(_QWORD *)(*((_QWORD *)a1 + 12) + 41080LL),
         *(_QWORD *)(*((_QWORD *)a1 + 12) + 41088LL),
         0x1000u,
         (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)1LL,
         0LL,
         v4,
         0LL,
         0,
         0) )
  {
    v6 = (void *const *)*((_QWORD *)a2 + 3);
    v7 = *(_QWORD *)(*((_QWORD *)a2 + 4) + 648LL);
    v15 = 0LL;
    if ( (*((_DWORD *)*v6 + 14) & 4) != 0 )
    {
      LogicalAddress = SysMmGetLogicalAddress(v6[43]);
      VidMmiInitializeAdlForPfn((struct _DXGK_ADL *)&v15, *((_QWORD *)a2 + 1) >> 12, LogicalAddress);
    }
    else
    {
      LODWORD(v15) = *((_DWORD *)*v6 + 4) >> 12;
      *((_QWORD *)&v15 + 1) = *((_QWORD *)a2 + 1) >> 12;
      DWORD1(v15) = 1;
    }
    v9 = *((_QWORD *)a1 + 16);
    v16 = 0LL;
    v10 = CVirtualAddressAllocator::CommitVirtualAddressRange(
            a1,
            v7 - 32,
            (unsigned int)v4,
            *(unsigned int *)(32 * v4 + v9 + 28),
            0LL,
            &v15,
            0,
            &v16,
            0LL,
            1,
            0LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(1LL, v10);
      WdLogGlobalForLineNumber = 4268;
      DxgkLogInternalTriageEvent(v14, 0x40000LL);
      return v11;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4236;
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    return 3221225473LL;
  }
}
