/*
 * XREFs of MiObtainReferencedSecureVad @ 0x1404DE4B8
 * Callers:
 *     MmLockPhysicalPagesByVa @ 0x1406EF4CC (MmLockPhysicalPagesByVa.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x14087103C (MmAdjustSecuredVirtualMemorySize.c)
 *     MmCommitDecommitSecuredMemory @ 0x140871154 (MmCommitDecommitSecuredMemory.c)
 *     MmUnsecureVirtualMemory @ 0x140992B70 (MmUnsecureVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1409EE268 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiReferenceVad @ 0x14027DE00 (MiReferenceVad.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiWaitForVadDeletion @ 0x140533514 (MiWaitForVadDeletion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

struct _LIST_ENTRY *__fastcall MiObtainReferencedSecureVad(__int64 a1, _DWORD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR BugCheckParameter4; // r15
  KIRQL v7; // al
  KIRQL v8; // r12
  ULONG_PTR v9; // r9
  unsigned __int64 *v10; // rsi
  ULONG_PTR v11; // rbp
  struct _LIST_ENTRY *Address; // rbx
  unsigned __int64 v13; // rbp
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v20; // rdx
  __int64 v21; // rcx

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  BugCheckParameter4 = (ULONG_PTR)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v7 = MiLockVadTree(0, (__int64)a2, a3);
  v8 = v7;
  if ( (*(_DWORD *)(BugCheckParameter4 + 500) & 0x20) != 0 )
  {
    MiUnlockVadTree(0, v7);
    v18 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v18 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v21, v20);
    *a2 = -1073741558;
    return 0LL;
  }
  v9 = *(_QWORD *)(a1 + 40);
  v10 = (unsigned __int64 *)(a1 + 24);
  if ( v9 != BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x15003uLL, (ULONG_PTR)v10, v9, BugCheckParameter4);
  v11 = *v10;
  Address = MiLocateAddress(*v10);
  if ( !Address )
    KeBugCheckEx(0x1Au, 0x15000uLL, v11, (ULONG_PTR)v10, v10[3]);
  if ( Address != (struct _LIST_ENTRY *)v10[3] )
    KeBugCheckEx(0x1Au, 0x15002uLL, (ULONG_PTR)Address, (ULONG_PTR)v10, v10[3]);
  MiReferenceVad((ULONG_PTR)Address);
  MiUnlockVadTree(0, v8);
  v13 = v11 >> 12;
  MiLockVad((__int64)CurrentThread, (__int64)Address, v14, v15);
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v17, v16);
  if ( ((__int64)Address[3].Flink & 1) != 0 )
  {
    MiWaitForVadDeletion(Address);
    MiUnlockAndDereferenceVad((volatile signed __int32 *)Address);
    *a2 = (*(_DWORD *)(BugCheckParameter4 + 500) & 0x20) != 0 ? -1073741558 : -1073741664;
    return 0LL;
  }
  if ( v13 < (LODWORD(Address[1].Blink) | ((unsigned __int64)LOBYTE(Address[2].Flink) << 32))
    || v13 > (HIDWORD(Address[1].Blink) | ((unsigned __int64)BYTE1(Address[2].Flink) << 32)) )
  {
    MiUnlockAndDereferenceVad((volatile signed __int32 *)Address);
    *a2 = -1073741664;
    return 0LL;
  }
  return Address;
}
