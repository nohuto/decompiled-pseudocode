/*
 * XREFs of ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1400CC7D4
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140047988 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4V.c)
 *     ?CreateVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@_KPEAPEAV1@PEAPEAX@Z @ 0x14004FB50 (-CreateVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@_KPEAPEAV1@PEAPEAX@Z.c)
 *     ?CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_KPEAPEAV1@@Z @ 0x140050228 (-CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_K.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1400A351C (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?MapGpuVaVidMmAlloc@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400A5570 (-MapGpuVaVidMmAlloc@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_S.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400CB330 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PE.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1400D87F8 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_.c)
 *     ?MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z @ 0x1400D9BF4 (-MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKW4_DXGK_PAGESIZE@@5KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400DD45C (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     AddDmaBufferToPool @ 0x1400ED250 (AddDmaBufferToPool.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_N@Z @ 0x14010EFB0 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_AL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140030100 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400CCB80 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@@Z @ 0x1400CD1F4 (-InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUV.c)
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333_N@Z @ 0x1400CD4E8 (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400CD7D4 (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1401061D4 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::MapVirtualAddressRange(
        CVirtualAddressAllocator *a1,
        struct _RTL_AVL_TREE *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a10,
        __int64 a11,
        unsigned int a12,
        void **a13,
        char a14,
        char a15)
{
  bool v16; // zf
  unsigned __int64 v17; // r12
  __int64 v18; // r14
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA v19; // rbx
  char v20; // r13
  int v21; // eax
  struct VIDMM_VAD *v22; // rdi
  void **v23; // rsi
  __int64 v24; // rax
  int v25; // eax
  bool v27; // al
  __int64 v28; // rax
  char *v29; // rdi
  char **v30; // rcx
  char *v31; // rax
  unsigned __int64 v32; // rsi
  int v33; // eax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rcx
  char v38[8]; // [rsp+68h] [rbp-21h] BYREF
  _QWORD *v39; // [rsp+70h] [rbp-19h]
  int v40; // [rsp+78h] [rbp-11h]
  struct VIDMM_VAD *v41; // [rsp+D8h] [rbp+4Fh] BYREF
  struct _RTL_AVL_TREE *v42; // [rsp+E0h] [rbp+57h]
  __int64 v43; // [rsp+E8h] [rbp+5Fh]
  unsigned int v44; // [rsp+F0h] [rbp+67h]

  v44 = a4;
  v43 = a3;
  v42 = a2;
  v16 = *((_QWORD *)a1 + 9) == (_QWORD)KeGetCurrentThread();
  v40 = 0;
  v39 = (_QWORD *)((char *)a1 + 64);
  if ( !v16 )
    DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v38);
  v17 = a6;
  v18 = 0LL;
  v19 = a10.0;
  v20 = 0;
  v41 = 0LL;
  if ( !a6 )
    goto LABEL_4;
  a2 = (struct _RTL_AVL_TREE *)a6;
  v22 = (struct VIDMM_VAD *)*((_QWORD *)a1 + 7);
  v32 = a6 + a5;
  if ( !v22 )
    goto LABEL_4;
  while ( 1 )
  {
    v33 = CompareVadAddressInsideAvl(&a6, (struct _RTL_BALANCED_NODE *)v22);
    if ( v33 >= 0 )
      break;
    v22 = *(struct VIDMM_VAD **)v22;
LABEL_27:
    if ( !v22 )
      goto LABEL_28;
  }
  if ( v33 > 0 )
  {
    v22 = (struct VIDMM_VAD *)*((_QWORD *)v22 + 1);
    goto LABEL_27;
  }
LABEL_28:
  a2 = (struct _RTL_AVL_TREE *)a6;
  if ( !v22 )
  {
LABEL_4:
    v21 = CVirtualAddressAllocator::AllocateVirtualAddressRange(a1, a2, a5, v17, a7, a8, a9, &v41, 1u);
    v22 = v41;
    if ( v21 >= 0 )
    {
      v20 = 1;
      CVirtualAddressAllocator::InsertVadToReservedListForNewVaRange(
        a1,
        v41,
        (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)v19);
    }
    goto LABEL_6;
  }
  v34 = *((_QWORD *)v22 + 4) - 4096LL;
  if ( (*((_DWORD *)v22 + 18) & 0x1000) == 0 )
    v34 = *((_QWORD *)v22 + 4);
  if ( v34 < v32 )
  {
    WdLogSingleEntry3(3LL, a6, v32, v22);
    WdLogGlobalForLineNumber = 2277;
    goto LABEL_34;
  }
  v35 = ((unsigned __int64)*((unsigned int *)v22 + 18) >> 11) & 1;
  if ( v35 != ((*(unsigned __int64 *)&v19 >> 4) & 1) )
  {
    WdLogSingleEntry2(1LL, (unsigned int)v35, (*(unsigned __int64 *)&v19 >> 4) & 1);
    WdLogGlobalForLineNumber = 2302;
    DxgkLogInternalTriageEvent(v36, 0x40000LL);
    goto LABEL_34;
  }
LABEL_6:
  if ( v22 )
  {
    v23 = a13;
    if ( !a13 || (v24 = operator new(24LL, 0x39346956u, 256LL), (*v23 = (void *)v24) != 0LL) )
    {
      v25 = *((_DWORD *)v22 + 18) & 0xF;
      if ( v25 == 3 && (*(_BYTE *)&v19 & 0xC) != 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 2324;
        goto LABEL_41;
      }
      v27 = a15 && v25 == 2;
      if ( v20 )
        v17 = *((_QWORD *)v22 + 3);
      v28 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _BYTE))CVirtualAddressAllocator::MapVadVaRange)(
              a1,
              v22,
              a12,
              v44,
              v42,
              v43,
              v19,
              a11,
              v17,
              a5,
              v27);
      v18 = v28;
      if ( v28 )
      {
        if ( v23 )
        {
          v29 = (char *)v22 + 80;
          *((_QWORD *)*v23 + 2) = v28;
          v30 = (char **)*((_QWORD *)v29 + 1);
          v31 = (char *)*v23;
          if ( *v30 != v29 )
            __fastfail(3u);
          *(_QWORD *)v31 = v29;
          *((_QWORD *)v31 + 1) = v30;
          *v30 = v31;
          *((_QWORD *)v29 + 1) = v31;
        }
        if ( a14 )
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 136));
        goto LABEL_15;
      }
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2346;
      DxgkLogInternalTriageEvent(v37, 0x40000LL);
    }
LABEL_41:
    if ( v20 )
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(a1, v22);
    if ( v23 )
    {
      operator delete(*v23);
      *v23 = 0LL;
    }
LABEL_34:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
    return 0LL;
  }
  else
  {
LABEL_15:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
    return v18;
  }
}
