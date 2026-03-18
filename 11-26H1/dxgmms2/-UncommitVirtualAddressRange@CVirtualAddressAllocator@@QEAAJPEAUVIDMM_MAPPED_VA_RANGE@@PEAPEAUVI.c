/*
 * XREFs of ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@EE@Z @ 0x140106574
 * Callers:
 *     ?MakeOneVirtualAddressRangeNotResidentSubrange@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_K1@Z @ 0x14009FD24 (-MakeOneVirtualAddressRangeNotResidentSubrange@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_K1@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE814 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400D3C74 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1400D3F00 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@PEBU_DXGK_PTE@@@Z @ 0x1400D5894 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E6030 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x140105914 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x140105B64 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x140105F78 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140106E1C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140038F20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x14003BC10 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?SysMmUnmapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@IPEAU_IOMMU_DMA_DOMAIN@@_K2@Z @ 0x14004CFC0 (-SysMmUnmapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@IPEAU_IOMMU_DMA_DOMAIN@@_K2@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 */

__int64 __fastcall CVirtualAddressAllocator::UncommitVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        struct VIDMM_ALLOC **a3,
        char a4,
        unsigned __int8 a5)
{
  unsigned int v7; // ecx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rbx
  char v14; // al
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  struct VIDMM_ALLOC **v20; // r14
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r15
  int v23; // eax
  __int64 v24; // rcx
  struct VIDMM_ALLOC **v26; // [rsp+58h] [rbp-C0h]
  __int64 v27; // [rsp+60h] [rbp-B8h] BYREF
  VIDMM_PAGE_DIRECTORY *v28; // [rsp+68h] [rbp-B0h]
  _QWORD v29[12]; // [rsp+70h] [rbp-A8h] BYREF

  v26 = a3;
  v7 = *((_DWORD *)a2 + 18);
  v8 = 0;
  v9 = *((_QWORD *)a2 + 13);
  v10 = *((_QWORD *)this + 12);
  v11 = *((_QWORD *)a2 + 14) - v9;
  v12 = (v7 >> 4) & 0x3F;
  v13 = *(_QWORD *)(*(_QWORD *)(v10 + 40320) + 8 * v12);
  v14 = *(_BYTE *)(v13 + 556);
  if ( (v14 & 0x10) == 0 )
  {
    if ( (v14 & 0x20) == 0 )
      goto LABEL_11;
    if ( (v7 & 0x800) == 0 )
      return 0LL;
    v18 = SysMmUnmapLogicalAddressRange(
            *(struct SYSMM_ADAPTER **)(*(_QWORD *)(v10 + 24) + 224LL),
            (unsigned int)v12,
            0LL);
    v8 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry1(1LL, v18);
      WdLogGlobalForLineNumber = 4494;
      goto LABEL_5;
    }
LABEL_10:
    a3 = v26;
    *((_DWORD *)a2 + 18) &= ~0x800u;
LABEL_11:
    if ( (*(_BYTE *)(v13 + 556) & 4) != 0 )
    {
      v27 = 0LL;
      v20 = (struct VIDMM_ALLOC **)&v27;
      if ( a3 )
        v20 = a3;
      v21 = v11 >> 12;
      *v20 = 0LL;
      v22 = *((_QWORD *)a2 + 13);
      v28 = *(VIDMM_PAGE_DIRECTORY **)(32 * v12 + *((_QWORD *)this + 16));
      if ( v28 )
      {
        memset(v29, 0, sizeof(v29));
        LODWORD(v29[9]) = -1;
        if ( a5 )
        {
          if ( (*(_BYTE *)(v13 + 558) & 0x10) != 0 )
          {
            BYTE1(v29[10]) = 1;
            v29[0] = v29[0] & 0xFFFFFFFFFFCFFFFFuLL | 0x200000;
          }
          BYTE2(v29[10]) = 1;
        }
        if ( (**(_DWORD **)(v13 + 560) & 0x80u) != 0 )
          HIWORD(v29[9]) = 257;
        v23 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
                v28,
                (VIDMM_GLOBAL **)this,
                (const struct COMMIT_VA_STATE *)v29,
                0LL,
                v22,
                v21,
                0LL,
                0,
                v20);
        v8 = v23;
        if ( v23 < 0 && *v20 && !v26 )
        {
          WdLogSingleEntry2(1LL, v23, v20);
          WdLogGlobalForLineNumber = 4549;
          DxgkLogInternalTriageEvent(v24, 0x40000LL);
        }
        if ( a4 )
          CVirtualAddressAllocator::FlushGpuVaTlb(this, v12, v22, v22 + (v21 << 12));
      }
      *((_DWORD *)a2 + 18) &= 0xFFFFEBFF;
      return v8;
    }
    return 0LL;
  }
  if ( (v7 & 0x800) == 0 )
    return 0LL;
  RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(
                        *(DXGPROCESS **)(*((_QWORD *)this + 13) + 72LL),
                        *(_DWORD *)(*(_QWORD *)(v10 + 24) + 240LL));
  v16 = SysMmUnmapLogicalAddressRange(
          *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)RenderAdapterInfo + 10) + 16LL) + 224LL),
          (unsigned int)v12,
          *((struct _IOMMU_DMA_DOMAIN **)RenderAdapterInfo + 5));
  v8 = v16;
  if ( v16 >= 0 )
    goto LABEL_10;
  WdLogSingleEntry1(1LL, v16);
  WdLogGlobalForLineNumber = 4474;
LABEL_5:
  DxgkLogInternalTriageEvent(v17, 0x40000LL);
  return v8;
}
