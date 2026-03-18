/*
 * XREFs of ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400CB330
 * Callers:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400CB2CC (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003B2E8 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?MapGpuVaVidMmAlloc@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400A5570 (-MapGpuVaVidMmAlloc@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_S.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400CB248 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400CB2A0 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400CB9E0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400CBDB4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1400CC7D4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1400D8FF4 (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E0F50 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1400E2318 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400E4860 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUE.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x140105A6C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x140119078 (-AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapGpuVA(
        struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **this,
        VIDMM_GLOBAL **a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        unsigned __int64 *a4,
        unsigned int a5,
        bool a6)
{
  VIDMM_GLOBAL *v7; // r15
  VIDMM_PROCESS *v8; // r12
  unsigned int v9; // ecx
  char v10; // dl
  unsigned int v11; // edi
  __int64 v12; // rbx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *i; // rsi
  int v14; // edi
  char v15; // r14
  __int64 *j; // rcx
  struct CVirtualAddressAllocator *v17; // r10
  char v18; // r14
  int v19; // ecx
  unsigned int v20; // r14d
  unsigned int k; // eax
  __int64 result; // rax
  __int64 Pool2; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **v27; // rdx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *v28; // rax
  struct VIDMM_MAPPED_VA_RANGE *v29; // rdi
  void *v30; // rcx
  unsigned __int64 LogicalAddress; // rax
  int v32; // eax
  int v34; // eax
  __int64 v35; // rcx
  bool v36; // r8
  VIDMM_FENCE_STORAGE_PAGE *v37; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v38; // rax
  VIDMM_FENCE_STORAGE_PAGE **v39; // rdx
  CVirtualAddressAllocator *v40; // rax
  int v41; // [rsp+70h] [rbp-98h]
  int v42; // [rsp+78h] [rbp-90h]
  unsigned int v43; // [rsp+88h] [rbp-80h]
  unsigned int v44; // [rsp+8Ch] [rbp-7Ch]
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // [rsp+90h] [rbp-78h]
  unsigned __int64 v46; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-60h] BYREF
  VIDMM_MAPPED_VA_RANGE *v48; // [rsp+B8h] [rbp-50h]
  _QWORD v49[18]; // [rsp+C8h] [rbp-40h] BYREF

  if ( (*((_BYTE *)a3 + 40) & 4) != 0 )
    return VIDMM_FENCE_STORAGE_PAGE::MapGpuVaVidMmAlloc((VIDMM_FENCE_STORAGE_PAGE *)this, a2, a3, a4, a5, a6);
  *a4 = 0LL;
  v7 = *a2;
  v8 = a2[1];
  if ( (*((_BYTE *)*a2 + 41064) & 0x10) == 0 )
    return 0LL;
  v9 = *((_DWORD *)v7 + 1738);
  v10 = -1;
  if ( v9 > 1 )
  {
    v11 = a5;
    if ( a5 )
    {
      if ( ((-1 << v9) & a5) != 0 )
      {
        WdLogSingleEntry0(3LL);
        result = 3221225485LL;
        WdLogGlobalForLineNumber = 1857;
        return result;
      }
    }
    else
    {
      v11 = (1 << v9) - 1;
    }
  }
  else
  {
    v11 = 1;
  }
  v44 = 0;
  if ( a6 )
  {
    if ( _BitScanForward((unsigned int *)&v34, v11) )
      v10 = v34;
    v44 = v10;
  }
  v12 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 10, 0LL);
  this[11] = KeGetCurrentThread();
  for ( i = this[8];
        i != (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)(this + 8);
        i = *(struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)i )
  {
    if ( v7 == *((VIDMM_GLOBAL **)i + 6) )
      goto LABEL_11;
  }
  i = VIDMM_FENCE_STORAGE_PAGE::AllocateStoragePageGpuData((VIDMM_FENCE_STORAGE_PAGE *)this, v7);
  if ( !i )
  {
    v14 = -1073741801;
    v15 = 0;
    goto LABEL_70;
  }
LABEL_11:
  for ( j = (__int64 *)*((_QWORD *)i + 4); j != (__int64 *)((char *)i + 32); j = (__int64 *)*j )
  {
    if ( v8 == (VIDMM_PROCESS *)*(j - 1) && (!a6 || *((_DWORD *)j + 5) == v11) )
    {
      ++*((_DWORD *)j + 4);
      v12 = (__int64)(j - 5);
      break;
    }
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(v8, *(_DWORD *)(*((_QWORD *)v7 + 3) + 240LL), v44);
  v17 = VirtualAddressAllocator;
  if ( !VirtualAddressAllocator || (v18 = 1, *(_BYTE *)(*((_QWORD *)v7 + 3) + 3082LL)) )
    v18 = 0;
  if ( v12 )
  {
    v19 = *(_DWORD *)(v12 + 60);
    *(_DWORD *)(v12 + 60) = v11 | v19;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 64LL, 1700882774LL);
    v12 = Pool2;
    if ( !Pool2 )
    {
      _InterlockedIncrement(&dword_14008A8B4);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1966;
      DxgkLogInternalTriageEvent(v35, 262145LL);
      v15 = 0;
      v14 = -1073741801;
      goto LABEL_70;
    }
    *(_DWORD *)(Pool2 + 56) = 1;
    *(_QWORD *)(Pool2 + 32) = v8;
    *(_QWORD *)(Pool2 + 8) = i;
    *(_DWORD *)(Pool2 + 60) = v11;
    ++*((_DWORD *)i + 18);
    if ( v18 )
    {
      v24 = 0LL;
      v25 = *((_QWORD *)v7 + 3);
      if ( a6 )
      {
        *(_BYTE *)(v12 + 25) = 1;
        v26 = *((_QWORD *)v7 + 5140);
      }
      else
      {
        v26 = *(_QWORD *)(v25 + 2992);
        v24 = *(_QWORD *)(v25 + 3000);
      }
      v46 = 0LL;
      v14 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
              VirtualAddressAllocator,
              0x1000uLL,
              0LL,
              v26,
              v24,
              0x1000u,
              &v46);
      if ( v14 < 0 )
      {
        WdLogSingleEntry0(3LL);
        v15 = 0;
        WdLogGlobalForLineNumber = 2021;
        goto LABEL_63;
      }
      *(_QWORD *)v12 = v46;
      *(_BYTE *)(v12 + 24) = 1;
      VIDMM_PROCESS::OpenAdapter(v8, v7);
    }
    else
    {
      *(_QWORD *)Pool2 = *((_QWORD *)this[16] + 6) << 12;
      *(_BYTE *)(Pool2 + 24) = 0;
    }
    v27 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)*((_QWORD *)i + 5);
    v28 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)(v12 + 40);
    if ( *v27 != (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)((char *)i + 32) )
      goto LABEL_35;
    v17 = VirtualAddressAllocator;
    *(_QWORD *)v28 = (char *)i + 32;
    *(_QWORD *)(v12 + 48) = v27;
    *v27 = v28;
    *((_QWORD *)i + 5) = v28;
    v19 = 0;
  }
  if ( !v18 )
  {
LABEL_23:
    *a4 = *(_QWORD *)v12 + *((unsigned int *)a3 + 4);
    this[11] = 0LL;
    ExReleasePushLockExclusiveEx(this + 10, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  v20 = ~v19 & *(_DWORD *)(v12 + 60);
  for ( k = 0; ; ++k )
  {
    v43 = k;
    if ( !v20 )
      goto LABEL_23;
    if ( (v20 & 1) == 0 )
      goto LABEL_42;
    LOBYTE(v42) = 0;
    LOBYTE(v41) = 1;
    v48 = (VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                     v17,
                                     i,
                                     0LL,
                                     2LL,
                                     4096LL,
                                     *(_QWORD *)v12,
                                     0LL,
                                     0LL,
                                     4096,
                                     17LL,
                                     0LL,
                                     k,
                                     0LL,
                                     v41,
                                     v42);
    v29 = v48;
    if ( !v48 )
      break;
    v30 = (void *)*((_QWORD *)i + 8);
    v47 = 0LL;
    LogicalAddress = SysMmGetLogicalAddress(v30);
    VidMmiInitializeAdlForPfnArray(
      (struct _DXGK_ADL *)&v47,
      (const unsigned __int64 *)(*((_QWORD *)i + 7) + 48LL),
      *(_DWORD *)(*((_QWORD *)i + 7) + 40LL) >> 12,
      LogicalAddress);
    if ( *(_BYTE *)(v12 + 25) )
    {
      *(_QWORD *)(v12 + 16) = v29;
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)v7 + 8LL) )
      {
        v46 = 0LL;
        v32 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                VirtualAddressAllocator,
                v29,
                v43,
                0LL,
                0LL,
                &v47,
                0,
                &v46,
                0LL,
                0,
                0LL);
      }
      else
      {
        memset(v49, 0, 0x58uLL);
        v49[5] = VirtualAddressAllocator;
        HIDWORD(v49[0]) = v43;
        *(_OWORD *)&v49[7] = v47;
        LODWORD(v49[0]) = 113;
        v49[6] = v29;
        v32 = VIDMM_GLOBAL::QueueLazySystemCommandAndWait(v7, (struct _VIDMM_SYSTEM_COMMAND *)v49, v36);
      }
    }
    else
    {
      v32 = VIDMM_GLOBAL::CommitVirtualAddressRange(
              v7,
              VirtualAddressAllocator,
              *((struct VIDMM_PAGING_QUEUE **)a2[9] + 4 * v43),
              v29,
              0,
              (const struct _DXGK_ADL *)&v47,
              0LL,
              0LL);
    }
    v14 = v32;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v48, (struct _KTHREAD **)VirtualAddressAllocator);
    if ( v14 < 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2136;
      goto LABEL_62;
    }
    k = v43;
LABEL_42:
    v17 = VirtualAddressAllocator;
    v20 >>= 1;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 2078;
  v14 = -1073741823;
LABEL_62:
  v15 = 0;
  if ( !v12 )
    goto LABEL_70;
LABEL_63:
  if ( *(_DWORD *)(v12 + 56) != 1 )
    goto LABEL_69;
  v37 = (VIDMM_FENCE_STORAGE_PAGE *)(v12 + 40);
  v15 = 1;
  v38 = *(VIDMM_FENCE_STORAGE_PAGE ***)(v12 + 40);
  if ( !v38 )
    goto LABEL_68;
  if ( v38[1] != v37 || (v39 = *(VIDMM_FENCE_STORAGE_PAGE ***)(v12 + 48), *v39 != v37) )
LABEL_35:
    __fastfail(3u);
  *v39 = (VIDMM_FENCE_STORAGE_PAGE *)v38;
  v38[1] = (VIDMM_FENCE_STORAGE_PAGE *)v39;
LABEL_68:
  VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(v37, i);
LABEL_69:
  --*(_DWORD *)(v12 + 56);
LABEL_70:
  this[11] = 0LL;
  ExReleasePushLockExclusiveEx(this + 10, 0LL);
  KeLeaveCriticalRegion();
  if ( v15 )
  {
    if ( *(_BYTE *)(v12 + 24) )
    {
      v40 = VIDMM_PROCESS::GetVirtualAddressAllocator(v8, *(_DWORD *)(*((_QWORD *)v7 + 3) + 240LL), v44);
      CVirtualAddressAllocator::FreeVirtualAddressRange(v40, *(_QWORD *)v12);
      VIDMM_PROCESS::CloseAdapter(v8, v7);
    }
    ExFreePoolWithTag((PVOID)v12, 0);
  }
  return (unsigned int)v14;
}
