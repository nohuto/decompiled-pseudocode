/*
 * XREFs of ?ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C63CC
 * Callers:
 *     NdisMIdleNotificationCompleteEx @ 0x14006E2D0 (NdisMIdleNotificationCompleteEx.c)
 * Callees:
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140038F90 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x14003CDB0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140047EA0 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisMoveLinkedList@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1400563B0 (-ndisMoveLinkedList@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x14008F300 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400C6364 (-ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __fastcall ndisRequestPowerResume(struct _NDIS_FILTER_BLOCK *a1)
{
  struct _NDIS_SELECTIVE_SUSPEND *PendingOidRequest; // rbx
  KIRQL v3; // al
  int v4; // ecx
  KIRQL v5; // bp
  struct _NET_BUFFER_LIST *v6; // rsi
  struct _NET_BUFFER_LIST *v7; // r14
  __int64 v8; // r8
  struct _LIST_ENTRY v9; // [rsp+30h] [rbp-18h] BYREF

  PendingOidRequest = (struct _NDIS_SELECTIVE_SUSPEND *)a1[3].PendingOidRequest;
  v9 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PendingOidRequest);
  v4 = *((_DWORD *)PendingOidRequest + 126);
  v5 = v3;
  if ( (v4 & 0x30) == 0x10 )
  {
    if ( (v4 & 0x400) != 0 )
    {
      KeSetEvent((PRKEVENT)((char *)PendingOidRequest + 248), 0, 0);
      v6 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PendingOidRequest + 68);
      *((_QWORD *)PendingOidRequest + 68) = 0LL;
      *((_QWORD *)PendingOidRequest + 69) = (char *)PendingOidRequest + 544;
      v7 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PendingOidRequest + 70);
      *((_QWORD *)PendingOidRequest + 70) = 0LL;
      *((_QWORD *)PendingOidRequest + 71) = (char *)PendingOidRequest + 560;
      ndisMoveLinkedList(&v9, (struct _LIST_ENTRY *)((char *)PendingOidRequest + 584));
      KeReleaseSpinLock((PKSPIN_LOCK)PendingOidRequest, v5);
      if ( v6 )
      {
        if ( byte_14011F740 && ((__int64)a1[4].PendingOidRequest & 2) != 0 )
          PktMonClientNblDropNdis((__int64)&a1[4].HigherFilter, (__int64)v6, v8, 2LL, -1071448017, -536866807);
        NdisSetStatusInNblChain(v6, -1073676271);
        ndisMSendNetBufferListsCompleteInternal(a1, v6, 0, 0);
      }
      if ( v7 )
        ndisReplayRecvNbls((struct _NDIS_MINIPORT_BLOCK *)a1, v7);
      ndisCancelDequeuedDirectOidRequests((struct _NDIS_MINIPORT_BLOCK *)a1, &v9);
    }
    else
    {
      *((_DWORD *)PendingOidRequest + 126) = v4 | 0x20;
      KeReleaseSpinLock((PKSPIN_LOCK)PendingOidRequest, v3);
      ndisRequestDevicePowerD0((struct _NDIS_MINIPORT_BLOCK *)a1, NdisMEventD0_SSResume);
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)PendingOidRequest, v3);
  }
}
