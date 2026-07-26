/*
 * XREFs of ndisMIsLoopbackPacket @ 0x14008BAB0
 * Callers:
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x14008BF10 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x140033720 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1400337F0 (NdisReleaseRWLock.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x14005CE40 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     ?ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z @ 0x1400612F0 (-ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

bool __fastcall ndisMIsLoopbackPacket(__int64 a1, struct _NDIS_PACKET *a2, char **a3)
{
  _MDL *Head; // rcx
  char v5; // r12
  char *MappedSystemVa; // rbx
  __int64 v10; // rcx
  bool v11; // di
  __int64 v12; // rsi
  int v13; // ebp
  struct _NDIS_RW_LOCK_EX *v14; // rcx
  _MDL *v15; // rdx
  ULONG TotalLength; // ebp
  unsigned int v17; // r8d
  unsigned int i; // r9d
  __int64 ByteCount; // rax
  unsigned __int64 v20; // rax
  unsigned int v21; // esi
  char *Pool2; // rax
  char *v23; // rdi
  unsigned int v24; // ebx
  char *v25; // r15
  char *j; // rdi
  __int64 v27; // rcx
  char *v28; // rcx
  struct _MDL *Mdl; // rax
  struct _MDL *v30; // rbx
  unsigned __int8 *v31; // r9
  unsigned __int16 v32; // si
  __int64 v33; // rdx
  char *LockState; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v35; // [rsp+88h] [rbp+20h] BYREF

  v35 = 0;
  Head = a2->Private.Head;
  v5 = 0;
  LOWORD(LockState) = 0;
  BYTE2(LockState) = 0;
  if ( (Head->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)Head->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( MappedSystemVa )
  {
    if ( *(_DWORD *)(a1 + 464) )
      return (a2->Private.Flags & 0x200) != 0;
    if ( (*(_DWORD *)(a1 + 120) & 0x800000) != 0 )
    {
      if ( (*MappedSystemVa & 1) == 0
        && (v10 = *(_QWORD *)(a1 + 400), *(_DWORD *)(MappedSystemVa + 2) == *(_DWORD *)(v10 + 338))
        && *(_WORD *)MappedSystemVa == *(_WORD *)(v10 + 336) )
      {
        v11 = 1;
        v5 = 1;
      }
      else
      {
        v11 = 1;
      }
    }
    else
    {
      NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(*(_QWORD *)(a1 + 400) + 288LL), (PLOCK_STATE_EX)&LockState, 0);
      v12 = *(_QWORD *)(a1 + 400);
      v11 = 0;
      v13 = *(_DWORD *)(v12 + 312);
      if ( (*MappedSystemVa & 1) != 0 )
      {
        if ( *MappedSystemVa == -1
          && MappedSystemVa[1] == -1
          && MappedSystemVa[2] == -1
          && MappedSystemVa[3] == -1
          && MappedSystemVa[4] == -1
          && MappedSystemVa[5] == -1 )
        {
          v11 = (v13 & 8) != 0;
        }
        else if ( (v13 & 4) != 0
               || (v13 & 2) != 0
               && ethFindMulticast(
                    *(_DWORD *)(v12 + 368),
                    0LL,
                    *(unsigned __int8 (**)[6])(v12 + 352),
                    (unsigned __int8 *const)MappedSystemVa) )
        {
          v11 = 1;
        }
      }
      else if ( *(_DWORD *)(MappedSystemVa + 2) == *(_DWORD *)(v12 + 338)
             && *(_WORD *)MappedSystemVa == *(_WORD *)(v12 + 336) )
      {
        v11 = 1;
        v5 = 1;
      }
      v14 = *(struct _NDIS_RW_LOCK_EX **)(v12 + 288);
      if ( (v13 & 0xA0) != 0 )
      {
        v11 = 1;
        NdisReleaseRWLock(v14, (PLOCK_STATE_EX)&LockState);
      }
      else
      {
        NdisReleaseRWLock(v14, (PLOCK_STATE_EX)&LockState);
        if ( !v11 )
          goto LABEL_35;
      }
    }
    if ( (a2->Private.Flags & 0x200) != 0 )
    {
      v5 = 1;
LABEL_36:
      a2->Private.NdisPacketFlags |= 4u;
LABEL_37:
      if ( v11 )
      {
        if ( a2->Private.ValidCounts )
        {
          TotalLength = a2->Private.TotalLength;
        }
        else
        {
          v15 = a2->Private.Head;
          TotalLength = 0;
          v17 = 0;
          for ( i = 0; v15; ++i )
          {
            ByteCount = v15->ByteCount;
            TotalLength += ByteCount;
            if ( (_DWORD)ByteCount )
              v20 = ((unsigned __int64)((LODWORD(v15->StartVa) + v15->ByteOffset) & 0xFFF) + ByteCount + 4095) >> 12;
            else
              LODWORD(v20) = 1;
            v15 = v15->Next;
            v17 += v20;
          }
          a2->Private.Count = i;
          a2->Private.TotalLength = TotalLength;
          a2->Private.PhysicalCount = v17;
          a2->Private.ValidCounts = 1;
        }
        if ( 48 * ndisPacketStackSize + 56 < 48 * ndisPacketStackSize + 16
          || 48 * ndisPacketStackSize + 152 < 48 * ndisPacketStackSize + 56
          || 48 * ndisPacketStackSize + 280 < 48 * ndisPacketStackSize + 152
          || 48 * ndisPacketStackSize + 295 < 48 * ndisPacketStackSize + 280 )
        {
          v21 = 0;
        }
        else
        {
          v21 = (48 * ndisPacketStackSize + 295) & 0xFFFFFFF0;
        }
        if ( v21 + TotalLength >= TotalLength )
        {
          Pool2 = (char *)ExAllocatePool2(66LL, v21 + TotalLength, 1886143566LL);
          v23 = Pool2;
          if ( Pool2 )
          {
            memset(Pool2, 0, v21);
            v24 = 0;
            LockState = &v23[v21];
            v25 = &v23[48 * ndisPacketStackSize];
            for ( j = v25 + 16; v24 < ndisPacketStackSize; ++v24 )
            {
              *((_DWORD *)v25 + 3) = v24;
              if ( v24 >= ndisPacketStackSize )
                v27 = 40LL;
              else
                v27 = (__int64)&j[48 * (v24 - (unsigned __int64)ndisPacketStackSize) + 24];
              KeInitializeSpinLock((PKSPIN_LOCK)v27);
            }
            v28 = LockState;
            *((_DWORD *)v25 + 3) = -1;
            Mdl = IoAllocateMdl(v28, TotalLength, 0, 0, 0LL);
            v30 = Mdl;
            if ( Mdl )
            {
              MmBuildMdlForNonPagedPool(Mdl);
              v31 = (unsigned __int8 *)LockState;
              v30->Next = 0LL;
              *((_QWORD *)v25 + 3) = v30;
              *((_QWORD *)v25 + 4) = v30;
              *((_QWORD *)v25 + 5) = 1886351180LL;
              v32 = v21 - 48 * ndisPacketStackSize - 152;
              *((_WORD *)v25 + 29) = v32;
              *(_QWORD *)&j[v32 + 96] = j;
              ndisMCopyFromPacketToBuffer(a2, v33, TotalLength, v31, &v35);
              if ( v35 == TotalLength )
              {
                if ( a3 )
                {
                  *a3 = j;
                  v25[57] |= 2u;
                  *((_DWORD *)v25 + 13) = a2->Private.Flags & 0x80 | 0x100;
                  return v5;
                }
                return v5;
              }
            }
            if ( v25 != (char *)-16LL )
              ExFreePoolWithTag(&v25[-48 * ndisPacketStackSize], 0);
            if ( v30 )
              IoFreeMdl(v30);
          }
        }
        *a3 = 0LL;
        return 0;
      }
      return (a2->Private.Flags & 0x200) != 0;
    }
LABEL_35:
    if ( !v5 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( a3 )
    *a3 = 0LL;
  return 0;
}
