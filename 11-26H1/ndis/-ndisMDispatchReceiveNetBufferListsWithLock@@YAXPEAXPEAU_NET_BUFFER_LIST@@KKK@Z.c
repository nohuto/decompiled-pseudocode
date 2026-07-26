/*
 * XREFs of ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140033350
 * Callers:
 *     ndisDoPeriodicReceivesIndication @ 0x1400305B0 (ndisDoPeriodicReceivesIndication.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14002CE00 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140031600 (-ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140031710 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1400325E0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     NdisAcquireRWLockRead @ 0x140033720 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1400337F0 (NdisReleaseRWLock.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003C3E0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisMDispatchReceiveNetBufferListsWithLock(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  struct _NDIS_FILTER_BLOCK *v5; // rsi
  unsigned int v8; // r12d
  unsigned __int64 RcvLinkSpeedIndicateUp; // rax
  char v10; // bp
  struct _NET_BUFFER_LIST *v11; // r14
  unsigned int Number; // r13d
  struct _NDIS_RCV_TRACKER_ARRAY *v13; // r9
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 Pool2; // rbx
  unsigned __int64 v17; // rsi
  struct _NET_BUFFER_LIST *Alignment; // rax
  __int64 v19; // rbp
  struct _NET_BUFFER_LIST **v20; // rax
  struct _NDIS_OPEN_BLOCK *v21; // rdx
  struct _NDIS_OPEN_BLOCK *v22; // rdx
  unsigned int v23; // r15d
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-44h]
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]
  char v30; // [rsp+A0h] [rbp+28h]

  v5 = a1;
  *(_WORD *)&LockState.OldIrql = 0;
  v8 = a5 & 1;
  LockState.Flags = 0;
  RcvLinkSpeedIndicateUp = a1->RcvLinkSpeedIndicateUp;
  v25 = v8;
  v26 = RcvLinkSpeedIndicateUp;
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(RcvLinkSpeedIndicateUp + 288), &LockState, a5 & 1);
  v10 = 0;
  v11 = 0LL;
  Number = 0;
  v30 = 0;
  if ( (v8 || KeGetCurrentIrql() == 2)
    && ndisPerProcRcvTrackers
    && (Number = KeGetPcr()->Prcb.Number,
        v13 = ndisPerProcRcvTrackers,
        v14 = 2096LL * Number,
        v15 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v14),
        (unsigned int)v15 < 3) )
  {
    v30 = 1;
    *(_DWORD *)((char *)ndisPerProcRcvTrackers + v14) = v15 + 1;
    Pool2 = (__int64)v13 + 696 * v15 + v14 + 8;
  }
  else
  {
    Pool2 = ExAllocatePool2(66LL, 696LL, 538985550LL);
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v15,
          4,
          11,
          (struct _GUID *)&WPP_f4de16de262a370e16e06d291696dc3d_Traceguids);
      }
      v23 = a5 & 2;
      goto LABEL_25;
    }
  }
  v17 = v5->RcvLinkSpeedIndicateUp;
  *(_BYTE *)(Pool2 + 692) = 0;
  Alignment = a2;
  if ( (a5 & 2) == 0 )
  {
    do
    {
      v11 = Alignment;
      Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
  v19 = *(_QWORD *)(v17 + 328);
  if ( v19 && *(_BYTE *)(*(_QWORD *)(v19 + 24) + 56LL) >= 6u )
  {
    ndisMIndicateNetBufferListsToOpen(*(struct _NDIS_OPEN_BLOCK **)(v17 + 328), a2, a3, a4, a5);
    v20 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
    *(_DWORD *)(Pool2 + 80) = 0;
    *(_QWORD *)(Pool2 + 64) = 0LL;
  }
  else
  {
    *(_QWORD *)Pool2 = a1;
    *(_QWORD *)(Pool2 + 32) = v11;
    *(_DWORD *)(Pool2 + 44) = a4;
    *(_QWORD *)(Pool2 + 24) = a2;
    *(_QWORD *)(Pool2 + 8) = v17;
    *(_DWORD *)(Pool2 + 16) = a5;
    *(_DWORD *)(Pool2 + 40) = a3;
    ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v15, v14);
    if ( *(_QWORD *)(Pool2 + 64) || (v20 = (struct _NET_BUFFER_LIST **)(Pool2 + 64), *(_DWORD *)(Pool2 + 688)) )
    {
      if ( !*(_QWORD *)v17 || a3 )
        *(_BYTE *)(Pool2 + 692) = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
      v20 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
      if ( !v19 )
      {
        v21 = *(struct _NDIS_OPEN_BLOCK **)(v17 + 8);
        if ( v21 )
          ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v21);
        v22 = *(struct _NDIS_OPEN_BLOCK **)(v17 + 16);
        if ( v22 )
        {
          if ( (a5 & 2) != 0 )
            ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v22);
          else
            ndisIndicateSortedNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
        }
        v20 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
      }
    }
  }
  v10 = v30;
  if ( *(_BYTE *)(Pool2 + 692) )
  {
    a2 = *v20;
    v23 = a5 & 2;
    v8 = v25;
    v5 = a1;
LABEL_25:
    if ( a2 )
    {
      if ( byte_14011F740 && ((__int64)v5[4].PendingOidRequest & 2) != 0 )
        PktMonClientNblDropNdis((__int64)&v5[4].HigherFilter, (__int64)a2, v14, 1LL, -1073676270, -536866809);
      if ( !v23 )
        ndisReturnNetBufferListsInternal(v5, a2, v8, 0LL);
    }
  }
  if ( v10 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * Number);
  }
  else if ( Pool2 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v26 + 288), &LockState);
}
