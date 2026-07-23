/*
 * XREFs of MiGetCrossPartitionCharges @ 0x1404AFEC8
 * Callers:
 *     MiCreateLargePfnList @ 0x1402F23FC (MiCreateLargePfnList.c)
 *     MiGetCloneCharges @ 0x14036B234 (MiGetCloneCharges.c)
 *     MiGetSubsectionCharges @ 0x1404AFE30 (MiGetSubsectionCharges.c)
 *     MiAllocateUserPhysicalPagesAddMdl @ 0x14087DD64 (MiAllocateUserPhysicalPagesAddMdl.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReturnCrossPartitionCharge @ 0x1404FD0B4 (MiReturnCrossPartitionCharge.c)
 *     MiApplyCrossPartitionCharges @ 0x1404FF1A4 (MiApplyCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetCrossPartitionCharges(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  volatile LONG *v5; // rdi
  __int64 v7; // rsi
  volatile LONG *v10; // rcx
  KIRQL v11; // bp
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r8

  v5 = (volatile LONG *)(a1 + 2112);
  v7 = 32LL * (int)a2;
  v10 = (volatile LONG *)(a1 + 2112);
  if ( KeGetCurrentIrql() == 2 )
  {
    v11 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v10);
  }
  else
  {
    v11 = ExAcquireSpinLockExclusive(v10);
  }
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 && a2 )
  {
    v12 = *(_QWORD *)(v7 + a1 + 2872);
    v13 = -1073740640;
    if ( v12 != -1 )
      *(_QWORD *)(v7 + a1 + 2872) = v12 + 1;
  }
  else
  {
    v13 = MiApplyCrossPartitionCharges(a1, a2, a4);
    if ( v13 >= 0 && (a3 & 1) != 0 )
    {
      v13 = MiApplyCrossPartitionCharges(a1, a2 + 1, v14);
      if ( v13 < 0 )
        MiReturnCrossPartitionCharge(a1, a2, v15);
    }
  }
  if ( v11 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  else
    ExReleaseSpinLockExclusive(v5, v11);
  return (unsigned int)v13;
}
