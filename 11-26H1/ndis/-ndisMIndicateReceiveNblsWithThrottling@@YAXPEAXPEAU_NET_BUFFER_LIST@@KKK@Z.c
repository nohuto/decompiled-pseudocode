/*
 * XREFs of ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140030C50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14002CE00 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ndisMPeriodicReceivesResources @ 0x14002FB00 (ndisMPeriodicReceivesResources.c)
 *     ndisQueuePeriodicReceivesWorkItem @ 0x1400300F0 (ndisQueuePeriodicReceivesWorkItem.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1400302B0 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     ?ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140030BF0 (-ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140031600 (-ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140031710 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1400325E0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003C3E0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisMIndicateReceiveNblsWithThrottling(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *Alignment,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // r15d
  unsigned int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // ebp
  unsigned int MaxNblCount; // eax
  struct _NET_BUFFER_LIST *v12; // rdx
  unsigned int v13; // ebx
  struct _NET_BUFFER_LIST *v14; // r12
  __int64 v15; // rax
  int v16; // edx
  __int64 Pool2; // rdi
  __int64 v18; // r8
  struct _NET_BUFFER_LIST *v19; // rbx
  unsigned int v20; // r12d
  struct _NET_BUFFER_LIST *v21; // r14
  KIRQL v22; // r12
  KSPIN_LOCK *p_RefCountTracker; // rcx
  char v24; // di
  char v25; // bp
  _NET_IF_MEDIA_CONNECT_STATE *p_MediaConnectState; // r8
  unsigned int v27; // r9d
  _QWORD *p_RcvLinkSpeed; // rcx
  _QWORD *RcvLinkSpeed; // rax
  struct _NET_BUFFER_LIST *v30; // rax
  KSPIN_LOCK *v31; // rcx
  struct _NDIS_RCV_TRACKER_ARRAY *v32; // r9
  __int64 v33; // r8
  __int64 v34; // rdx
  unsigned __int64 RcvLinkSpeedIndicateUp; // rdx
  struct _NET_BUFFER_LIST *v36; // rcx
  struct _NDIS_OPEN_BLOCK *v37; // r14
  _QWORD *v38; // rax
  struct _NDIS_OPEN_BLOCK *v39; // r14
  unsigned int v40; // r15d
  unsigned int v41; // ebp
  unsigned int v42; // ebx
  __int64 v43; // rcx
  struct _NET_BUFFER_LIST *v44; // rdx
  struct _NDIS_OPEN_BLOCK *v45; // rdx
  struct _NET_BUFFER_LIST *v46; // rcx
  unsigned int v47; // [rsp+34h] [rbp-64h]
  unsigned int v48; // [rsp+3Ch] [rbp-5Ch]
  struct _NET_BUFFER_LIST *v49; // [rsp+40h] [rbp-58h]
  _QWORD *v50; // [rsp+48h] [rbp-50h]
  struct _NET_BUFFER_LIST *v51; // [rsp+50h] [rbp-48h]
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // [rsp+58h] [rbp-40h]
  char v53; // [rsp+A0h] [rbp+8h]

  v5 = a5;
  v6 = a3;
  v7 = a4;
  v8 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
LABEL_20:
    v21 = 0LL;
    if ( (a5 & 2) != 0 )
    {
      v24 = ndisMPeriodicReceivesResources((__int64)a1, Alignment, v6, v7, a5);
LABEL_37:
      if ( v24 )
      {
        ndisQueuePeriodicReceivesWorkItem((__int64)a1, a5 & 1);
        ndisQueuePeriodicReceivesTimer();
      }
      if ( v21 )
        ndisReturnNetBufferListsInternal(a1, v21, v8, 0LL);
      return;
    }
    v22 = 0;
    p_RefCountTracker = (KSPIN_LOCK *)&a1[2].PnPRef.RefCountTracker;
    v24 = 0;
    if ( (a5 & 1) != 0 )
    {
      v25 = 1;
      KeAcquireSpinLockAtDpcLevel(p_RefCountTracker);
    }
    else
    {
      v25 = 0;
      v22 = KeAcquireSpinLockRaiseToDpc(p_RefCountTracker);
    }
    p_MediaConnectState = &a1[2].MediaConnectState;
    *(_QWORD *)&a1[2].MediaType = KeGetCurrentThread();
    v27 = v7 + a1[2].MediaConnectState;
    if ( !((unsigned __int64)(v7 + (int)a1[2].MediaConnectState) >> 32) )
    {
      if ( *(_DWORD *)&a1[2].PnPRef.ReferenceCount == 1 && v27 < 0x3E8 )
      {
        LODWORD(a1[2].XmitLinkSpeedIndicateUp) += v7;
        v24 = 1;
        p_RcvLinkSpeed = &a1[2].RcvLinkSpeed;
        RcvLinkSpeed = (_QWORD *)a1[2].RcvLinkSpeed;
        if ( RcvLinkSpeed )
          *RcvLinkSpeed = Alignment;
        else
          a1[2].XmitLinkSpeed = (unsigned __int64)Alignment;
        v30 = Alignment;
        if ( Alignment )
        {
          do
          {
            v30 = Alignment;
            LODWORD(Alignment->ProtocolReserved[0]) = a3;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
          p_RcvLinkSpeed = &a1[2].RcvLinkSpeed;
          p_MediaConnectState = &a1[2].MediaConnectState;
        }
        a1[2].MediaConnectStateIndicateUp += v7;
        *p_MediaConnectState += v7;
        *p_RcvLinkSpeed = v30;
        goto LABEL_34;
      }
      v24 = v27 >= 0x3E8;
    }
    v21 = Alignment;
LABEL_34:
    *(_QWORD *)&a1[2].MediaType = 0LL;
    v31 = (KSPIN_LOCK *)&a1[2].PnPRef.RefCountTracker;
    if ( v25 )
      KeReleaseSpinLockFromDpcLevel(v31);
    else
      KeReleaseSpinLock(v31, v22);
    v8 = a5 & 1;
    goto LABEL_37;
  }
  if ( KeGetCurrentIrql() )
  {
    v6 = a3;
    goto LABEL_20;
  }
  MaxNblCount = ndisPeriodicReceivesGetMaxNblCount((struct _NDIS_MINIPORT_BLOCK *)a1);
  v48 = MaxNblCount;
  v12 = 0LL;
  v49 = 0LL;
  while ( Alignment )
  {
    v51 = Alignment;
    v13 = 0;
    if ( MaxNblCount )
    {
      do
      {
        if ( !Alignment )
          break;
        ++v13;
        v12 = Alignment;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( v13 < MaxNblCount );
      v49 = v12;
    }
    v12->Link.Alignment = 0LL;
    v14 = 0LL;
    v47 = 0;
    v53 = 0;
    if ( KeGetCurrentIrql() == 2
      && ndisPerProcRcvTrackers
      && (LODWORD(v15) = KeGetPcr()->Prcb.Number,
          v32 = ndisPerProcRcvTrackers,
          v33 = 2096 * v15,
          v47 = v15,
          v34 = *((unsigned int *)ndisPerProcRcvTrackers + 524 * v15),
          (unsigned int)v34 < 3) )
    {
      v53 = 1;
      *(_DWORD *)((char *)ndisPerProcRcvTrackers + v33) = v34 + 1;
      Pool2 = (__int64)v32 + 696 * v34 + v33 + 8;
    }
    else
    {
      Pool2 = ExAllocatePool2(66LL, 696LL, 538985550LL);
      if ( !Pool2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v16,
            4,
            11,
            (struct _GUID *)&WPP_f4de16de262a370e16e06d291696dc3d_Traceguids);
        }
        v19 = v51;
        goto LABEL_13;
      }
    }
    RcvLinkSpeedIndicateUp = a1->RcvLinkSpeedIndicateUp;
    v50 = (_QWORD *)RcvLinkSpeedIndicateUp;
    v36 = v51;
    *(_BYTE *)(Pool2 + 692) = 0;
    if ( (a5 & 2) == 0 )
    {
      do
      {
        v14 = v36;
        v36->Flags = v36->Flags & 0xFFFFFFF0 | 4;
        v36 = (struct _NET_BUFFER_LIST *)v36->Link.Alignment;
      }
      while ( v36 );
    }
    v37 = *(struct _NDIS_OPEN_BLOCK **)(RcvLinkSpeedIndicateUp + 328);
    if ( v37 && v37->ProtocolHandle->MajorNdisVersion >= 6u )
    {
      ndisMIndicateNetBufferListsToOpen(v37, v51, a3, v13, v5);
      *(_QWORD *)(Pool2 + 64) = 0LL;
      *(_DWORD *)(Pool2 + 80) = 0;
    }
    else
    {
      *(_QWORD *)(Pool2 + 32) = v14;
      *(_DWORD *)(Pool2 + 40) = a3;
      *(_QWORD *)(Pool2 + 24) = v51;
      *(_QWORD *)(Pool2 + 8) = RcvLinkSpeedIndicateUp;
      *(_DWORD *)(Pool2 + 16) = v5;
      *(_QWORD *)Pool2 = a1;
      *(_DWORD *)(Pool2 + 44) = v13;
      ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
      if ( *(_QWORD *)(Pool2 + 64) || *(_DWORD *)(Pool2 + 688) )
      {
        v38 = v50;
        if ( !*v50 || a3 )
        {
          *(_BYTE *)(Pool2 + 692) = 1;
        }
        else
        {
          ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
          v38 = v50;
        }
        if ( !v37 )
        {
          v39 = (struct _NDIS_OPEN_BLOCK *)v38[1];
          if ( v39 )
          {
            v40 = *(_DWORD *)(Pool2 + 688);
            v41 = *(_DWORD *)(Pool2 + 16) | 2;
            do
            {
              v42 = 0;
              FilterNextOpen = v39->FilterNextOpen;
              do
              {
                v43 = v42++;
                v44 = *(struct _NET_BUFFER_LIST **)(Pool2 + 40 * v43 + 64);
                if ( v44 )
                  ndisMIndicateNetBufferListsToOpen(
                    v39,
                    v44,
                    *(_DWORD *)(Pool2 + 40),
                    *(_DWORD *)(Pool2 + 40 * v43 + 80),
                    v41);
              }
              while ( v42 <= v40 );
              v39 = FilterNextOpen;
            }
            while ( FilterNextOpen );
            v8 = a5 & 1;
            v5 = a5;
            v38 = v50;
          }
          v45 = (struct _NDIS_OPEN_BLOCK *)v38[2];
          if ( v45 )
          {
            if ( (a5 & 2) != 0 )
              ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v45);
            else
              ndisIndicateSortedNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
          }
        }
      }
    }
    if ( !*(_BYTE *)(Pool2 + 692) )
      goto LABEL_14;
    v19 = *(struct _NET_BUFFER_LIST **)(Pool2 + 64);
LABEL_13:
    if ( v19 )
    {
      if ( byte_14011F740 && ((__int64)a1[4].PendingOidRequest & 2) != 0 )
        PktMonClientNblDropNdis((__int64)&a1[4].HigherFilter, (__int64)v19, v18, 1LL, -1073676270, -536866809);
      v20 = a5 & 2;
      if ( (a5 & 2) == 0 )
        ndisReturnNetBufferListsInternal(a1, v19, v8, 0LL);
      goto LABEL_15;
    }
LABEL_14:
    v20 = a5 & 2;
LABEL_15:
    if ( v53 )
    {
      --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v47);
    }
    else if ( Pool2 )
    {
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    v12 = v49;
    if ( v20 )
    {
      if ( v49->Link.Alignment )
      {
        v12 = v51;
        v49 = v51;
        v46 = (struct _NET_BUFFER_LIST *)v51->Link.Alignment;
        if ( v51->Link.Alignment )
        {
          do
          {
            v12 = v46;
            v49 = v46;
            v46 = (struct _NET_BUFFER_LIST *)v46->Link.Alignment;
          }
          while ( v46 );
        }
      }
      v12->Link.Alignment = (unsigned __int64)Alignment;
    }
    MaxNblCount = v48;
  }
}
