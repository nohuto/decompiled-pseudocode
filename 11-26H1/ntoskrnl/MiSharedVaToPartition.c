/*
 * XREFs of MiSharedVaToPartition @ 0x140282C7C
 * Callers:
 *     MiCreateSharedZeroPages @ 0x140282EF0 (MiCreateSharedZeroPages.c)
 *     MiActOnPte @ 0x1402B61E0 (MiActOnPte.c)
 *     MiEvaluatePageFileRead @ 0x1403721F0 (MiEvaluatePageFileRead.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiLocateCloneAddress @ 0x14036D7EC (MiLocateCloneAddress.c)
 */

ULONG *__fastcall MiSharedVaToPartition(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v4; // r11
  __int64 *v5; // r9
  __int64 v6; // rax
  struct _LIST_ENTRY *v8; // rdi
  __int64 PteShadow; // r8
  __int64 v10; // rbx
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 CloneAddress; // rax
  __int64 Address; // rdi
  struct _LIST_ENTRY **v15; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v17; // r8

  v4 = a1;
  v5 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = *a3;
  if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, a2, 0xFFFFF6FB7DBED000uLL);
  }
  if ( !BYTE4(stru_140E2ED08.CycleTime) )
    return &MiSystemPartition;
  v8 = 0LL;
  PteShadow = *v5;
  v10 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v4 + 174));
  if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v5, *v5);
  if ( (PteShadow & 0x400) != 0 && !(unsigned int)MiIsPrototypePteVadLookup(PteShadow) && (PteShadow & 0x800) != 0 )
    return **(ULONG ***)(((v11 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( a2 >= 0xFFFF800000000000uLL )
  {
    if ( (*(_DWORD *)(v4 + 184) & 0xF) == 4 )
    {
      MiLockVadTree(5LL);
      Flink = stru_140E34D88.Header.WaitListHead.Flink;
      if ( stru_140E34D88.Header.WaitListHead.Flink )
      {
        do
        {
          v17 = (unsigned __int64)Flink[5].Blink & 0xFFFFFFFFFFFFF000uLL;
          if ( (struct _LIST_ENTRY *)a2 >= (struct _LIST_ENTRY *)((char *)Flink[2].Flink + v17) )
          {
            Flink = Flink->Blink;
          }
          else
          {
            if ( a2 >= v17 )
              break;
            Flink = Flink->Flink;
          }
        }
        while ( Flink );
        if ( Flink )
          v8 = Flink[3].Flink->Flink;
      }
      LOBYTE(Flink) = 17;
      MiUnlockVadTree(5LL, Flink);
LABEL_35:
      if ( v8 )
        return *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * (HIDWORD(v8[3].Blink) & 0x3FF));
    }
  }
  else
  {
    if ( (unsigned int)MiIsPrototypePteVadLookup(PteShadow) )
      goto LABEL_21;
    CloneAddress = MiLocateCloneAddress(KeGetCurrentThread()->ApcState.Process, v12);
    if ( !CloneAddress )
    {
      v10 = 0LL;
      goto LABEL_21;
    }
    v10 = *(_QWORD *)(*(_QWORD *)(CloneAddress + 56) + 24LL);
    if ( !v10 )
    {
LABEL_21:
      MiLockVadTree(1LL);
      Address = MiLocateAddress(a2);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1);
      if ( !Address )
        return (ULONG *)v10;
      if ( (*(_DWORD *)(Address + 48) & 0x80000) != 0 )
        return (ULONG *)v10;
      v15 = *(struct _LIST_ENTRY ***)(Address + 80);
      if ( !v15 )
        return (ULONG *)v10;
      v8 = *v15;
      goto LABEL_35;
    }
  }
  return (ULONG *)v10;
}
