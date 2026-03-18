/*
 * XREFs of AddDmaBufferToPool @ 0x1400ED250
 * Callers:
 *     VidMmInitDmaPool @ 0x1400A47A0 (VidMmInitDmaPool.c)
 *     VidMmResizeBuffersInPool @ 0x1400A4950 (VidMmResizeBuffersInPool.c)
 *     VidMmAcquireDmaBuffer @ 0x1400EB3D0 (VidMmAcquireDmaBuffer.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400395A0 (-AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x140039814 (-ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     McTemplateK0pppxxxp_EtwWriteTransfer @ 0x140046B60 (McTemplateK0pppxxxp_EtwWriteTransfer.c)
 *     ?AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14009CFDC (-AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400CB248 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1400CC7D4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D51C0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DE210 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX77KE7PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAVVIDMM_FENCE_STORAGE_PAGE@@PEAPEAUVIDMM_GLOBAL_ALLOC@@PEAE@Z @ 0x1400DEEC4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SE.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400E4860 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUE.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400E4D38 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400E72E0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall AddDmaBufferToPool(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r12
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v14; // rcx
  char *v15; // rsi
  unsigned int v16; // r8d
  int v17; // eax
  __int64 v18; // r10
  int v19; // edx
  struct VIDMM_DEVICE *v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  struct VIDMM_ALLOC **v24; // rdi
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct _VIDSCH_SYNC_OBJECT **v33; // r13
  VIDMM_GLOBAL *v34; // rcx
  int Resident; // eax
  VIDMM_GLOBAL *v36; // rcx
  __int64 v37; // r8
  void *ContiguousNodeMemory; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rax
  _QWORD *v45; // r8
  VIDMM_PROCESS_ADAPTER_INFO *v46; // rdi
  __int64 v47; // rax
  struct _ERESOURCE *v48; // rcx
  char **v49; // rax
  __int64 v50; // rdx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rdi
  VIDMM_MAPPED_VA_RANGE *v52; // rax
  __int64 v53; // rcx
  VIDMM_MAPPED_VA_RANGE *v54; // r13
  __int64 v55; // rax
  struct _ERESOURCE *v56; // rcx
  __int64 v57; // rcx
  struct VIDMM_ALLOC *v58; // rdx
  struct VIDMM_GLOBAL_ALLOC *v59; // r8
  void *v60; // rcx
  unsigned __int64 v61; // [rsp+D8h] [rbp+7h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v62; // [rsp+E0h] [rbp+Fh] BYREF
  struct VIDMM_MULTI_ALLOC *v63[8]; // [rsp+E8h] [rbp+17h] BYREF
  char v64; // [rsp+138h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+140h] [rbp+6Fh]
  unsigned int v66; // [rsp+150h] [rbp+7Fh]

  v66 = a4;
  LODWORD(NumberOfBytes) = a2;
  v4 = a4;
  v5 = a2;
  LODWORD(v6) = a3;
  v8 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a1;
    WdLogGlobalForLineNumber = 429;
  }
  if ( *(_DWORD *)(a1 + 84) > (unsigned int)dword_14008AA90 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    if ( !v9
      || (v10 = *(_QWORD *)(v9 + 24), *(_DWORD *)(v10 + 464) != 2)
      && (*(_DWORD *)(*(_QWORD *)(v10 + 40) + 408LL) & 4) == 0 )
    {
      if ( qword_14008AA78 > qword_14008AA70 || qword_14008AA48 > qword_14008AA40 || qword_14008AA18 > qword_14008AA10 )
      {
        _InterlockedIncrement(&dword_14008A7B8);
        WdLogSingleEntry0(6LL);
        v12 = 445;
LABEL_11:
        WdLogGlobalForLineNumber = v12;
        DxgkLogInternalTriageEvent(v11, 262145LL);
        return 3221225495LL;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 36) & 1) == 0 && !(_DWORD)v6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 456;
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
    return 3221225485LL;
  }
  v15 = (char *)operator new(160LL, 0x32326956u, 64LL);
  if ( !v15 )
  {
    _InterlockedIncrement(&dword_14008A710);
    WdLogSingleEntry0(6LL);
    v12 = 468;
    goto LABEL_11;
  }
  v16 = *(_DWORD *)(a1 + 40);
  if ( v16 )
  {
    if ( (*(_DWORD *)(a1 + 36) & 1) != 0 )
      v17 = ((~*(_BYTE *)(*(_QWORD *)(a1 + 16) + 556LL) & 0x80) << 8) | 0x10000040;
    else
      v17 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 430LL) != 0 ? 72 : 32840;
    v18 = *(_QWORD *)a1;
    v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 444LL);
    if ( (v19 & 8) != 0 || (v19 & 0x10) != 0 )
      v17 |= 4u;
    v20 = *(struct VIDMM_DEVICE **)(a1 + 8);
    v64 = 0;
    v8 = VIDMM_GLOBAL::CreateOneAllocation(
           v18,
           v20,
           *(_DWORD *)(a1 + 32),
           v5,
           v5,
           0,
           0,
           0,
           v16,
           0,
           0,
           0,
           v17,
           0,
           0LL,
           0LL,
           0LL,
           0LL,
           -1610612736,
           0,
           0LL,
           0LL,
           0LL,
           0LL,
           v15 + 48,
           &v64);
    if ( v8 < 0 )
    {
      _InterlockedAdd(&dword_14008A718, 1u);
      WdLogSingleEntry0(6LL);
      v22 = 538;
LABEL_26:
      WdLogGlobalForLineNumber = v22;
      v23 = 262145LL;
LABEL_27:
      DxgkLogInternalTriageEvent(v21, v23);
      goto LABEL_79;
    }
    v24 = (struct VIDMM_ALLOC **)(v15 + 56);
    v8 = VIDMM_GLOBAL::OpenOneAllocation(
           *(VIDMM_GLOBAL **)a1,
           *(struct VIDMM_PROCESS ***)(a1 + 8),
           *((struct VIDMM_GLOBAL_ALLOC **)v15 + 6),
           0LL,
           0,
           0LL,
           (struct VIDMM_ALLOC **)v15 + 7);
    if ( v8 < 0 )
    {
      _InterlockedAdd(&dword_14008A71C, 1u);
      WdLogSingleEntry0(6LL);
      v22 = 556;
      goto LABEL_26;
    }
    if ( (*((_DWORD *)*v24 + 7) & 3) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 36) & 1) != 0 )
      {
        VIDMM_GLOBAL::AllocatePagingBufferResources(*(VIDMM_GLOBAL **)a1, *v24);
      }
      else
      {
        v30 = *((_QWORD *)*v24 + 1);
        v31 = 32LL * *(unsigned int *)(a1 + 32);
        v63[0] = *v24;
        v32 = *(_QWORD *)(v30 + 72);
        v61 = 0LL;
        v33 = *(struct _VIDSCH_SYNC_OBJECT ***)(v31 + v32);
        v34 = *(VIDMM_GLOBAL **)a1;
        v62 = 0LL;
        Resident = VIDMM_GLOBAL::MakeResident(
                     v34,
                     (struct VIDMM_PAGING_QUEUE *)v33,
                     v63,
                     1LL,
                     3,
                     &v61,
                     (unsigned __int64 *)&v62);
        v8 = Resident;
        if ( Resident == 259 )
        {
          v36 = *(VIDMM_GLOBAL **)a1;
          v62 = v33[11];
          v63[0] = (struct VIDMM_MULTI_ALLOC *)v61;
          VIDMM_GLOBAL::WaitForFences(v36, &v62, (const unsigned __int64 *)v63, 1u, 0LL, 0LL);
          v8 = 0;
        }
        else if ( Resident < 0 )
        {
          WdLogSingleEntry1(1LL, *v24);
          v23 = 0x40000LL;
          WdLogGlobalForLineNumber = 588;
          goto LABEL_27;
        }
      }
    }
    LODWORD(v5) = NumberOfBytes;
    v4 = v66;
  }
  else
  {
    v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 2440LL);
    *((_DWORD *)v15 + 18) = 2;
    ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v5, 0LL, v37, 0LL, 1028, 0x80000000);
    *((_QWORD *)v15 + 8) = ContiguousNodeMemory;
    if ( !ContiguousNodeMemory )
    {
      _InterlockedAdd(&dword_14008A724, 1u);
      WdLogSingleEntry0(6LL);
      v29 = 619;
      goto LABEL_77;
    }
    *((PHYSICAL_ADDRESS *)v15 + 10) = MmGetPhysicalAddress(ContiguousNodeMemory);
  }
  if ( (_DWORD)v6 )
  {
    v25 = 3;
    if ( (unsigned int)v6 > 3 )
      v25 = v6;
    v6 = v25;
    v26 = 8LL * v25;
    if ( !is_mul_ok(v25, 8uLL) )
      v26 = -1LL;
    v27 = operator new[](v26, 0x33326956u, 64LL);
    *((_QWORD *)v15 + 12) = v27;
    if ( !v27 )
    {
      _InterlockedAdd(&dword_14008A730, 1u);
      WdLogSingleEntry0(6LL);
      v29 = 646;
LABEL_77:
      WdLogGlobalForLineNumber = v29;
      DxgkLogInternalTriageEvent(v28, 262145LL);
      goto LABEL_78;
    }
    v39 = 24 * v6;
    if ( !is_mul_ok(v6, 0x18uLL) )
      v39 = -1LL;
    v40 = operator new[](v39, 0x34326956u, 64LL);
    *((_QWORD *)v15 + 13) = v40;
    if ( !v40 )
    {
      _InterlockedAdd(&dword_14008A728, 1u);
      WdLogSingleEntry0(6LL);
      v29 = 659;
      goto LABEL_77;
    }
  }
  if ( v4 )
  {
    v41 = 24LL * v4;
    if ( !is_mul_ok(v4, 0x18uLL) )
      v41 = -1LL;
    v42 = operator new[](v41, 0x35326956u, 256LL);
    *((_QWORD *)v15 + 14) = v42;
    if ( !v42 )
    {
      _InterlockedAdd(&dword_14008A72C, 1u);
      WdLogSingleEntry0(6LL);
      v29 = 675;
      goto LABEL_77;
    }
  }
  v43 = *(_DWORD *)(a1 + 80);
  if ( v43 )
  {
    v44 = operator new[](v43, 0x32336956u, 64LL);
    *((_QWORD *)v15 + 15) = v44;
    if ( !v44 )
    {
      _InterlockedAdd(&dword_14008A790, 1u);
      WdLogSingleEntry0(6LL);
      v29 = 688;
      goto LABEL_77;
    }
  }
  *((_DWORD *)v15 + 9) = v5;
  *((_DWORD *)v15 + 10) = v6;
  *((_DWORD *)v15 + 11) = v4;
  *((_QWORD *)v15 + 16) = a1;
  *((_QWORD *)v15 + 19) = 0LL;
  if ( (*(_DWORD *)(a1 + 36) & 0x10) == 0 )
    goto LABEL_62;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 431LL) )
  {
    *((_QWORD *)v15 + 11) = *(_QWORD *)(*((_QWORD *)v15 + 7) + 680LL);
    goto LABEL_62;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              *(VIDMM_PROCESS **)(*(_QWORD *)(a1 + 8) + 8LL),
                              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 240LL),
                              *(_DWORD *)(a1 + 32));
  if ( !VirtualAddressAllocator )
  {
LABEL_78:
    v8 = -1073741801;
    goto LABEL_79;
  }
  v52 = (VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                   VirtualAddressAllocator,
                                   *((struct _RTL_AVL_TREE **)v15 + 7),
                                   0LL,
                                   1u,
                                   (unsigned int)v5,
                                   0LL,
                                   *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 2992LL),
                                   *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 3000LL),
                                   0x1000u,
                                   (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)((*(_DWORD *)(*(_QWORD *)a1 + 40LL) < 0x6000u) | 0x12LL),
                                   0LL,
                                   *(_DWORD *)(a1 + 32),
                                   0LL,
                                   1,
                                   0);
  v54 = v52;
  if ( !v52 )
  {
    v8 = -1073741823;
    if ( g_IsInternalReleaseOrDbg )
    {
      v55 = WdLogNewEntry5_WdTrace(v53);
      *(_QWORD *)(v55 + 24) = v15;
      *(_QWORD *)(v55 + 32) = a1;
      WdLogGlobalForLineNumber = 750;
    }
    goto LABEL_79;
  }
  *((_QWORD *)v15 + 11) = *((_QWORD *)v52 + 13);
  v8 = VIDMM_GLOBAL::CommitVirtualAddressRange(
         *(VIDMM_GLOBAL **)a1,
         VirtualAddressAllocator,
         *(struct VIDMM_PAGING_QUEUE **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 7) + 8LL) + 72LL)
                                       + 32LL * *(unsigned int *)(a1 + 32)),
         v52,
         KeGetCurrentThread() == *(struct _KTHREAD **)(**(_QWORD **)a1 + 8LL),
         (const struct _DXGK_ADL *)&xmmword_140060B68,
         0LL,
         0LL);
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v54, (struct _KTHREAD **)VirtualAddressAllocator);
  if ( v8 >= 0 )
  {
LABEL_62:
    *(_DWORD *)(a1 + 36) &= ~8u;
    *(_DWORD *)(a1 + 120) += *((_DWORD *)v15 + 9);
    v45 = *(_QWORD **)(a1 + 8);
    *(_DWORD *)(a1 + 124) += 24 * *((_DWORD *)v15 + 10);
    *(_DWORD *)(a1 + 128) += 24 * *((_DWORD *)v15 + 11);
    if ( v45 )
    {
      v46 = *(VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(v45[1] + 32LL)
                                           + 8LL * *(unsigned int *)(*(_QWORD *)(*v45 + 24LL) + 240LL));
      VIDMM_PROCESS_ADAPTER_INFO::AcquireProcessAdapterInfoLock(v46);
      v47 = *((_QWORD *)v46 + 23);
      *(_QWORD *)(v47 + 8) += *((unsigned int *)v15 + 9);
      ++*(_DWORD *)v47;
      *(_DWORD *)(*((_QWORD *)v46 + 23) + 16LL) += 24 * *((_DWORD *)v15 + 10);
      *(_DWORD *)(*((_QWORD *)v46 + 23) + 20LL) += 24 * *((_DWORD *)v15 + 11);
      VIDMM_PROCESS_ADAPTER_INFO::ReleaseProcessAdapterInfoLock(v46);
    }
    _InterlockedAdd64(&qword_14008AA78, *((unsigned int *)v15 + 9));
    _InterlockedAdd64(&qword_14008AA48, 24LL * *((unsigned int *)v15 + 10));
    _InterlockedAdd64(&qword_14008AA18, 24LL * *((unsigned int *)v15 + 11));
    v48 = Resource;
    ++*(_DWORD *)(a1 + 84);
    ExAcquireResourceSharedLite(v48, 1u);
    v49 = (char **)(a1 + 88);
    v50 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(v50 + 8) != a1 + 88 )
      __fastfail(3u);
    v56 = Resource;
    *(_QWORD *)v15 = v50;
    *((_QWORD *)v15 + 1) = v49;
    *(_QWORD *)(v50 + 8) = v15;
    *v49 = v15;
    ExReleaseResourceLite(v56);
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v57) + 24) = v15;
      WdLogGlobalForLineNumber = 822;
    }
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0pppxxxp_EtwWriteTransfer(
        *((unsigned int *)v15 + 11),
        &EventAddDmaBuffer,
        *((unsigned int *)v15 + 9),
        *(_QWORD *)(a1 + 24),
        *(_QWORD *)(*(_QWORD *)a1 + 24LL),
        v15,
        *((unsigned int *)v15 + 9),
        *((unsigned int *)v15 + 10),
        *((unsigned int *)v15 + 11),
        *((_QWORD *)v15 + 6));
    return (unsigned int)v8;
  }
LABEL_79:
  operator delete(*((void **)v15 + 15));
  operator delete(*((void **)v15 + 14));
  operator delete(*((void **)v15 + 13));
  operator delete(*((void **)v15 + 12));
  v58 = (struct VIDMM_ALLOC *)*((_QWORD *)v15 + 7);
  if ( v58 )
    VIDMM_GLOBAL::CloseOneAllocation(*(VIDMM_GLOBAL **)a1, v58, 0LL, 0, 0, 0LL);
  v59 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v15 + 6);
  if ( v59 )
    VIDMM_GLOBAL::DestroyOneAllocation(*(VIDMM_GLOBAL **)a1, *(struct VIDMM_DEVICE **)(a1 + 8), v59, 1);
  v60 = (void *)*((_QWORD *)v15 + 8);
  if ( v60 )
    MmFreeContiguousMemorySpecifyCache(v60, (unsigned int)NumberOfBytes, *((MEMORY_CACHING_TYPE *)v15 + 18));
  operator delete(v15);
  return (unsigned int)v8;
}
