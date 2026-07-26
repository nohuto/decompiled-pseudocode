/*
 * XREFs of ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x14002C330
 * Callers:
 *     ?ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14002C240 (-ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400D7EF0 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z @ 0x14002D380 (-ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z.c)
 *     NdisGetNetBufferListProtocolId @ 0x14002DB90 (NdisGetNetBufferListProtocolId.c)
 *     ?ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z @ 0x14002DBB0 (-ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140038F90 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x14003CDB0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 */

__int64 __fastcall ndisXlateSendNetBufferListsToPacketArray(struct _NDIS_NBLS_TO_PKT_ARRAY *a1, char a2)
{
  __int64 v2; // r8
  struct _NET_BUFFER_LIST *v3; // r10
  struct _NET_BUFFER *v4; // r11
  char v5; // al
  unsigned int v6; // edx
  unsigned __int8 v8; // di
  struct _NET_BUFFER_LIST *v9; // rsi
  struct _NDIS_MINIPORT_BLOCK *v10; // rcx
  __int64 v11; // r12
  int v12; // r13d
  struct _NET_BUFFER *j; // r14
  char v14; // r15
  $C131B15FD43064285254C2B43A43CB7C *FirstNetBuffer; // r15
  _MDL *i; // rdi
  PVOID MappedSystemVa; // rax
  struct _NET_BUFFER_LIST *v18; // rax
  struct _NET_BUFFER *v20; // rax
  int v21; // ecx
  struct _NDIS_PACKET **v22; // rbp
  struct _NDIS_PACKET *v23; // rbp
  unsigned int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // ecx
  unsigned __int8 NdisPacketFlags; // al
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // al
  _DWORD *v30; // r9
  struct _NET_BUFFER_LIST *v31; // rax
  struct _NET_BUFFER_LIST *Alignment; // rax
  signed __int32 v33; // eax
  signed __int32 v34; // eax
  __int64 v35; // [rsp+30h] [rbp-68h]
  struct _NDIS_MINIPORT_BLOCK *v36; // [rsp+38h] [rbp-60h]
  struct _NET_BUFFER_LIST *v37; // [rsp+40h] [rbp-58h]
  _QWORD *p_Alignment; // [rsp+48h] [rbp-50h]
  char v39; // [rsp+A0h] [rbp+8h]
  unsigned int v41; // [rsp+B0h] [rbp+18h]
  struct _NET_BUFFER *v42; // [rsp+B8h] [rbp+20h]

  v2 = *(_QWORD *)a1;
  v3 = 0LL;
  v4 = (struct _NET_BUFFER *)*((_QWORD *)a1 + 3);
  v5 = a2;
  v6 = *((_DWORD *)a1 + 2);
  v8 = 1;
  v9 = (struct _NET_BUFFER_LIST *)*((_QWORD *)a1 + 2);
  v10 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 5);
  v11 = 0LL;
  v12 = 0;
  j = 0LL;
  v14 = 0;
  v35 = v2;
  v41 = v6;
  v42 = v4;
  v39 = 0;
  v36 = v10;
  v37 = 0LL;
  p_Alignment = 0LL;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( v5 && (v10->SendFlags & 2) == 0 )
      {
        FirstNetBuffer = ($C131B15FD43064285254C2B43A43CB7C *)v9->FirstNetBuffer;
        v12 = 0;
        if ( FirstNetBuffer )
        {
          do
          {
            for ( i = FirstNetBuffer->MdlChain; i; i = i->Next )
            {
              if ( (i->MdlFlags & 5) != 0 )
                MappedSystemVa = i->MappedSystemVa;
              else
                MappedSystemVa = MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, 0x40000020u);
              if ( !MappedSystemVa )
              {
                v12 = -1073741670;
                break;
              }
            }
            FirstNetBuffer = ($C131B15FD43064285254C2B43A43CB7C *)FirstNetBuffer->Link.Alignment;
          }
          while ( FirstNetBuffer );
          if ( v12 )
          {
            Alignment = (struct _NET_BUFFER_LIST *)v9->Link.Alignment;
            v9->Link.Alignment = 0LL;
            v9->Status = v12;
            if ( v37 )
              *p_Alignment = v9;
            else
              v37 = v9;
            p_Alignment = &v9->Link.Alignment;
            v9 = Alignment;
            goto LABEL_52;
          }
          v6 = v41;
          v2 = v35;
          v4 = v42;
        }
        v14 = v39;
      }
      if ( (v9->Flags & 0x10) != 0 && (v9->NblFlags & 1) != 0 )
      {
        if ( (unsigned int)v11 >= v6 )
          goto LABEL_13;
        v30 = v9->NdisReserved[0];
        *(_QWORD *)(v2 + 8 * v11) = v30;
        v11 = (unsigned int)(v11 + 1);
        v30[9] |= 0x4000u;
        *(_QWORD *)((char *)v30 + *((unsigned __int16 *)v30 + 21) + 112) = v9;
        v31 = (struct _NET_BUFFER_LIST *)v9->Link.Alignment;
        v9->Status = 0;
        v9 = v31;
        if ( v31 )
        {
          v4 = v31->FirstNetBuffer;
          v42 = v4;
        }
        if ( *(int *)ndisNblTrackerMode >= 3 )
        {
          ndisNblTrackerRecordEventInternal(v31, 0LL, 0x17u, v30, 0);
LABEL_52:
          v4 = v42;
          v2 = v35;
          v6 = v41;
        }
        if ( !v9 )
          goto LABEL_13;
        v14 = v39;
        v5 = a2;
        v10 = v36;
      }
      else
      {
        v20 = v9->FirstNetBuffer;
        if ( v4 == v20 )
        {
          LODWORD(v9->MiniportReserved[0]) = 0;
          if ( v20 )
          {
            v21 = 0;
            do
            {
              LODWORD(v9->MiniportReserved[0]) = ++v21;
              v20 = (struct _NET_BUFFER *)v20->Link.Alignment;
            }
            while ( v20 );
          }
        }
        for ( j = v4; j; j = (struct _NET_BUFFER *)j->Link.Alignment )
        {
          if ( (unsigned int)v11 >= v6 )
            goto LABEL_13;
          v22 = (struct _NDIS_PACKET **)(v2 + 8 * v11);
          v12 = ndisNetBufferToPacket(j, 1u, v22);
          if ( v12 )
            goto LABEL_13;
          v23 = *v22;
          ndisCopyNBLInfoToPacket(v9, v23, 0LL);
          v23->Private.Flags &= 0xFFFFFFF0;
          v23->Private.Flags |= NdisGetNetBufferListProtocolId(v9);
          if ( *(int *)ndisNblTrackerMode >= 3 )
            ndisNblTrackerRecordEventInternal(v9, 0LL, 0x13u, v23, 0);
          v24 = *(_DWORD *)&v23[-1].ProtocolReserved[4] + 1;
          *(_DWORD *)&v23[-1].ProtocolReserved[4] = v24;
          if ( v24 >= ndisPacketStackSize )
            v25 = 16LL;
          else
            v25 = (__int64)v23 + 48 * (v24 - (unsigned __int64)ndisPacketStackSize);
          v2 = v35;
          *(_QWORD *)v25 = v9->SourceHandle;
          v6 = v41;
          v14 |= (*((_DWORD *)a1 + 9) & 2) != 0;
          v39 = v14;
          v26 = v23->Private.Flags | 0x80;
          if ( v14 )
            v26 = v23->Private.Flags & 0xFFFFFF7F;
          v23->Private.Flags = v26;
          NdisPacketFlags = v23->Private.NdisPacketFlags;
          v28 = NdisPacketFlags | 0x20;
          v29 = NdisPacketFlags & 0xDF;
          if ( (v9->Flags & 0x800) == 0 )
            v28 = v29;
          v11 = (unsigned int)(v11 + 1);
          v23->Private.NdisPacketFlags = v28;
          *(_MDL **)((char *)&v23[1].Private.Head + v23->Private.NdisPacketOobOffset) = (_MDL *)j;
          j->MiniportReserved[0] = v9;
        }
        if ( v12 || (v18 = (struct _NET_BUFFER_LIST *)v9->Link.Alignment, v9->Status = 0, (v9 = v18) == 0LL) )
        {
LABEL_13:
          v3 = v37;
          v8 = 1;
          v4 = v42;
          v10 = v36;
          break;
        }
        v4 = v18->FirstNetBuffer;
        v5 = a2;
        v10 = v36;
        v42 = v4;
      }
    }
  }
  *((_DWORD *)a1 + 8) = v11;
  *((_QWORD *)a1 + 2) = v9;
  if ( v9 )
  {
    if ( !j )
      j = v4;
  }
  else
  {
    j = 0LL;
  }
  *((_QWORD *)a1 + 3) = j;
  if ( v12 || !v9 )
  {
    v8 = 0;
    if ( v9 )
    {
      if ( j && j != v9->FirstNetBuffer )
      {
        do
        {
          v33 = _InterlockedExchangeAdd((volatile signed __int32 *)v9->MiniportReserved, 0xFFFFFFFF);
          j = (struct _NET_BUFFER *)j->Link.Alignment;
          v34 = v33 - 1;
        }
        while ( j );
        if ( !v34 )
          *((_QWORD *)a1 + 3) = v9->FirstNetBuffer;
      }
      NdisSetStatusInNblChain(v9, -1073741670);
      v10 = v36;
    }
  }
  if ( v3 )
    ndisMSendNetBufferListsCompleteInternal(v10, v3, *((_DWORD *)a1 + 9) & 1, 0);
  return v8;
}
