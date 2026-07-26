/*
 * XREFs of NdisAllocatePacket @ 0x14002D4A0
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x14002BE50 (NdisAllocatePacketPoolEx.c)
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x14002D010 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     ?ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z @ 0x14002D380 (-ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z.c)
 *     ndisLWM5IndicateReceive @ 0x1400680C0 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisAllocatePacket(PNDIS_STATUS Status, PNDIS_PACKET *Packet, NDIS_HANDLE PoolHandle)
{
  _SLIST_HEADER *v3; // r14
  char *v4; // rbp
  PSLIST_ENTRY v5; // rsi
  PNDIS_PACKET *v7; // rbx
  KSPIN_LOCK *v9; // r12
  KIRQL v10; // al
  char *v11; // r14
  char *v12; // r15
  char *v13; // rax
  unsigned __int64 v14; // rax
  KSPIN_LOCK *v15; // r12
  KIRQL v16; // al
  _QWORD *Alignment; // rdx
  void **Region; // rcx
  char **v19; // rax
  char *v20; // rdi
  int v21; // eax
  LONGLONG v22; // rax
  KIRQL v23; // dl
  unsigned __int64 v24; // rax
  _SLIST_HEADER *Pool2; // rax
  _SLIST_HEADER *v26; // r15
  int v27; // r14d
  _SLIST_HEADER *v28; // r15
  _SLIST_HEADER *v29; // rbp
  unsigned int v30; // esi
  __int64 v31; // rax
  __int64 p_Region; // rcx
  char *v33; // rdi
  unsigned __int64 v34; // rax
  _SLIST_HEADER *ListHead; // [rsp+20h] [rbp-48h]
  _SLIST_HEADER *v36; // [rsp+28h] [rbp-40h]
  KIRQL v38; // [rsp+80h] [rbp+18h]
  KIRQL v39; // [rsp+80h] [rbp+18h]

  v3 = (_SLIST_HEADER *)*((_QWORD *)PoolHandle + 5);
  v4 = (char *)PoolHandle + 40;
  v5 = 0LL;
  v7 = Packet;
  if ( v3 != (_SLIST_HEADER *)((char *)PoolHandle + 40) )
  {
    v5 = ExpInterlockedPopEntrySList(v3 + 2);
    if ( v5 )
    {
      if ( *((_WORD *)PoolHandle + 4) <= 1u || ExQueryDepthSList(v3 + 2) )
        goto LABEL_21;
      v15 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
      Alignment = (_QWORD *)v3->Alignment;
      v39 = v16;
      if ( *(_SLIST_HEADER **)(v3->Alignment + 8) == v3 )
      {
        Region = (void **)v3->Region;
        if ( *Region == v3 )
        {
          *Region = Alignment;
          Alignment[1] = Region;
          if ( ExQueryDepthSList(v3 + 2) )
          {
            v24 = *(_QWORD *)v4;
            if ( *(char **)(*(_QWORD *)v4 + 8LL) == v4 )
            {
              v3->Alignment = v24;
              v3->Region = (unsigned __int64)v4;
              *(_QWORD *)(v24 + 8) = v3;
              v21 = 0;
              *(_QWORD *)v4 = v3;
              goto LABEL_15;
            }
          }
          else
          {
            v19 = (char **)*((_QWORD *)PoolHandle + 8);
            v20 = (char *)PoolHandle + 56;
            if ( *v19 == v20 )
            {
              v3->Region = (unsigned __int64)v19;
              v3->Alignment = (unsigned __int64)v20;
              *v19 = (char *)v3;
              v21 = 1;
              *((_QWORD *)v20 + 1) = v3;
LABEL_15:
              LODWORD(v3[3].Alignment) = v21;
              KeReleaseSpinLock(v15, v39);
LABEL_21:
              *v7 = (PNDIS_PACKET)v5;
              *Status = 0;
              *(_DWORD *)&(*v7)[-1].ProtocolReserved[4] = -1;
              *(_DWORD *)(*v7)[-1].ProtocolReserved = -1;
              *(_QWORD *)&(*v7)->ProtocolReserved[(*v7)->Private.NdisPacketOobOffset] = *v7;
              (*v7)->Private.Head = 0LL;
              (*v7)->Private.ValidCounts = 0;
              (*v7)->Private.NdisPacketFlags = 0x80;
              return;
            }
          }
        }
      }
LABEL_6:
      __fastfail(3u);
    }
  }
  v9 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
  v11 = (char *)*((_QWORD *)PoolHandle + 9);
  v12 = (char *)PoolHandle + 72;
  v38 = v10;
  if ( v11 != (char *)PoolHandle + 72 )
  {
    if ( *((char **)v11 + 1) != v12 )
      goto LABEL_6;
    v13 = *(char **)v11;
    if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
      goto LABEL_6;
    *(_QWORD *)v12 = v13;
    *((_QWORD *)v13 + 1) = v12;
    v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v11 + 2);
    v14 = *(_QWORD *)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 )
      goto LABEL_6;
    *(_QWORD *)v11 = v14;
    *((_QWORD *)v11 + 1) = v4;
    *(_QWORD *)(v14 + 8) = v11;
    *(_QWORD *)v4 = v11;
    *((_DWORD *)v11 + 12) = 0;
    if ( *(char **)v12 == v12 )
    {
      v22 = 0LL;
      v9 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
    }
    else
    {
      v22 = *(_QWORD *)(*(_QWORD *)v12 + 16LL) + PoolAgingTicks.QuadPart;
    }
    *((_QWORD *)PoolHandle + 13) = v22;
LABEL_19:
    v23 = v38;
    goto LABEL_20;
  }
  if ( *((_DWORD *)PoolHandle + 3) < (int)*((unsigned __int16 *)PoolHandle + 4) )
  {
    Pool2 = (_SLIST_HEADER *)ExAllocatePool2(64LL, *((unsigned int *)PoolHandle + 5), *(unsigned int *)PoolHandle);
    v36 = Pool2;
    v26 = Pool2;
    if ( Pool2 )
    {
      ++*((_DWORD *)PoolHandle + 3);
      ListHead = Pool2 + 2;
      Pool2->Region = (unsigned __int64)Pool2;
      Pool2->Alignment = (unsigned __int64)Pool2;
      InitializeSListHead(Pool2 + 2);
      v27 = *((unsigned __int16 *)PoolHandle + 3);
      if ( *((_WORD *)PoolHandle + 3) )
      {
        v28 = v26 + 4;
        do
        {
          v29 = &v28[3 * ndisPacketStackSize + 1];
          *((_BYTE *)&v29[2].HeaderX64 + 9) = 0;
          v28 = (_SLIST_HEADER *)((char *)v28 + *((unsigned __int16 *)PoolHandle + 2));
          ExpInterlockedPushEntrySList(ListHead, (PSLIST_ENTRY)v29);
          v29[1].Region = (unsigned __int64)PoolHandle;
          v30 = 0;
          *((_DWORD *)&v29[2].HeaderX64 + 1) = *((_DWORD *)PoolHandle + 4);
          v31 = (unsigned __int16)(*((_WORD *)PoolHandle + 2) - 48 * ndisPacketStackSize - 152);
          *((_WORD *)&v29[2].HeaderX64 + 5) = v31;
          for ( *(unsigned __int64 *)((char *)&v29[6].Alignment + v31) = (unsigned __int64)v29;
                v30 < ndisPacketStackSize;
                ++v30 )
          {
            *((_DWORD *)&v29[-1].HeaderX64 + 3) = v30;
            if ( v30 >= ndisPacketStackSize )
              p_Region = 40LL;
            else
              p_Region = (__int64)&v29[3 * (v30 - (unsigned __int64)ndisPacketStackSize) + 1].Region;
            KeInitializeSpinLock((PKSPIN_LOCK)p_Region);
          }
          --v27;
        }
        while ( v27 );
        v7 = Packet;
        v9 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
        v26 = v36;
      }
      v33 = (char *)PoolHandle + 40;
      v5 = ExpInterlockedPopEntrySList(v26 + 2);
      v34 = *(_QWORD *)v33;
      if ( *(char **)(*(_QWORD *)v33 + 8LL) != v33 )
        goto LABEL_6;
      v26->Alignment = v34;
      v26->Region = (unsigned __int64)v33;
      *(_QWORD *)(v34 + 8) = v26;
      *(_QWORD *)v33 = v26;
      LODWORD(v26[3].Alignment) = 0;
    }
    goto LABEL_19;
  }
  v23 = v10;
LABEL_20:
  KeReleaseSpinLock(v9, v23);
  if ( v5 )
    goto LABEL_21;
  *v7 = 0LL;
  *Status = -1073741670;
}
