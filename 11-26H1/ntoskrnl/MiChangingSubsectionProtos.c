/*
 * XREFs of MiChangingSubsectionProtos @ 0x1406FDDF0
 * Callers:
 *     MiInitializePurgeCriteria @ 0x14049DDA4 (MiInitializePurgeCriteria.c)
 *     MiAllocateFileExtents @ 0x140B62A58 (MiAllocateFileExtents.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     ?KiAbpPreWait@AutoBoost@@YAXPEAX@Z @ 0x1404674E0 (-KiAbpPreWait@AutoBoost@@YAXPEAX@Z.c)
 *     ?KiAbPreWait@LegacyAutoBoost@@YAXPEAX@Z @ 0x1404A4560 (-KiAbPreWait@LegacyAutoBoost@@YAXPEAX@Z.c)
 *     MiSubsectionProtosCreated @ 0x140507A40 (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1406FFA90 (MiUnlinkSubsectionWaitBlock.c)
 */

__int64 __fastcall MiChangingSubsectionProtos(struct _KTHREAD *a1, char a2, _DWORD *a3)
{
  __int64 v3; // r14
  int v7; // r12d
  struct _KTHREAD *CurrentThread; // rax
  KIRQL v9; // di
  struct _KLOCK_ENTRIES *v10; // r9
  int v11; // eax
  int v12; // eax
  _DWORD *SListFaultAddress; // rcx
  AutoBoost *v14; // rax
  struct AutoBoost::_AB_THREAD_ENTRY *v15; // rdx
  __int64 v16; // r8
  struct _SINGLE_LIST_ENTRY *v17; // r9
  unsigned __int64 v18; // rbp
  volatile LONG *v19; // rcx
  struct _KLOCK_ENTRIES *v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // ebp
  int v24; // eax
  volatile LONG *v25; // rcx
  unsigned __int64 v27; // rax
  volatile unsigned __int8 *v28; // rdx
  volatile LONG *v29; // rcx

  v3 = *(_QWORD *)&a1->Header.Lock;
  v7 = a2 & 0x30;
  if ( (a2 & 0x30) == 0 )
  {
    a3[3] = v7;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    a3[4] |= 8u;
  }
  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    if ( v7 )
    {
      if ( (a3[4] & 4) != 0 )
      {
        KeAbPostRelease((unsigned __int64)a1);
        a3[4] &= ~4u;
      }
      if ( a3[3] == 2 )
      {
        v23 = -1073740748;
        goto LABEL_41;
      }
    }
    v11 = 8 * (a2 & 8);
    a3[2] = v11;
    if ( (a2 & 0x40) != 0 )
    {
      v11 |= 0x200u;
      a3[2] = v11;
    }
    if ( (a2 & 0x10) != 0 )
    {
      v11 |= 0x80u;
      a3[2] = v11;
    }
    if ( (a2 & 0x20) != 0 )
      a3[2] = v11 | 0x100;
    if ( a1->Header.WaitListHead.Flink && (a2 & 1) != 0 )
      break;
    v12 = a3[4];
    if ( (v12 & 1) == 0 )
    {
      a3[4] = v12 | 1;
      *((_QWORD *)a3 + 5) = a3 + 8;
      *((_QWORD *)a3 + 4) = a3 + 8;
      *((_WORD *)a3 + 12) = 263;
      *((_BYTE *)a3 + 26) = 6;
      a3[7] = 0;
      if ( (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
      {
        *(_QWORD *)a3 = *(_QWORD *)(v3 + 80);
        *(_QWORD *)(v3 + 80) = a3;
      }
      else
      {
        *(_QWORD *)a3 = a1->SListFaultAddress;
        a1->SListFaultAddress = a3;
      }
    }
    if ( (a2 & 8) != 0 )
      goto LABEL_57;
    if ( (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
      SListFaultAddress = *(_DWORD **)(v3 + 80);
    else
      SListFaultAddress = a1->SListFaultAddress;
    if ( (a3[4] & 2) != 0 )
      goto LABEL_52;
    if ( !SListFaultAddress )
      goto LABEL_51;
    do
    {
      if ( (SListFaultAddress[2] & 0x3C0) != 0 && SListFaultAddress != a3 && (SListFaultAddress[4] & 2) != 0 )
        break;
      SListFaultAddress = *(_DWORD **)SListFaultAddress;
    }
    while ( SListFaultAddress );
    if ( !SListFaultAddress )
    {
LABEL_51:
      a3[4] |= 2u;
LABEL_52:
      v27 = KeAbPreAcquire((__int64)a1, 0LL, 0LL, v10);
      if ( v27 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v28) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v27 + 33), v28, 1);
        }
        else
        {
          *(_BYTE *)(v27 + 10) = 1;
        }
        a3[4] |= 4u;
      }
LABEL_57:
      v29 = (volatile LONG *)(v3 + 72);
      if ( v9 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v29);
      else
        ExReleaseSpinLockExclusive(v29, v9);
      return 0LL;
    }
    v14 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, v10);
    v18 = (unsigned __int64)v14;
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPreWait(v14, v15, v16, v17);
      else
        LegacyAutoBoost::KiAbPreWait(v14, (struct _KLOCK_ENTRY *)v15);
    }
    v19 = (volatile LONG *)(v3 + 72);
    if ( v9 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v19);
    else
      ExReleaseSpinLockExclusive(v19, v9);
    KeWaitForGate((__int64)(a3 + 6), 18LL);
    if ( v18 )
    {
      KeAbPreAcquire((__int64)a1, v18, 0LL, v20);
      KeAbPostReleaseEx(a1, v18, v21, v22);
    }
  }
  v23 = -1073741302;
LABEL_41:
  v24 = a3[4];
  if ( (v24 & 1) != 0 )
  {
    if ( (v24 & 2) != 0 )
      MiSubsectionProtosCreated(a1, a3, 0LL, 4);
    else
      MiUnlinkSubsectionWaitBlock(a1, a3, 1LL);
  }
  v25 = (volatile LONG *)(v3 + 72);
  if ( v9 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v25);
  else
    ExReleaseSpinLockExclusive(v25, v9);
  if ( (a3[4] & 8) != 0 )
  {
    KeLeaveCriticalRegion();
    a3[4] &= ~8u;
  }
  return v23;
}
