/*
 * XREFs of NdisIfAddIfStackEntry @ 0x14001D270
 * Callers:
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400546E0 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x14001D4D0 (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     ndisIfFindStackEntry @ 0x14001D510 (ndisIfFindStackEntry.c)
 *     ndisIfStackTablePathExist @ 0x14001D540 (ndisIfStackTablePathExist.c)
 *     WPP_RECORDER_SF_llL @ 0x14001D5D0 (WPP_RECORDER_SF_llL.c)
 *     WPP_RECORDER_SF_ll @ 0x14001D6E0 (WPP_RECORDER_SF_ll.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

NDIS_STATUS __stdcall NdisIfAddIfStackEntry(NET_IFINDEX HigherLayerIfIndex, NET_IFINDEX LowerLayerIfIndex)
{
  int v2; // r8d
  ULONG_PTR v3; // rdi
  ULONG_PTR v4; // rbx
  __int64 Pool2; // rax
  _QWORD *v6; // rsi
  KIRQL v7; // r14
  unsigned int v8; // ecx
  struct _NDIS_IF_BLOCK *Interface; // rax
  __int64 v10; // rdx
  PVOID **v11; // rcx
  NDIS_STATUS v12; // ebp
  int v13; // edx
  int v14; // r8d
  int v15; // r9d

  v3 = LowerLayerIfIndex;
  v4 = HigherLayerIfIndex;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ll(*((_QWORD *)WPP_GLOBAL_Control + 8), LowerLayerIfIndex, v2);
  Pool2 = ExAllocatePool2(64LL, 40LL, 1718174798LL);
  v6 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return -1073741670;
  *(_DWORD *)(Pool2 + 16) = v4;
  *(_DWORD *)(Pool2 + 20) = v3;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  KeAcquireSpinLockAtDpcLevel(&qword_14011E960);
  if ( (_DWORD)v4 == (_DWORD)v3 || (unsigned __int8)ndisIfStackTablePathExist((unsigned int)v4, (unsigned int)v3, 0LL) )
  {
    if ( MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
      ndisBugCheckEx(0x1BuLL, v4, v3, 0LL);
    v12 = -1073741811;
  }
  else
  {
    if ( ndisIfFindStackEntry((unsigned int)v4, (unsigned int)v3) )
    {
      ExFreePoolWithTag(v6, 0);
LABEL_19:
      v12 = 0;
      KeReleaseSpinLockFromDpcLevel(&qword_14011E960);
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v7);
      goto LABEL_14;
    }
    ndisIfFindInterface(v8);
    Interface = ndisIfFindInterface(v3);
    if ( v10 && Interface )
    {
      v11 = (PVOID **)P;
      v6[3] = v10;
      v6[4] = Interface;
      if ( v11[1] != &P )
        __fastfail(3u);
      *v6 = v11;
      v6[1] = &P;
      v11[1] = (PVOID *)v6;
      P = v6;
      ++*(_DWORD *)(v10 + 1296);
      ++Interface->HigherLayerIfCount;
      goto LABEL_19;
    }
    v12 = -1071448021;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_14011E960);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v7);
  ExFreePoolWithTag(v6, 0);
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_llL(*((_QWORD *)WPP_GLOBAL_Control + 8), v13, v14, v15);
  return v12;
}
