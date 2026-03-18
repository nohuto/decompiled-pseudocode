/*
 * XREFs of ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1400D87F8
 * Callers:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@21U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1400A0BA8 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFE.c)
 *     ?NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2III_KPEB_K@Z @ 0x1400A1848 (-NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2II.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z @ 0x1400D83E4 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE.c)
 * Callees:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1400CC7D4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct VIDMM_MAPPED_VA_RANGE *__fastcall VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
        VIDMM_PAGING_PROCESS *this,
        unsigned int a2,
        unsigned __int64 a3,
        struct VIDMM_GLOBAL_ALLOC *a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        const struct _DXGK_ADL *a8,
        unsigned __int8 *a9,
        unsigned __int64 a10)
{
  __int64 v10; // r13
  unsigned __int8 v14; // r8
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // r9
  CVirtualAddressAllocator *v20; // r12
  __int64 v21; // rax
  __int64 v22; // rdi
  struct VIDMM_MAPPED_VA_RANGE *result; // rax
  int v24; // eax
  int v25; // [rsp+B8h] [rbp+10h]

  v10 = a2;
  v25 = 1;
  v14 = 0;
  if ( a6 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40320LL) + 8LL * a2);
    v16 = *(_QWORD *)(*(_QWORD *)(v15 + 1752) + 8LL * (a6 - 1));
    v17 = v16 + 132;
    if ( !v16 )
      v17 = 124LL;
    if ( *(_DWORD *)v17 == 0x10000 && ((*(_BYTE *)(v15 + 558) >> 5) & ((unsigned __int16)(a5 | a3) == 0LL)) != 0 )
    {
      v18 = *(_DWORD *)(*(_QWORD *)a4 + 32LL);
      if ( v18 )
      {
        if ( !(_WORD)v18 )
        {
          v14 = 1;
          v25 = 2;
        }
      }
    }
  }
  v19 = *((_QWORD *)this + 2);
  v20 = (CVirtualAddressAllocator *)*((_QWORD *)this + v10 + 4);
  *a9 = v14;
  v21 = CVirtualAddressAllocator::MapVirtualAddressRange(
          v20,
          a4,
          a5,
          3u,
          a3,
          0LL,
          *(_QWORD *)(v19 + 16LL * v14 + 41080),
          *(_QWORD *)(v19 + 16 * (v14 + 2568LL)),
          v14 != 0 ? 0x10000 : 4096,
          (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)1LL,
          a10,
          v10,
          0LL,
          0,
          0);
  v22 = v21;
  if ( v21 )
  {
    *(_DWORD *)(v21 + 72) |= 0x2000u;
    *(_QWORD *)(v21 + 48) = 0LL;
    a9 = 0LL;
    v24 = CVirtualAddressAllocator::CommitVirtualAddressRange(
            v20,
            v21,
            (unsigned int)v10,
            a6,
            a7,
            a8,
            0,
            &a9,
            0LL,
            v25,
            0LL);
    if ( v24 < 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 75LL, this, v22, v24);
      WdLogGlobalForLineNumber = 213;
    }
    return (struct VIDMM_MAPPED_VA_RANGE *)v22;
  }
  else
  {
    WdLogSingleEntry3(4LL, v20, a3, a4);
    result = 0LL;
    WdLogGlobalForLineNumber = 10090;
  }
  return result;
}
