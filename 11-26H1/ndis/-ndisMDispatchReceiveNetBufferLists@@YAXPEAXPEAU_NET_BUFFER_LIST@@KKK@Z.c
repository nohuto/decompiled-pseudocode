/*
 * XREFs of ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140031270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14002CE00 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140031600 (-ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140031710 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1400325E0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003C3E0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisMDispatchReceiveNetBufferLists(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  struct _NET_BUFFER_LIST *v6; // rbp
  struct _NDIS_FILTER_BLOCK *v7; // r13
  unsigned int Number; // esi
  struct _NDIS_RCV_TRACKER_ARRAY *v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 Pool2; // rdi
  _QWORD *RcvLinkSpeedIndicateUp; // r13
  struct _NET_BUFFER_LIST *Alignment; // rcx
  struct _NDIS_OPEN_BLOCK *v17; // rsi
  __int64 v18; // r8
  struct _NDIS_OPEN_BLOCK *v19; // rsi
  unsigned int v20; // ebp
  unsigned int v21; // r15d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r14
  __int64 v23; // rbx
  __int64 v24; // rcx
  struct _NET_BUFFER_LIST *v25; // rdx
  struct _NDIS_OPEN_BLOCK *v26; // rdx
  int v27; // edx
  char v28; // [rsp+30h] [rbp-38h]
  unsigned int v29; // [rsp+34h] [rbp-34h]

  v6 = 0LL;
  v7 = a1;
  v29 = 0;
  v28 = 0;
  if ( ((a5 & 1) != 0 || KeGetCurrentIrql() == 2)
    && ndisPerProcRcvTrackers
    && (Number = KeGetPcr()->Prcb.Number,
        v11 = ndisPerProcRcvTrackers,
        v12 = 2096LL * Number,
        v29 = Number,
        v13 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v12),
        (unsigned int)v13 < 3) )
  {
    v28 = 1;
    *(_DWORD *)((char *)ndisPerProcRcvTrackers + v12) = v13 + 1;
    Pool2 = (__int64)v11 + 696 * v13 + v12 + 8;
  }
  else
  {
    Pool2 = ExAllocatePool2(66LL, 696LL, 538985550LL);
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v27,
          4,
          11,
          (struct _GUID *)&WPP_f4de16de262a370e16e06d291696dc3d_Traceguids);
      }
      goto LABEL_24;
    }
  }
  RcvLinkSpeedIndicateUp = (_QWORD *)v7->RcvLinkSpeedIndicateUp;
  Alignment = a2;
  *(_BYTE *)(Pool2 + 692) = 0;
  if ( (a5 & 2) == 0 )
  {
    do
    {
      v6 = Alignment;
      Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
  v17 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[41];
  if ( v17 && v17->ProtocolHandle->MajorNdisVersion >= 6u )
  {
    ndisMIndicateNetBufferListsToOpen(v17, a2, a3, a4, a5);
    *(_QWORD *)(Pool2 + 64) = 0LL;
    *(_DWORD *)(Pool2 + 80) = 0;
  }
  else
  {
    *(_QWORD *)Pool2 = a1;
    *(_QWORD *)(Pool2 + 24) = a2;
    *(_QWORD *)(Pool2 + 8) = RcvLinkSpeedIndicateUp;
    *(_DWORD *)(Pool2 + 16) = a5;
    *(_QWORD *)(Pool2 + 32) = v6;
    *(_DWORD *)(Pool2 + 40) = a3;
    *(_DWORD *)(Pool2 + 44) = a4;
    ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
    if ( *(_QWORD *)(Pool2 + 64) || *(_DWORD *)(Pool2 + 688) )
    {
      if ( !*RcvLinkSpeedIndicateUp || a3 )
        *(_BYTE *)(Pool2 + 692) = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
      if ( !v17 )
      {
        v19 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[1];
        if ( v19 )
        {
          v20 = *(_DWORD *)(Pool2 + 688);
          v21 = *(_DWORD *)(Pool2 + 16) | 2;
          do
          {
            FilterNextOpen = v19->FilterNextOpen;
            v23 = 0LL;
            do
            {
              v24 = (unsigned int)v23;
              v25 = *(struct _NET_BUFFER_LIST **)(Pool2 + 40 * v23 + 64);
              v23 = (unsigned int)(v23 + 1);
              if ( v25 )
                ndisMIndicateNetBufferListsToOpen(
                  v19,
                  v25,
                  *(_DWORD *)(Pool2 + 40),
                  *(_DWORD *)(Pool2 + 40 * v24 + 80),
                  v21);
            }
            while ( (unsigned int)v23 <= v20 );
            v19 = FilterNextOpen;
          }
          while ( FilterNextOpen );
        }
        v26 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[2];
        if ( v26 )
        {
          if ( (a5 & 2) != 0 )
            ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v26);
          else
            ndisIndicateSortedNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
        }
      }
    }
  }
  if ( *(_BYTE *)(Pool2 + 692) )
  {
    a2 = *(struct _NET_BUFFER_LIST **)(Pool2 + 64);
    v7 = a1;
LABEL_24:
    if ( a2 )
    {
      if ( byte_14011F740 && ((__int64)v7[4].PendingOidRequest & 2) != 0 )
        PktMonClientNblDropNdis((__int64)&v7[4].HigherFilter, (__int64)a2, v18, 1LL, -1073676270, -536866809);
      if ( (a5 & 2) == 0 )
        ndisReturnNetBufferListsInternal(v7, a2, a5 & 1, 0LL);
    }
  }
  if ( v28 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v29);
  }
  else if ( Pool2 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
}
