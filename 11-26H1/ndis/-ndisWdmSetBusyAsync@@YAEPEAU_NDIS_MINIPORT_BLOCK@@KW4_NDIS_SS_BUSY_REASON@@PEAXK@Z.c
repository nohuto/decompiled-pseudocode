/*
 * XREFs of ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007930
 * Callers:
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140009E10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140042E50 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x140052D40 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x14007AE20 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1400070C0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140008200 (-ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x140008430 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140008FF0 (McTemplateK0qq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140038F90 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x14003CDB0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x14004B850 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x14008F300 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 */

bool __fastcall ndisWdmSetBusyAsync(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  unsigned int v6; // ebp
  char v9; // di
  struct _NET_BUFFER_LIST *v10; // r15
  KIRQL v11; // r12
  char v12; // si
  __int64 v13; // r14
  __int64 v14; // rcx
  int v15; // r8d
  int v17; // edx
  char v18; // [rsp+30h] [rbp-68h]
  _BYTE v19[8]; // [rsp+40h] [rbp-58h] BYREF
  struct _NET_BUFFER_LIST *v20; // [rsp+48h] [rbp-50h] BYREF
  struct _LIST_ENTRY v21; // [rsp+50h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 4448);
  v6 = 0;
  v21.Blink = &v21;
  v21.Flink = &v21;
  v20 = 0LL;
  v19[0] = 0;
  v9 = 1;
  v10 = 0LL;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
  if ( (*(_DWORD *)(v5 + 504) & 0x200) != 0 || (*(_DWORD *)(v5 + 504) & 0x14) == 0 )
  {
    v12 = 1;
    v9 = ndisIncrementAsyncIdleCountersLocked(v5, a2, a3);
    ndisSelectiveSuspendSetResumeBusyReason(v5, 0LL, a3, 0LL);
LABEL_3:
    v13 = a1;
    goto LABEL_4;
  }
  v12 = 0;
  ndisPendWorkOnSetBusyAsyncLocked(v5, a3, a4, a5, &v20, &v21, v19);
  if ( !v19[0] || (*(_DWORD *)(v5 + 504) & 0xC0) != 0 )
  {
    v10 = v20;
    goto LABEL_3;
  }
  if ( a3 == 50 )
    v6 = *(_DWORD *)(v5 + 632);
  ndisSelectiveSuspendSetResumeBusyReason(v5, 1LL, a3, v6);
  v6 = a3;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = a1;
  }
  else
  {
    v18 = a3;
    v13 = a1;
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v17,
      15,
      39,
      (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
      a1,
      v18);
  }
  *(_DWORD *)(v5 + 504) |= 0x40u;
  ndisScheduleWorkItemInternal((struct _NDIS_WORK_ITEM *)(v5 + 376));
  v10 = v20;
LABEL_4:
  if ( (*(_DWORD *)(v5 + 504) & 0x200) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v5, v11);
    return 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v5, v11);
  if ( v10 )
  {
    if ( byte_14011F740 && (*(_DWORD *)(v13 + 5872) & 2) != 0 )
      PktMonClientNblDropNdis(v13 + 5816, (_DWORD)v10, v15, 2, -1071448017, -536866805);
    NdisSetStatusInNblChain(v10, -1071448052);
    ndisMSendNetBufferListsCompleteInternal((struct _NDIS_MINIPORT_BLOCK *)v13, v10, 0, 0);
  }
  if ( v21.Flink != &v21 )
    ndisCancelDequeuedDirectOidRequests((struct _NDIS_MINIPORT_BLOCK *)v13, &v21);
  if ( v6 && (byte_14011D041 & 8) != 0 )
    McTemplateK0qq_EtwWriteTransfer(v14, ">(", v13 + 4008, (*(_QWORD *)(v13 + 4024) >> 24) & 0xFFFFFFLL, v6);
  return v12 && v9;
}
