/*
 * XREFs of MiComputeFaultNode @ 0x140372808
 * Callers:
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A90E0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiInitializeZeroFaultPacket @ 0x1402B6EB0 (MiInitializeZeroFaultPacket.c)
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiInitializeCopyOnWritePacket @ 0x14036CC48 (MiInitializeCopyOnWritePacket.c)
 *     MiResolveMappedFileFaultGetClusterInfo @ 0x1403715AC (MiResolveMappedFileFaultGetClusterInfo.c)
 *     MiComputePageFileReadAttributes @ 0x14037257C (MiComputePageFileReadAttributes.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiNodeFromFaultPacket @ 0x1403A7670 (MiNodeFromFaultPacket.c)
 */

__int64 __fastcall MiComputeFaultNode(__int64 a1, struct _LIST_ENTRY *a2, struct _LIST_ENTRY **a3)
{
  unsigned int v6; // ebx
  struct _LIST_ENTRY **v7; // r8
  struct _LIST_ENTRY *Address; // rdi
  unsigned __int64 v9; // rdx
  int v10; // eax
  volatile _KAFFINITY_EX *ActiveProcessors; // rax
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // r8

  v6 = MiNodeFromFaultPacket();
  if ( v6 )
    goto LABEL_20;
  Address = *v7;
  v9 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL & -(__int64)((*(_QWORD *)(a1 + 16) & 1) != 0);
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 184LL) & 0xF;
  if ( (_BYTE)v10 )
  {
    if ( (_BYTE)v10 == 4 )
    {
      if ( a2 )
      {
LABEL_19:
        v6 = (LODWORD(a2[3].Blink) >> 20) & 0x7F;
        if ( !v6 )
          return v6;
LABEL_20:
        *(_DWORD *)(a1 + 80) |= 0x20000u;
        return v6;
      }
      MiLockVadTree(5u, v9, (__int64)v7);
      Flink = stru_140E34D88.Header.WaitListHead.Flink;
      v14 = *(_QWORD *)a1;
      if ( stru_140E34D88.Header.WaitListHead.Flink )
      {
        do
        {
          v15 = (unsigned __int64)Flink[5].Blink & 0xFFFFFFFFFFFFF000uLL;
          if ( (struct _LIST_ENTRY *)v14 >= (struct _LIST_ENTRY *)((char *)Flink[2].Flink + v15) )
          {
            Flink = Flink->Blink;
          }
          else
          {
            if ( v14 >= v15 )
              break;
            Flink = Flink->Flink;
          }
        }
        while ( Flink );
        if ( Flink )
          a2 = Flink[3].Flink->Flink;
      }
      MiUnlockVadTree(5, 0x11u);
    }
  }
  else
  {
    ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    if ( Address
      || (v16 = *(_QWORD *)a1, *(_QWORD *)a1 < 0xFFFF800000000000uLL)
      && ((v17 = 0xFFFFF68000000000uLL, v16 < 0xFFFFF68000000000uLL)
       || (v17 = 0xFFFFF6FFFFFFFFFFuLL, v16 > 0xFFFFF6FFFFFFFFFFuLL))
      && (v9
       || ActiveProcessors[5].StaticBitmap[5]
       || ActiveProcessors[5].StaticBitmap[6]
       || BYTE4(ActiveProcessors[4].StaticBitmap[15]))
      && (MiLockVadTree(1u, v9, v17),
          Address = MiLocateAddress(*(_QWORD *)a1),
          MiUnlockVadTree(1, 0x11u),
          (*a3 = Address) != 0LL) )
    {
      v6 = (LODWORD(Address[3].Flink) >> 10) & 0x7F;
      if ( v6 )
        goto LABEL_20;
      if ( ((__int64)Address[3].Flink & 0x80000) == 0 )
        a2 = Address[5].Flink->Flink;
    }
  }
  if ( a2 )
    goto LABEL_19;
  return v6;
}
