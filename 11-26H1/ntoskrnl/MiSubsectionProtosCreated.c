/*
 * XREFs of MiSubsectionProtosCreated @ 0x140507A40
 * Callers:
 *     MiChangingSubsectionProtos @ 0x1406FDDF0 (MiChangingSubsectionProtos.c)
 *     MiAllocateFileExtents @ 0x140B62A58 (MiAllocateFileExtents.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1406FFA90 (MiUnlinkSubsectionWaitBlock.c)
 */

void __fastcall MiSubsectionProtosCreated(struct _KTHREAD *a1, _DWORD *a2, __int64 a3, char a4)
{
  __int64 v4; // rbp
  int v6; // r15d
  KIRQL v9; // r14
  int v10; // r12d
  volatile LONG *v11; // rcx
  _DWORD *SListFaultAddress; // rbx
  int QuantumTarget; // eax
  unsigned int v14; // eax
  int v15; // ecx
  volatile LONG *v16; // rcx

  v4 = *(_QWORD *)&a1->Header.Lock;
  v6 = a3;
  v9 = 17;
  v10 = a4 & 4;
  if ( (a4 & 4) == 0 )
  {
    v11 = (volatile LONG *)(v4 + 72);
    if ( (a4 & 2) != 0 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v11);
    else
      v9 = ExAcquireSpinLockExclusive(v11);
  }
  if ( a2 )
  {
    a2[4] &= ~2u;
    MiUnlinkSubsectionWaitBlock(a1, a2, 1LL);
    if ( (a2[4] & 4) != 0 )
    {
      KeAbPostRelease((unsigned __int64)a1);
      a2[4] &= ~4u;
    }
  }
  if ( (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
  {
    SListFaultAddress = *(_DWORD **)(v4 + 80);
    goto LABEL_27;
  }
  QuantumTarget = a1->QuantumTarget;
  if ( (a4 & 1) != 0 )
  {
    v14 = QuantumTarget | 0x40000;
LABEL_14:
    LODWORD(a1->QuantumTarget) = v14;
    goto LABEL_15;
  }
  if ( v6 == HIDWORD(a1->InitialStack) - HIDWORD(a1->StackLimit) )
  {
    v14 = QuantumTarget & 0xFFFBFFFF;
    goto LABEL_14;
  }
LABEL_15:
  SListFaultAddress = a1->SListFaultAddress;
LABEL_27:
  while ( SListFaultAddress )
  {
    if ( SListFaultAddress == a2 )
      goto LABEL_26;
    v15 = SListFaultAddress[2];
    if ( (v15 & 0x3C0) == 0 )
      goto LABEL_26;
    if ( SListFaultAddress[3] == 2 )
      goto LABEL_23;
    if ( !a2 || (a2[2] & 0x200) != 0 )
    {
      SListFaultAddress[3] = 2;
LABEL_23:
      if ( !a2 )
        goto LABEL_26;
      goto LABEL_24;
    }
    SListFaultAddress[3] = 1;
LABEL_24:
    if ( (v15 & 0x40) == 0 )
      KeSignalGate((__int64)(SListFaultAddress + 6), 1LL, a3);
LABEL_26:
    SListFaultAddress = *(_DWORD **)SListFaultAddress;
  }
  if ( !v10 )
  {
    v16 = (volatile LONG *)(v4 + 72);
    if ( v9 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v16);
    else
      ExReleaseSpinLockExclusive(v16, v9);
    if ( a2 )
    {
      KeLeaveCriticalRegion();
      a2[4] &= ~8u;
    }
  }
}
