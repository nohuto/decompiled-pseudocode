/*
 * XREFs of ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x140105A6C
 * Callers:
 *     ?DestroyVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@PEAV1@@Z @ 0x14005000C (-DestroyVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@PEAV1@@Z.c)
 *     ?CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_KPEAPEAV1@@Z @ 0x140050228 (-CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_K.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x140099D34 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1400A351C (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400CB330 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PE.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1400CC50C (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1400CDDC0 (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_PAGING_QUEUE@@PEA.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1401048C4 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x140104998 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14002FF98 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x140105EC4 (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1401061D4 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::FreeVirtualAddressRange(struct _KTHREAD **this, __int64 a2)
{
  char v2; // r14
  unsigned int v5; // ebp
  struct _RTL_BALANCED_NODE *v6; // rbx
  int started; // eax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v5 = -1073741811;
  if ( this[9] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 8));
    v2 = 1;
  }
  v6 = (struct _RTL_BALANCED_NODE *)this[7];
  v9 = a2;
  if ( !v6 )
    goto LABEL_14;
  while ( 1 )
  {
    started = CompareVadByStartAddressAvl(&v9, v6);
    if ( started >= 0 )
      break;
    v6 = v6->Children[0];
LABEL_6:
    if ( !v6 )
      goto LABEL_7;
  }
  if ( started > 0 )
  {
    v6 = v6->Children[1];
    goto LABEL_6;
  }
LABEL_7:
  if ( v6 )
  {
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
      (CVirtualAddressAllocator *)this,
      (struct VIDMM_VAD *)v6);
    v5 = 0;
    goto LABEL_9;
  }
LABEL_14:
  WdLogSingleEntry2(3LL, this, a2);
  WdLogGlobalForLineNumber = 2627;
LABEL_9:
  if ( v2 )
  {
    this[9] = 0LL;
    ExReleasePushLockExclusiveEx(this + 8, 0LL);
    KeLeaveCriticalRegion();
  }
  return v5;
}
