/*
 * XREFs of ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14008B6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140026050 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x14002A520 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     ?ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z @ 0x14002BAB0 (-ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x14002C180 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     PktMonClientNblLogNdis @ 0x14003EC20 (PktMonClientNblLogNdis.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1400577A0 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     NdisMPauseComplete @ 0x140066AD0 (NdisMPauseComplete.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMIndicatePacketsToNetBufferLists(
        char *MiniportAdapterHandle,
        struct _NDIS_PACKET **a2,
        unsigned int a3)
{
  int v3; // ebx
  bool v5; // al
  struct _NET_BUFFER_LIST *v6; // rsi
  int v7; // ebp
  unsigned int v8; // r13d
  KIRQL v9; // al
  int v10; // ecx
  __int64 v11; // r8
  int v12; // r12d
  unsigned __int64 *v13; // r15
  struct NDIS_NBL_TRACKER_HANDLE__ **v14; // rbp
  __int64 v15; // rax
  int v16; // r14d
  struct _NET_BUFFER_LIST *Alignment; // rbx
  struct _NDIS_PACKET *v18; // rax
  __int64 NdisPacketOobOffset; // rdx
  KIRQL v20; // al
  unsigned int v21; // ecx
  bool v22; // zf
  struct _NET_BUFFER_LIST *v23; // rbx
  int v24; // ebp
  __int64 v25; // rsi
  struct _NDIS_PACKET **v26; // rbx
  struct _NDIS_PACKET *v27; // rdx
  __int64 v28; // rcx
  int v29; // [rsp+40h] [rbp-88h]
  _QWORD v30[2]; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-70h]
  __int128 v32; // [rsp+5Ch] [rbp-6Ch]
  __int64 v33; // [rsp+6Ch] [rbp-5Ch]
  int v34; // [rsp+74h] [rbp-54h]
  bool v35; // [rsp+D0h] [rbp+8h]
  unsigned int v38; // [rsp+E8h] [rbp+20h]

  v32 = 0uLL;
  v3 = 0;
  v33 = 0LL;
  v34 = 0;
  v31 = a3;
  v30[1] = a2;
  v30[0] = MiniportAdapterHandle;
  while ( 1 )
  {
    v5 = ndisXlateRecvPacketArrayToNetBufferLists((struct _NDIS_PKT_ARRAY_TO_NBLS *)v30);
    v6 = *(struct _NET_BUFFER_LIST **)((char *)&v32 + 4);
    v7 = HIDWORD(v32);
    v35 = v5;
    v38 = HIDWORD(v32);
    if ( !*(_QWORD *)((char *)&v32 + 4) )
      goto LABEL_29;
    v29 = HIDWORD(v32);
    v8 = HIDWORD(v32) - v3;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 250);
    *((_QWORD *)MiniportAdapterHandle + 252) = KeGetCurrentThread();
    v10 = *((_DWORD *)MiniportAdapterHandle + 502);
    if ( v10 == 5 || v10 == 6 )
      break;
    *((_DWORD *)MiniportAdapterHandle + 503) += v8;
    *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v9);
    v12 = HIDWORD(v33);
    if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x8000) != 0 && (v33 & 0x200000000LL) == 0 )
      _InterlockedAdd((volatile signed __int32 *)MiniportAdapterHandle + 457, v8);
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        v6,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 510),
        *((_QWORD *)MiniportAdapterHandle + 313),
        (v12 & 2 | 0x100u) >> 1,
        0);
    v13 = (unsigned __int64 *)(MiniportAdapterHandle + 4080);
    v14 = (struct NDIS_NBL_TRACKER_HANDLE__ **)(MiniportAdapterHandle + 2504);
    if ( byte_14011F740 )
    {
      v15 = *((_QWORD *)MiniportAdapterHandle + 738);
      if ( v15 )
      {
        if ( (*(_DWORD *)(v15 + 56) & 1) != 0 )
        {
          PktMonClientNblLogNdis((__int64)(MiniportAdapterHandle + 5880), (__int64)v6, v11, 1);
          v13 = (unsigned __int64 *)(MiniportAdapterHandle + 4080);
          v14 = (struct NDIS_NBL_TRACKER_HANDLE__ **)(MiniportAdapterHandle + 2504);
        }
      }
    }
    ndisInvokeNextReceiveHandler(
      v6,
      0,
      v33,
      v12,
      *((struct _NDIS_FILTER_BLOCK **)MiniportAdapterHandle + 314),
      *((void **)MiniportAdapterHandle + 312),
      *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))MiniportAdapterHandle
      + 328));
    if ( (v12 & 2) != 0 )
    {
      v16 = *((_DWORD *)MiniportAdapterHandle + 30) & 0x40000;
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(v6, *v14, *v13, 0x8Eu, 0);
      do
      {
        Alignment = (struct _NET_BUFFER_LIST *)v6->Link.Alignment;
        v18 = ndisXlateReturnNetBufferListToPacket(v6);
        NdisPacketOobOffset = v18->Private.NdisPacketOobOffset;
        if ( *(unsigned int *)((char *)&v18->Private.Count + NdisPacketOobOffset) != -1073741670 )
        {
          if ( v16 )
          {
            if ( (v18[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v18[-1].ProtocolReserved[4] == -1 )
              NDIS_FREE_XFER_DATA_PACKET(v18);
            else
              (*((void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))MiniportAdapterHandle + 270))(
                *((_QWORD *)MiniportAdapterHandle + 3),
                v18);
          }
          else
          {
            *(unsigned int *)((char *)&v18->Private.Count + NdisPacketOobOffset) = 0;
          }
        }
        v6 = Alignment;
      }
      while ( Alignment );
      v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 250);
      *((_QWORD *)MiniportAdapterHandle + 252) = KeGetCurrentThread();
      v21 = *((_DWORD *)MiniportAdapterHandle + 503) - v8;
      v22 = *((_DWORD *)MiniportAdapterHandle + 502) == 5;
      *((_DWORD *)MiniportAdapterHandle + 503) = v21;
      if ( v22 && !v21 )
      {
        *((_DWORD *)MiniportAdapterHandle + 502) = 6;
        *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v20);
        NdisMPauseComplete(MiniportAdapterHandle);
        goto LABEL_35;
      }
      *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v20);
    }
    v5 = v35;
    v3 = v29;
    *(_QWORD *)((char *)&v32 + 4) = 0LL;
LABEL_29:
    if ( !v5 )
      goto LABEL_35;
  }
  *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v9);
  do
  {
    v23 = (struct _NET_BUFFER_LIST *)v6->Link.Alignment;
    ndisXlateReturnNetBufferListToPacket(v6);
    v6 = v23;
  }
  while ( v23 );
  v38 = v7 - v8;
LABEL_35:
  if ( v38 < a3 )
  {
    v24 = *((_DWORD *)MiniportAdapterHandle + 30) & 0x40000;
    v25 = a3 - v38;
    v26 = &a2[v38];
    do
    {
      v27 = *v26++;
      v28 = v27->Private.NdisPacketOobOffset;
      if ( *(unsigned int *)((char *)&v27->Private.Count + v28) != -1073741670 )
      {
        if ( v24 )
        {
          if ( (v27[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v27[-1].ProtocolReserved[4] == -1 )
            NDIS_FREE_XFER_DATA_PACKET(v27);
          else
            (*((void (__fastcall **)(_QWORD))MiniportAdapterHandle + 270))(*((_QWORD *)MiniportAdapterHandle + 3));
        }
        else
        {
          *(unsigned int *)((char *)&v27->Private.Count + v28) = 0;
        }
      }
      --v25;
    }
    while ( v25 );
  }
}
