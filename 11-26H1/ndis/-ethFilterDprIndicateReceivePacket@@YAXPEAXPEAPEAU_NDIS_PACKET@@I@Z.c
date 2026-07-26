/*
 * XREFs of ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14007C740
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x14002C180 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x14002D870 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003C3E0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1400A4A70 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     ?ethFilterReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z @ 0x1400B4314 (-ethFilterReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ethFilterDprIndicateReceivePacket(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PACKET **a2,
        unsigned int a3)
{
  unsigned int v3; // r10d
  unsigned int Number; // r14d
  int v7; // ebp
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  KIRQL v10; // al
  struct _NDIS_PACKET *v11; // rdi
  unsigned int v12; // eax
  _MDL *Head; // rbx
  char *v14; // rdx
  char *MappedSystemVa; // r12
  char *v16; // rax
  struct _MDL *Next; // rcx
  __int64 ByteCount; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // r11
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // r11d
  _NDIS_PACKET ***p_IndicatedPacket; // rsi
  _NDIS_OID_REQUEST *v25; // rdx
  unsigned int v26; // ebp
  __int64 v27; // rax
  _NDIS_PACKET *v28; // r14
  struct _NET_BUFFER_LIST *v29; // rcx
  __int16 v30; // ax
  __int64 v31; // rax
  _NDIS_MINIPORT_STATS *BottomIfStats; // rdx
  _NDIS_MINIPORT_STATS *v33; // rcx
  _NDIS_MINIPORT_STATS *v34; // rdx
  __int64 v35; // rax
  int v36; // r15d
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // r14
  char v40; // r8
  __int64 v41; // rax
  _NDIS_OID_REQUEST *IndicatedPacket; // rdx
  unsigned int v43; // esi
  __int64 v44; // rax
  _NDIS_PACKET *v45; // rbp
  struct _NET_BUFFER_LIST *v46; // rcx
  __int16 v47; // ax
  __int64 NdisPacketOobOffset; // rax
  int v49; // eax
  int v50; // r15d
  _NDIS_MINIPORT_STATS *v51; // rdx
  _NDIS_MINIPORT_STATS *v52; // rcx
  _NDIS_MINIPORT_STATS *v53; // rdx
  __int64 v54; // rax
  _NDIS_MINIPORT_STATS *v55; // rdx
  _NDIS_MINIPORT_STATS *v56; // rcx
  _NDIS_MINIPORT_STATS *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rbp
  __int64 v60; // r14
  int v61; // r11d
  unsigned int v62; // ecx
  __int64 v63; // rbx
  __int64 v64; // rax
  unsigned int v65; // ecx
  __int64 v66; // r8
  int v67; // ecx
  int v68; // edx
  __int64 v69; // rax
  int v70; // r11d
  _NDIS_OID_REQUEST *v71; // rdx
  unsigned int v72; // ebx
  __int64 v73; // rax
  _NDIS_PACKET *v74; // rsi
  struct _NET_BUFFER_LIST *v75; // rcx
  __int16 v76; // ax
  __int64 v77; // rax
  char v78; // al
  char *v79; // rcx
  struct _NET_BUFFER_LIST *v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rbx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rax
  KIRQL v88; // cl
  signed __int32 v89[8]; // [rsp+0h] [rbp-B8h] BYREF
  ULONG v90; // [rsp+30h] [rbp-88h]
  ULONG v91; // [rsp+40h] [rbp-78h]
  int v92; // [rsp+44h] [rbp-74h]
  unsigned int v93; // [rsp+48h] [rbp-70h]
  unsigned int v94; // [rsp+4Ch] [rbp-6Ch]
  unsigned __int8 v95[8]; // [rsp+50h] [rbp-68h]
  struct _NDIS_PACKET **v96; // [rsp+58h] [rbp-60h]
  unsigned __int64 EthDB; // [rsp+60h] [rbp-58h]
  char *v98; // [rsp+68h] [rbp-50h]
  char v99; // [rsp+C0h] [rbp+8h]
  struct _NDIS_PACKET **BugCheckParameter4; // [rsp+C8h] [rbp+10h]
  unsigned int v102; // [rsp+D8h] [rbp+20h]

  BugCheckParameter4 = a2;
  Number = KeGetPcr()->Prcb.Number;
  EthDB = (unsigned __int64)a1->EthDB;
  v96 = a2;
  v7 = 0;
  v8 = *(_QWORD *)(EthDB + 288);
  v92 = 0;
  v93 = Number;
  if ( (a1->PnPFlags & 0x80000000) == 0 )
  {
    v10 = KfRaiseIrql(2u);
    v9 = (_QWORD *)(*(_QWORD *)(v8 + 32) + (KeGetPcr()->Prcb.Number << 12));
    v99 = v10;
    ++*v9;
    _InterlockedOr(v89, 0);
    if ( !*(_QWORD *)(v8 + 16) || *v9 > 1uLL )
    {
LABEL_9:
      a2 = v96;
      goto LABEL_10;
    }
LABEL_7:
    if ( *(struct _KTHREAD **)(v8 + 24) != KeGetCurrentThread() )
    {
      *v9 = 0LL;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 16));
      *v9 = 1LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 16));
    }
    goto LABEL_9;
  }
  v9 = (_QWORD *)(*(_QWORD *)(v8 + 32) + (KeGetPcr()->Prcb.Number << 12));
  v99 = 2;
  ++*v9;
  _InterlockedOr(v89, 0);
  if ( *(_QWORD *)(v8 + 16) && *v9 <= 1uLL )
    goto LABEL_7;
LABEL_10:
  v94 = 0;
  if ( !a3 )
    goto LABEL_174;
  while ( 1 )
  {
    v11 = *a2;
    if ( *(_DWORD *)&(*a2)[-1].ProtocolReserved[4] != -1 && (a1->Flags & 0x8000) == 0 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        a1->pAdapterInstanceName,
        "Indicating packet not owned by it");
      KeBugCheckEx(0x7Cu, 5uLL, (ULONG_PTR)a1, (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4);
    }
    v12 = *(_DWORD *)&v11[-1].ProtocolReserved[4] + 1;
    *(_DWORD *)&v11[-1].ProtocolReserved[4] = v12;
    if ( v12 >= ndisPacketStackSize )
      *(_QWORD *)v95 = 16LL;
    else
      *(_QWORD *)v95 = (char *)v11 + 48 * (v12 - (unsigned __int64)ndisPacketStackSize);
    Head = v11->Private.Head;
    v14 = (char *)v11 + v11->Private.NdisPacketOobOffset;
    v98 = v14;
    if ( (Head->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = (char *)Head->MappedSystemVa;
    }
    else
    {
      v16 = (char *)MmMapLockedPages(Head, 0);
      v14 = v98;
      MappedSystemVa = v16;
    }
    Next = Head->Next;
    ByteCount = Head->ByteCount;
    v91 = Head->ByteCount;
    if ( Next )
    {
      do
      {
        ByteCount = (unsigned int)(Next->ByteCount + ByteCount);
        Next = Next->Next;
      }
      while ( Next );
      v91 = ByteCount;
    }
    v19 = *(_QWORD *)v95;
    *(_DWORD *)(*(_QWORD *)v95 + 8LL) = -1;
    *(_DWORD *)(v19 + 12) = 0;
    *(_QWORD *)v19 = a1;
    v11->Private.ValidCounts = 0;
    if ( *((_DWORD *)v14 + 8) == -1073741670 || (a1->PnPFlags & 0x800) != 0 )
    {
      LOBYTE(v3) = 1;
    }
    else
    {
      if ( (a1->Flags & 0x8000) == 0 )
        *((_DWORD *)v14 + 8) = 0;
      LOBYTE(v3) = 0;
    }
    v20 = EthDB;
    v102 = v3;
    v21 = *(_QWORD *)(EthDB + 328);
    if ( !v21 || *(_DWORD *)(v21 + 608) >= 6u )
    {
      if ( (unsigned int)ByteCount < 0xE )
      {
        v50 = 32;
      }
      else
      {
        if ( (*MappedSystemVa & 1) == 0 )
        {
          if ( (v11->Private.Flags & 0x20000) == 0 && (v11->Private.NdisPacketFlags & 2) == 0 )
          {
            BottomIfStats = a1->BottomIfStats;
            if ( BottomIfStats )
            {
              v33 = &BottomIfStats[KeGetPcr()->Prcb.Number];
              v33->ifHCInUcastOctets += (unsigned int)ByteCount;
              v33->ifHCInOctets += (unsigned int)ByteCount;
            }
            v34 = a1->BottomIfStats;
            if ( v34 )
            {
              v35 = KeGetPcr()->Prcb.Number;
              ++v34[v35].ifHCInUcastPkts;
            }
          }
          v11->Private.Flags &= ~0x20000u;
          v36 = 0;
          if ( (*(_DWORD *)(v20 + 304) & 0xA4) != 0
            && (*(_DWORD *)(v20 + 338) != *(_DWORD *)(MappedSystemVa + 2)
             || *(_WORD *)(v20 + 336) != *(_WORD *)MappedSystemVa) )
          {
            v36 = 1;
          }
          v37 = *(_QWORD *)v20;
          if ( !*(_QWORD *)v20 )
            goto LABEL_127;
          while ( 1 )
          {
            v38 = *(_DWORD *)(v37 + 432);
            v39 = *(_QWORD *)(v37 + 424);
            if ( (v38 & 0xA0) != 0 )
              break;
            v40 = 0;
            if ( !v36 && (v38 & 1) != 0 )
              goto LABEL_65;
LABEL_81:
            v3 = v102;
            v37 = v39;
            if ( !v39 )
              goto LABEL_127;
          }
          v40 = 1;
LABEL_65:
          if ( (v11->Private.Flags & 0x80u) == 0
            || *(_QWORD *)&v11->MacReserved[v11->Private.NdisPacketOobOffset + 24] != v37 )
          {
            v41 = *(_QWORD *)(v37 + 720);
            v92 = v7 + 1;
            *(_BYTE *)((v93 << 12) + v41) = 1;
            IndicatedPacket = (_NDIS_OID_REQUEST *)a1->IndicatedPacket;
            v43 = *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset);
            v44 = KeGetPcr()->Prcb.Number;
            v45 = (_NDIS_PACKET *)*((_QWORD *)&IndicatedPacket->Header.Type + v44);
            *((_QWORD *)&IndicatedPacket->Header.Type + v44) = v11;
            if ( (_BYTE)v3 || !*(_QWORD *)(v37 + 160) || v40 && !*(_QWORD *)(v20 + 328) )
            {
              NdisPacketOobOffset = v11->Private.NdisPacketOobOffset;
              v90 = v91 - 14;
              *(unsigned int *)((char *)&v11->Private.Count + NdisPacketOobOffset) = -1073741670;
              (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, char *, __int64, char *, ULONG, ULONG))(v37 + 128))(
                *(_QWORD *)(v37 + 32),
                v11,
                MappedSystemVa,
                14LL,
                MappedSystemVa + 14,
                v11->Private.Head->ByteCount - 14,
                v90);
              v19 = *(_QWORD *)v95;
              *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = v43;
            }
            else
            {
              v46 = *(struct _NET_BUFFER_LIST **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset);
              if ( v46 && v43 == -1073741670 )
                ndisNblTrackerTransferOwnershipSingleNbl(
                  v46,
                  (struct NDIS_NBL_TRACKER_HANDLE__ *)IndicatedPacket,
                  *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v37 + 584),
                  v19);
              v47 = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v37 + 160))(*(_QWORD *)(v37 + 32), v11);
              v19 = *(_QWORD *)v95;
              *(_DWORD *)(*(_QWORD *)v95 + 12LL) += v47;
            }
            if ( *(int *)(v19 + 12) > 0 )
            {
              v49 = (unsigned __int8)v102;
              if ( (*(_DWORD *)(v37 + 224) & 8) == 0 )
                v49 = 1;
              v102 = v49;
            }
            v20 = EthDB;
            a1->IndicatedPacket[KeGetPcr()->Prcb.Number] = v45;
            v7 = v92;
          }
          goto LABEL_81;
        }
        if ( *MappedSystemVa == -1
          && MappedSystemVa[1] == -1
          && MappedSystemVa[2] == -1
          && MappedSystemVa[3] == -1
          && MappedSystemVa[4] == -1
          && MappedSystemVa[5] == -1 )
        {
          v50 = 8;
          if ( (v11->Private.Flags & 0x20000) == 0 && (v11->Private.NdisPacketFlags & 2) == 0 )
          {
            v51 = a1->BottomIfStats;
            if ( v51 )
            {
              v52 = &v51[KeGetPcr()->Prcb.Number];
              v52->ifHCInBroadcastOctets += (unsigned int)ByteCount;
              v52->ifHCInOctets += (unsigned int)ByteCount;
            }
            v53 = a1->BottomIfStats;
            if ( v53 )
            {
              v54 = KeGetPcr()->Prcb.Number;
              ++v53[v54].ifHCInBroadcastPkts;
              v11->Private.Flags &= ~0x20000u;
              goto LABEL_103;
            }
          }
        }
        else
        {
          v50 = 2;
          if ( (v11->Private.Flags & 0x20000) == 0 && (v11->Private.NdisPacketFlags & 2) == 0 )
          {
            v55 = a1->BottomIfStats;
            if ( v55 )
            {
              v56 = &v55[KeGetPcr()->Prcb.Number];
              v56->ifHCInMulticastOctets += (unsigned int)ByteCount;
              v56->ifHCInOctets += (unsigned int)ByteCount;
            }
            v57 = a1->BottomIfStats;
            if ( v57 )
            {
              v58 = KeGetPcr()->Prcb.Number;
              ++v57[v58].ifHCInMulticastPkts;
            }
          }
        }
        v11->Private.Flags &= ~0x20000u;
      }
LABEL_103:
      v59 = *(_QWORD *)v20;
      if ( !*(_QWORD *)v20 )
        goto LABEL_127;
      while ( 1 )
      {
        v60 = *(_QWORD *)(v59 + 424);
        if ( (v11->Private.Flags & 0x80u) != 0
          && *(_QWORD *)&v11->MacReserved[v11->Private.NdisPacketOobOffset + 24] == v59 )
        {
          goto LABEL_126;
        }
        v61 = *(_DWORD *)(v59 + 432);
        if ( (v61 & 0xA0) != 0 )
          goto LABEL_132;
        if ( v50 == 8 )
        {
          if ( (v61 & 8) != 0 )
            goto LABEL_132;
        }
        else if ( v50 == 2 )
        {
          if ( (v61 & 4) != 0 )
          {
LABEL_132:
            v69 = *(_QWORD *)(v59 + 720);
            v70 = *(_DWORD *)(v59 + 432) & 0xA0;
            ++v92;
            *(_BYTE *)((v93 << 12) + v69) = 1;
            v71 = (_NDIS_OID_REQUEST *)a1->IndicatedPacket;
            v72 = *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset);
            v73 = KeGetPcr()->Prcb.Number;
            v74 = (_NDIS_PACKET *)*((_QWORD *)&v71->Header.Type + v73);
            *((_QWORD *)&v71->Header.Type + v73) = v11;
            if ( (_BYTE)v102 || !*(_QWORD *)(v59 + 160) || v70 && !*(_QWORD *)(EthDB + 328) )
            {
              v77 = v11->Private.NdisPacketOobOffset;
              v90 = ByteCount - 14;
              *(unsigned int *)((char *)&v11->Private.Count + v77) = -1073741670;
              (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, char *, __int64, char *, ULONG, ULONG))(v59 + 128))(
                *(_QWORD *)(v59 + 32),
                v11,
                MappedSystemVa,
                14LL,
                MappedSystemVa + 14,
                v11->Private.Head->ByteCount - 14,
                v90);
              v19 = *(_QWORD *)v95;
              *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = v72;
            }
            else
            {
              v75 = *(struct _NET_BUFFER_LIST **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset);
              if ( v75 && v72 == -1073741670 )
                ndisNblTrackerTransferOwnershipSingleNbl(
                  v75,
                  (struct NDIS_NBL_TRACKER_HANDLE__ *)v71,
                  *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v59 + 584),
                  v19);
              v76 = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_PACKET *, __int64))(v59 + 160))(
                      *(_QWORD *)(v59 + 32),
                      v11,
                      ByteCount);
              v19 = *(_QWORD *)v95;
              *(_DWORD *)(*(_QWORD *)v95 + 12LL) += v76;
            }
            if ( *(int *)(v19 + 12) > 0 )
            {
              v78 = v102;
              if ( (*(_DWORD *)(v59 + 224) & 8) == 0 )
                v78 = 1;
              LOBYTE(v102) = v78;
            }
            a1->IndicatedPacket[KeGetPcr()->Prcb.Number] = v74;
LABEL_125:
            ByteCount = v91;
            goto LABEL_126;
          }
          if ( (v61 & 2) != 0 )
          {
            v62 = *(_DWORD *)(v59 + 456);
            LODWORD(v19) = 0;
            v63 = *(_QWORD *)(v59 + 448);
            v64 = v62 >> 1;
            if ( !v62 || (v3 = v62 - 1, (unsigned int)v64 > v62 - 1) )
            {
LABEL_147:
              v19 = *(_QWORD *)v95;
              goto LABEL_126;
            }
            while ( 2 )
            {
              if ( (unsigned int)v64 < (unsigned int)v19 )
              {
LABEL_124:
                v19 = *(_QWORD *)v95;
                goto LABEL_125;
              }
              v65 = *(_DWORD *)(v63 + 12 * v64 + 6);
              v66 = v63 + 12 * v64;
              if ( v65 > *(_DWORD *)(MappedSystemVa + 2) )
                goto LABEL_121;
              if ( v65 < *(_DWORD *)(MappedSystemVa + 2) )
                goto LABEL_120;
              if ( *(_WORD *)(v66 + 4) > *(_WORD *)MappedSystemVa )
              {
LABEL_121:
                if ( !(_DWORD)v64 )
                {
                  ByteCount = v91;
                  goto LABEL_147;
                }
                v3 = v64 - 1;
              }
              else
              {
                if ( *(_WORD *)(v66 + 4) >= *(_WORD *)MappedSystemVa )
                {
                  ByteCount = v91;
                  goto LABEL_132;
                }
LABEL_120:
                LODWORD(v19) = v64 + 1;
              }
              v64 = (unsigned int)v19 + ((v3 - (unsigned int)v19 + 1) >> 1);
              if ( (unsigned int)v64 > v3 )
                goto LABEL_124;
              continue;
            }
          }
        }
LABEL_126:
        v59 = v60;
        if ( !v60 )
          goto LABEL_127;
      }
    }
    if ( ((unsigned int)ByteCount >= 0xE || (*(_DWORD *)(EthDB + 304) & 0xA0) != 0)
      && ((v11->Private.Flags & 0x80u) == 0 || *(_QWORD *)&v11->MacReserved[v11->Private.NdisPacketOobOffset + 24] != v21) )
    {
      v22 = *(_QWORD *)(v21 + 720);
      v92 = v7 + 1;
      *(_BYTE *)((Number << 12) + v22) = 1;
      v23 = *(_DWORD *)(v21 + 432) & 0xA0;
      if ( (v11->Private.Flags & 0x20000) == 0 && (v11->Private.NdisPacketFlags & 2) == 0 )
      {
        ethFilterReceivePacketStats(a1, (unsigned __int8 *)MappedSystemVa, ByteCount);
        ByteCount = v91;
      }
      v11->Private.Flags &= ~0x20000u;
      p_IndicatedPacket = &a1->IndicatedPacket;
      v25 = (_NDIS_OID_REQUEST *)a1->IndicatedPacket;
      v26 = *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset);
      v27 = KeGetPcr()->Prcb.Number;
      v28 = (_NDIS_PACKET *)*((_QWORD *)&v25->Header.Type + v27);
      *((_QWORD *)&v25->Header.Type + v27) = v11;
      if ( !(_BYTE)v102 && *(_QWORD *)(v21 + 160) )
      {
        if ( !v23 )
          goto LABEL_42;
        if ( *(_QWORD *)(EthDB + 328) )
        {
          p_IndicatedPacket = &a1->IndicatedPacket;
LABEL_42:
          v29 = *(struct _NET_BUFFER_LIST **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset);
          if ( v29 && v26 == -1073741670 )
            ndisNblTrackerTransferOwnershipSingleNbl(
              v29,
              (struct NDIS_NBL_TRACKER_HANDLE__ *)v25,
              *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v21 + 584),
              v19);
          v30 = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_PACKET *, __int64))(v21 + 160))(
                  *(_QWORD *)(v21 + 32),
                  v11,
                  ByteCount);
          v19 = *(_QWORD *)v95;
          *(_DWORD *)(*(_QWORD *)v95 + 12LL) += v30;
          goto LABEL_47;
        }
      }
      v31 = v11->Private.NdisPacketOobOffset;
      v90 = ByteCount - 14;
      *(unsigned int *)((char *)&v11->Private.Count + v31) = -1073741670;
      (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, char *, __int64, char *, ULONG, ULONG))(v21 + 128))(
        *(_QWORD *)(v21 + 32),
        v11,
        MappedSystemVa,
        14LL,
        MappedSystemVa + 14,
        v11->Private.Head->ByteCount - 14,
        v90);
      v19 = *(_QWORD *)v95;
      *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = v26;
LABEL_47:
      (*p_IndicatedPacket)[KeGetPcr()->Prcb.Number] = v28;
    }
LABEL_127:
    v67 = *(_DWORD *)(v19 + 12);
    if ( v67 )
    {
      v68 = v67 + _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), v67 + 1) + 1;
      if ( v68 > 0 )
      {
        if ( (a1->Flags & 0x40000) == 0 )
          *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = 259;
        goto LABEL_149;
      }
      if ( v68 )
      {
LABEL_149:
        if ( (a1->Flags & 0x8000) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)&a1->IndicatedPacketsCount);
        goto LABEL_165;
      }
    }
    else
    {
      *(_DWORD *)(v19 + 8) = 0;
    }
    v79 = v98;
    --*(_DWORD *)&v11[-1].ProtocolReserved[4];
    if ( *((_DWORD *)v79 + 8) == -1073741670 )
      goto LABEL_165;
    if ( (a1->Flags & 0x40000) == 0 )
    {
      if ( !*(_MDL **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset) )
      {
        *((_DWORD *)v79 + 8) = 0;
        goto LABEL_165;
      }
      *(_QWORD *)v19 = 0LL;
      *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = 259;
      if ( (v11[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v11[-1].ProtocolReserved[4] != -1 )
        goto LABEL_157;
LABEL_163:
      NDIS_FREE_XFER_DATA_PACKET(v11);
      goto LABEL_165;
    }
    *(_QWORD *)v19 = 0LL;
    *((_DWORD *)v79 + 8) = 259;
    if ( (v11[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v11[-1].ProtocolReserved[4] == -1 )
      goto LABEL_163;
    if ( !*(_MDL **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset) )
    {
      a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler(a1->MiniportAdapterContext, v11);
      goto LABEL_165;
    }
LABEL_157:
    v80 = ndisXlateReturnPacketToNetBufferList(v11);
    if ( v80 )
    {
      v80->Link.Alignment = 0LL;
      ndisReturnNetBufferListsInternal((struct _NDIS_FILTER_BLOCK *)a1, v80, 0, 0LL);
    }
LABEL_165:
    a2 = v96 + 1;
    ++v94;
    ++v96;
    if ( v94 >= a3 )
      break;
    v7 = v92;
    Number = v93;
  }
  if ( v92 )
  {
    v81 = *(_QWORD *)EthDB;
    if ( *(_QWORD *)EthDB )
    {
      v82 = v93 << 12;
      do
      {
        v83 = *(_QWORD *)(v81 + 720);
        v84 = *(_QWORD *)(v81 + 424);
        if ( *(_BYTE *)(v83 + v82) )
        {
          *(_BYTE *)(v83 + v82) = 0;
          (*(void (__fastcall **)(_QWORD))(v81 + 136))(*(_QWORD *)(v81 + 32));
        }
        v81 = v84;
      }
      while ( v84 );
    }
  }
LABEL_174:
  v85 = KeGetPcr()->Prcb.Number << 12;
  v86 = *(_QWORD *)(*(_QWORD *)(EthDB + 288) + 32LL);
  v87 = *(_QWORD *)(v86 + v85);
  if ( (a1->PnPFlags & 0x80000000) == 0 )
  {
    *(_QWORD *)(v86 + v85) = v87 - 1;
    v88 = v99;
    if ( v99 == 2 )
      return;
    goto LABEL_178;
  }
  *(_QWORD *)(v86 + v85) = v87 - 1;
  v88 = v99;
  if ( v99 != 2 )
LABEL_178:
    KeLowerIrql(v88);
}
