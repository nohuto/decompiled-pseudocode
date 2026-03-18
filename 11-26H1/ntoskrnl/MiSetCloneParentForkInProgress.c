/*
 * XREFs of MiSetCloneParentForkInProgress @ 0x1405180AC
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140961614 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x14027E5A0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403BCE40 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403BD130 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiInsertClone @ 0x1404F6B70 (MiInsertClone.c)
 *     MiLockAweVadsExclusive @ 0x1404FEF8C (MiLockAweVadsExclusive.c)
 *     MiLockCloneDescriptorTreeExclusive @ 0x140511ADC (MiLockCloneDescriptorTreeExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1405251E0 (MiUnlockAweVadsExclusive.c)
 *     MiFreeCloneDescriptor @ 0x140B44944 (MiFreeCloneDescriptor.c)
 *     MiBuildNewCloneDescriptor @ 0x140B558E4 (MiBuildNewCloneDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSetCloneParentForkInProgress(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *v3; // rdi
  ULONG_PTR v4; // r12
  __int64 v5; // r14
  _QWORD *v6; // rbp
  unsigned __int64 v7; // r14
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  KIRQL v11; // al
  KIRQL v12; // bl
  volatile LONG *v13; // rcx
  _QWORD *P; // [rsp+60h] [rbp+8h]
  __int64 v16; // [rsp+68h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD **)a1;
  v4 = *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD *)(a1 + 32);
  while ( 1 )
  {
    v5 = v3[81];
    if ( !v5 )
      v5 = 1LL;
    v6 = (_QWORD *)MiBuildNewCloneDescriptor((ULONG_PTR)v3);
    if ( !v6 )
      return 3221225626LL;
    v7 = 32 * (v5 + 1);
    v8 = PsChargeProcessNonPagedPoolQuota(v4, v7);
    if ( v8 < 0 )
      goto LABEL_14;
    P = (_QWORD *)ExAllocatePoolMm(
                    64LL,
                    0x70uLL,
                    1682140493,
                    KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    if ( !P )
    {
      PsReturnProcessNonPagedPoolQuota(v4, v7);
      v8 = -1073741670;
LABEL_14:
      MiFreeCloneDescriptor((ULONG_PTR)v3, v6);
      return (unsigned int)v8;
    }
    MiLockAweVadsExclusive((__int64)CurrentThread);
    v11 = MiLockWorkingSetExclusive(v16, v9, v10);
    if ( v3[81] <= v6[5] )
      break;
    MiUnlockWorkingSetExclusive(v16, v11);
    MiUnlockAweVadsExclusive(CurrentThread);
    MiFreeCloneDescriptor((ULONG_PTR)v3, v6);
    PsReturnProcessNonPagedPoolQuota(v4, v7);
    ExFreePoolWithTag(P, 0);
  }
  v3[78] = CurrentThread;
  MiUnlockWorkingSetExclusive(v16, v11);
  MiUnlockAweVadsExclusive(CurrentThread);
  *(_QWORD *)(a1 + 16) = v6;
  *(_QWORD *)(a1 + 320) = v6[3];
  *P = *(_QWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 288) += v7;
  *(_QWORD *)(a1 + 296) = P;
  v6[6] = 1LL;
  v12 = MiLockCloneDescriptorTreeExclusive((__int64)v3);
  MiInsertClone((__int64)v3, v6, 1);
  v13 = (volatile LONG *)(v3[130] + 1280LL);
  if ( v12 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v13);
  else
    ExReleaseSpinLockExclusive(v13, v12);
  return 0LL;
}
