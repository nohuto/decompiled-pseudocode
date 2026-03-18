/*
 * XREFs of ?CreateVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@_KPEAPEAV1@PEAPEAX@Z @ 0x14004FB50
 * Callers:
 *     ?InitializeAndMapTransportBuffer@VIDMM_GLOBAL@@QEAAJPEAPEAVVIDMM_TRANSPORT_BUFFER@@_KPEAPEAX@Z @ 0x14009F2A8 (-InitializeAndMapTransportBuffer@VIDMM_GLOBAL@@QEAAJPEAPEAVVIDMM_TRANSPORT_BUFFER@@_KPEAPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140031E00 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003B2E8 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x14003B35C (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     ?DestroyVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@PEAV1@@Z @ 0x14005000C (-DestroyVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@PEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400CB2A0 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400CBDB4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1400CC7D4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E499C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEBAKXZ @ 0x1400E6870 (-AdapterId@VIDMM_GLOBAL@@QEBAKXZ.c)
 */

__int64 __fastcall VIDMM_TRANSPORT_BUFFER::CreateVidMmTransportBuffer(
        struct VIDMM_GLOBAL *this,
        __int64 a2,
        struct VIDMM_TRANSPORT_BUFFER **a3,
        void **a4)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  int LogicalMemory; // ebx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  PVOID *v9; // r12
  ULONG v10; // eax
  struct _MDL *Mdl; // rax
  void *const *v12; // r13
  unsigned int v13; // eax
  unsigned __int64 v14; // r8
  CVirtualAddressAllocator *VirtualAddressAllocator; // r14
  __int64 v16; // rax
  unsigned __int64 LogicalAddress; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rax
  int v20; // eax
  char *v21; // rsi
  char **v22; // rax
  int Irp; // [rsp+20h] [rbp-108h]
  _QWORD v25[2]; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD v26[19]; // [rsp+90h] [rbp-98h] BYREF
  __int64 Length; // [rsp+138h] [rbp+10h] BYREF
  struct VIDMM_TRANSPORT_BUFFER **v28; // [rsp+140h] [rbp+18h]
  void **v29; // [rsp+148h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  Length = a2;
  memset(v26, 0, 0x58uLL);
  v5 = operator new(72LL, 0x33366956u, 256LL);
  v6 = v5;
  if ( v5 )
  {
    *(_OWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_QWORD *)(v5 + 56) = 0LL;
    *(_BYTE *)(v5 + 64) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  v25[0] = v6;
  if ( !v6 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 51;
LABEL_6:
    LogicalMemory = -1073741801;
LABEL_27:
    VIDMM_TRANSPORT_BUFFER::DestroyVidMmTransportBuffer(this, (struct VIDMM_TRANSPORT_BUFFER *)v6);
    return (unsigned int)LogicalMemory;
  }
  Length = (Length + 4095) & 0xFFFFF000LL;
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  v9 = (PVOID *)(v6 + 16);
  LogicalMemory = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *, int, int))VirtualMemoryInterface)(
                    -1LL,
                    v6 + 16,
                    0LL,
                    &Length,
                    4096,
                    4);
  if ( LogicalMemory < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 67;
    goto LABEL_27;
  }
  v10 = Length;
  *(_QWORD *)(v6 + 32) = Length;
  Mdl = IoAllocateMdl(*v9, v10, 0, 0, 0LL);
  *(_QWORD *)(v6 + 48) = Mdl;
  if ( !Mdl )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 80;
    goto LABEL_6;
  }
  MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
  v12 = (void *const *)(v6 + 56);
  LogicalMemory = SysMmAllocateLogicalMemory(
                    *(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL),
                    *(_QWORD *)(v6 + 32),
                    (const void *)v6,
                    (void **)(v6 + 56));
  if ( LogicalMemory < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 105;
    goto LABEL_27;
  }
  v13 = VIDMM_GLOBAL::AdapterId(this);
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(g_pVidMmSystemProcess, v13, 0);
  if ( !VirtualAddressAllocator )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 112;
    goto LABEL_6;
  }
  LogicalMemory = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
                    VirtualAddressAllocator,
                    *(_QWORD *)(v6 + 32),
                    v14,
                    *((_QWORD *)this + 5135),
                    *((_QWORD *)this + 5136),
                    0x1000u,
                    (unsigned __int64 *)(v6 + 24));
  if ( LogicalMemory < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 127;
    goto LABEL_27;
  }
  v16 = CVirtualAddressAllocator::MapVirtualAddressRange(
          VirtualAddressAllocator,
          v6,
          0LL,
          8LL,
          *(_QWORD *)(v6 + 32),
          *(_QWORD *)(v6 + 24),
          0LL,
          0LL,
          4096,
          17LL,
          0LL,
          0,
          0LL,
          0,
          0);
  *(_QWORD *)(v6 + 40) = v16;
  if ( !v16 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 147;
    goto LABEL_6;
  }
  *(_DWORD *)(v16 + 72) |= 0x2000u;
  *(_QWORD *)(*(_QWORD *)(v6 + 40) + 48LL) = 0LL;
  v26[0] = 113LL;
  v26[6] = *(_QWORD *)(v6 + 40);
  v26[5] = VirtualAddressAllocator;
  LogicalAddress = SysMmGetLogicalAddress(*v12);
  VidMmiInitializeAdlForPfnArray(
    (struct _DXGK_ADL *)&v26[7],
    (const unsigned __int64 *)(*(_QWORD *)(v6 + 48) + 48LL),
    *(_DWORD *)(*(_QWORD *)(v6 + 48) + 40LL) >> 12,
    LogicalAddress);
  LogicalMemory = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v26, 1);
  if ( LogicalMemory < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 166;
    goto LABEL_27;
  }
  *(_BYTE *)(v6 + 64) = 1;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v25,
    (struct VIDMM_GLOBAL *)((char *)this + 40120),
    1);
  if ( *((_BYTE *)this + 40144) )
  {
    v18 = *(_QWORD *)(v6 + 48);
    v19 = VidMmiGetLogicalAddress(*v12, 0LL);
    LOBYTE(Irp) = 0;
    v20 = SysMmMapPagesToIommu(
            *(_QWORD *)(*((_QWORD *)this + 3) + 224LL),
            v19,
            v18 + 48,
            (unsigned __int64)*(unsigned int *)(v18 + 40) >> 12,
            Irp,
            6,
            v6);
    LogicalMemory = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry1(3LL, v20);
      WdLogGlobalForLineNumber = 184;
      DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v25);
      goto LABEL_27;
    }
  }
  v21 = (char *)this + 40104;
  v22 = (char **)*((_QWORD *)v21 + 1);
  if ( *v22 != v21 )
    __fastfail(3u);
  *(_QWORD *)v6 = v21;
  *(_QWORD *)(v6 + 8) = v22;
  *v22 = (char *)v6;
  *((_QWORD *)v21 + 1) = v6;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v25);
  *v28 = (struct VIDMM_TRANSPORT_BUFFER *)v6;
  *v29 = *v9;
  return 0LL;
}
