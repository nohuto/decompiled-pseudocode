/*
 * XREFs of MiObtainDynamicVa @ 0x1402A4348
 * Callers:
 *     MiReservePoolMemory @ 0x1402A41EC (MiReservePoolMemory.c)
 *     MiObtainSystemVa @ 0x1402A428C (MiObtainSystemVa.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiReduceSystemRegionType @ 0x1402A4E64 (MiReduceSystemRegionType.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlFindClearBitsEx @ 0x140361740 (RtlFindClearBitsEx.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     MiExtendDynamicBitMap @ 0x1404F924C (MiExtendDynamicBitMap.c)
 *     MiFindNextAlignedForwardRunClearEx @ 0x1405001FC (MiFindNextAlignedForwardRunClearEx.c)
 */

unsigned __int64 __fastcall MiObtainDynamicVa(struct _KTHREAD *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // rbp
  __int64 v6; // r12
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // r14
  volatile LONG *p_ThreadLock; // r15
  void *SListFaultAddress; // r8
  struct _KTHREAD *v11; // rsi
  __int64 v12; // rdx
  __int64 ClearBits; // rax
  KIRQL v14; // r14
  __int64 v15; // r9
  __int64 NextAlignedForwardRunClear; // rax
  int v17; // esi
  __int64 v18; // rcx
  __int128 v20; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 v21; // [rsp+70h] [rbp+8h]

  v3 = a2;
  v20 = 0LL;
  v6 = 1LL;
  v7 = -1LL;
  CurrentIrql = KeGetCurrentIrql();
  v21 = CurrentIrql;
  p_ThreadLock = (volatile LONG *)&a1->ThreadLock;
  while ( 1 )
  {
    SListFaultAddress = a1->SListFaultAddress;
    v11 = a1;
    if ( ((a3 - 10) & 0xFFFFFFFD) == 0 )
    {
      v11 = (struct _KTHREAD *)&v20;
      v12 = (__int64)a1->Header.WaitListHead.Flink + 8 * ((unsigned __int64)a1->Header.WaitListHead.Blink >> 6);
      SListFaultAddress = a1->StackLimit;
      *(_QWORD *)&v20 = a1->InitialStack;
      *((_QWORD *)&v20 + 1) = v12 - 8 * ((unsigned __int64)v20 >> 6);
      if ( (unsigned int)v3 >= 0x200 && (MiFlags & 0x100000000LL) != 0 )
        v6 = 512LL;
    }
    if ( *(_QWORD *)&v11->Header.Lock )
    {
      if ( v6 == 1 )
        ClearBits = RtlFindClearBitsEx(v11, (unsigned int)v3, SListFaultAddress, 512LL);
      else
        ClearBits = MiFindNextAlignedForwardRunClearEx(v11, (unsigned int)v3, v6, 512LL);
      v7 = ClearBits;
    }
    if ( CurrentIrql == 2 )
    {
      v14 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(p_ThreadLock);
    }
    else
    {
      v14 = ExAcquireSpinLockExclusive(p_ThreadLock);
    }
    if ( v7 != -1 )
      break;
LABEL_20:
    v17 = MiExtendDynamicBitMap(a1, v11, 0LL, a3);
    if ( v14 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(p_ThreadLock);
    else
      ExReleaseSpinLockExclusive(p_ThreadLock, v14);
    if ( !v17 )
      return 0LL;
    CurrentIrql = v21;
  }
  if ( v6 == 1 )
    NextAlignedForwardRunClear = RtlFindClearBitsEx(v11, v3, v7, v15);
  else
    NextAlignedForwardRunClear = MiFindNextAlignedForwardRunClearEx(v11, v3, v6, v15);
  v7 = NextAlignedForwardRunClear;
  if ( NextAlignedForwardRunClear == -1 )
  {
    v3 = a2;
    goto LABEL_20;
  }
  RtlSetBitsEx(v11, NextAlignedForwardRunClear, v3);
  if ( ((a3 - 10) & 0xFFFFFFFD) != 0 )
  {
    if ( a2 == 1 )
      a1->SListFaultAddress = (void *)(v7 + 1);
  }
  else
  {
    v18 = 8 * ((char *)v11->Header.WaitListHead.Flink - (char *)a1->Header.WaitListHead.Flink);
    if ( a2 == 1 )
      a1->StackLimit = (void *volatile)(v7 + 1);
    v7 += v18;
    a3 = MiReduceSystemRegionType(a3);
  }
  if ( a1 == (struct _KTHREAD *)&stru_140E2DAB0.QueueListEntry.Blink )
  {
    stru_140E2DAB0.KernelStack = (char *)stru_140E2DAB0.KernelStack - 0x200000 * v3;
    if ( stru_140E2DAB0.KernelStack <= (void *)0x8000000 )
      KeSetEvent(&Event, 0, 0);
  }
  _InterlockedAdd64(&qword_140E37B48[a3], v3);
  if ( v14 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(p_ThreadLock);
  else
    ExReleaseSpinLockExclusive(p_ThreadLock, v14);
  return a1->QuantumTarget + (v7 << 21);
}
