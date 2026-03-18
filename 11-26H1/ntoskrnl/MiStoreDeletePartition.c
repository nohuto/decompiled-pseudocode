/*
 * XREFs of MiStoreDeletePartition @ 0x14070A2E4
 * Callers:
 *     MiDrainCrossPartitionUsage @ 0x1406F0580 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiStoreDrainWriteSupports @ 0x1404ADFE4 (MiStoreDrainWriteSupports.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404E538C (MmStoreFlushOutstandingEvictions.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1404E84E4 (MiQueueSyncModifiedWriterApc.c)
 *     MiStoreReleaseReservedPageCharges @ 0x14070ADDC (MiStoreReleaseReservedPageCharges.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiStoreDeletePartition(__int64 a1)
{
  __int64 result; // rax
  KIRQL v3; // si
  volatile LONG *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  __int64 Object; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-41h] BYREF
  __int64 v9; // [rsp+50h] [rbp-31h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-29h] BYREF
  int v11[24]; // [rsp+78h] [rbp-9h] BYREF

  memset_0(v11, 0, 0x58uLL);
  result = *(unsigned int *)(a1 + 1300);
  if ( (_DWORD)result != -1 )
  {
    Object = 393216LL;
    v8[1] = v8;
    v9 = 393216LL;
    v8[0] = v8;
    v10[2] = a1;
    v10[1] = v10;
    v10[0] = v10;
    MiQueueSyncModifiedWriterApc(a1, (__int64)v11, (__int64)MiStoreRundownWritesApc, (__int64)&Object, &v9);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    MmStoreFlushOutstandingEvictions(*(_QWORD **)(a1 + 256));
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2064));
    KeSetEvent((PRKEVENT)(a1 + 1448), 0, 0);
    v4 = (volatile LONG *)(a1 + 2064);
    if ( v3 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    else
      ExReleaseSpinLockExclusive(v4, v3);
    KeWaitForSingleObject(*(PVOID *)(a1 + 1416), WrKernel, 0, 0, 0LL);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 1416), 0x66506D4Du);
    v5 = *(void **)(a1 + 1512);
    *(_QWORD *)(a1 + 1416) = 0LL;
    ExFreePoolWithTag(v5, 0);
    v6 = *(void **)(a1 + 1520);
    *(_QWORD *)(a1 + 1512) = 0LL;
    ExFreePoolWithTag(v6, 0);
    MiStoreDrainWriteSupports((union _SLIST_HEADER *)a1);
    return MiStoreReleaseReservedPageCharges(a1);
  }
  return result;
}
