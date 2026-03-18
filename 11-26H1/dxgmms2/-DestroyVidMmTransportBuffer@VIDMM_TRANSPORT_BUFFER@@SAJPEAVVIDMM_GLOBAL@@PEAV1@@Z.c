/*
 * XREFs of ?DestroyVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@PEAV1@@Z @ 0x14005000C
 * Callers:
 *     ?CreateVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@_KPEAPEAV1@PEAPEAX@Z @ 0x14004FB50 (-CreateVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@_KPEAPEAV1@PEAPEAX@Z.c)
 *     ?FreeTransportBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_TRANSPORT_BUFFER@@@Z @ 0x14009E714 (-FreeTransportBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_TRANSPORT_BUFFER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140031E00 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14004CB04 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEBAKXZ @ 0x1400E6870 (-AdapterId@VIDMM_GLOBAL@@QEBAKXZ.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E68D8 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x140105A6C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_TRANSPORT_BUFFER::DestroyVidMmTransportBuffer(
        struct VIDMM_GLOBAL *this,
        struct VIDMM_TRANSPORT_BUFFER *a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rax
  struct VIDMM_TRANSPORT_BUFFER **v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 LogicalAddress; // rax
  unsigned int v9; // eax
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  CVirtualAddressAllocator *v11; // rbp
  __int64 v12; // rbx
  bool v13; // r8
  __int64 v14; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  void *v16; // rdx
  char v18; // [rsp+20h] [rbp-A8h]
  _BYTE v19[16]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v20[12]; // [rsp+50h] [rbp-78h] BYREF

  v4 = 0;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v19,
    (struct VIDMM_GLOBAL *)((char *)this + 40120),
    1);
  v5 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    if ( *(struct VIDMM_TRANSPORT_BUFFER **)(v5 + 8) != a2
      || (v6 = (struct VIDMM_TRANSPORT_BUFFER **)*((_QWORD *)a2 + 1), *v6 != a2) )
    {
      __fastfail(3u);
    }
    *v6 = (struct VIDMM_TRANSPORT_BUFFER *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
    if ( *((_BYTE *)this + 40144) )
    {
      v7 = *((_QWORD *)a2 + 6);
      LogicalAddress = VidMmiGetLogicalAddress(*((void **)a2 + 7), 0LL);
      v18 = 0;
      SysMmUnmapPagesFromIommu(
        *(_QWORD *)(*((_QWORD *)this + 3) + 224LL),
        LogicalAddress,
        v7 + 48,
        (unsigned __int64)*(unsigned int *)(v7 + 40) >> 12,
        v18,
        6,
        a2);
    }
  }
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v19);
  v9 = VIDMM_GLOBAL::AdapterId(this);
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(g_pVidMmSystemProcess, v9, 0);
  v11 = VirtualAddressAllocator;
  v12 = *((_QWORD *)a2 + 3);
  if ( *((_BYTE *)a2 + 64) )
  {
    memset(v20, 0, 0x58uLL);
    v20[5] = g_pVidMmSystemProcess;
    v20[8] = *((_QWORD *)a2 + 4) >> 12;
    LODWORD(v20[0]) = 120;
    v20[7] = v12;
    v20[6] = v11;
    LOBYTE(v20[9]) = 1;
    v4 = VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v20, v13);
    *((_BYTE *)a2 + 64) = 0;
  }
  else if ( v12 )
  {
    CVirtualAddressAllocator::FreeVirtualAddressRange(VirtualAddressAllocator, *((_QWORD *)a2 + 3));
    *((_QWORD *)a2 + 3) = 0LL;
  }
  v14 = *((_QWORD *)a2 + 6);
  if ( v14 )
  {
    if ( (*(_BYTE *)(v14 + 10) & 2) != 0 )
      MmUnlockPages((PMDL)v14);
    IoFreeMdl(*((PMDL *)a2 + 6));
    *((_QWORD *)a2 + 6) = 0LL;
  }
  if ( *((_QWORD *)a2 + 2) )
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))VirtualMemoryInterface + 2))(
      -1LL,
      (char *)a2 + 16,
      (char *)a2 + 32,
      0x8000LL);
    *((_QWORD *)a2 + 2) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
  }
  v16 = (void *)*((_QWORD *)a2 + 7);
  if ( v16 )
  {
    SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), v16);
    *((_QWORD *)a2 + 7) = 0LL;
  }
  operator delete(a2);
  return v4;
}
