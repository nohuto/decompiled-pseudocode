/*
 * XREFs of IoInvalidateBusRelationsWorker @ 0x1404EEEC0
 * Callers:
 *     PnpWaitForDevicesToStart @ 0x140CC39C8 (PnpWaitForDevicesToStart.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopProcessInvalidateBusRelationsRequest @ 0x140B39A10 (IopProcessInvalidateBusRelationsRequest.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void IoInvalidateBusRelationsWorker()
{
  KIRQL v0; // r9
  __int64 **v1; // rdx
  __int64 v2; // rax
  PVOID *v3; // rbx
  __int64 v4; // rax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  p_P = &P;
  P = &P;
  ExAcquireFastMutex(&IoInvalidateBusRelationsMutex);
  v0 = KeAcquireSpinLockRaiseToDpc(&IoInvalidateBusRelationsLock);
  if ( (__int64 *)IoInvalidateBusRelationsQueue != &IoInvalidateBusRelationsQueue )
  {
    v1 = (__int64 **)p_P;
    if ( *((PVOID **)P + 1) != &P
      || *p_P != &P
      || *(__int64 **)(IoInvalidateBusRelationsQueue + 8) != &IoInvalidateBusRelationsQueue
      || *(__int64 **)qword_140F84B08 != &IoInvalidateBusRelationsQueue
      || (*p_P = &IoInvalidateBusRelationsQueue,
          p_P = (PVOID *)qword_140F84B08,
          *(_QWORD *)qword_140F84B08 = &P,
          v2 = IoInvalidateBusRelationsQueue,
          qword_140F84B08 = (__int64)v1,
          *(__int64 **)(IoInvalidateBusRelationsQueue + 8) != &IoInvalidateBusRelationsQueue)
      || *v1 != &IoInvalidateBusRelationsQueue )
    {
LABEL_15:
      __fastfail(3u);
    }
    *v1 = (__int64 *)IoInvalidateBusRelationsQueue;
    *(_QWORD *)(v2 + 8) = v1;
    qword_140F84B08 = (__int64)&IoInvalidateBusRelationsQueue;
    IoInvalidateBusRelationsQueue = (__int64)&IoInvalidateBusRelationsQueue;
  }
  KeReleaseSpinLock(&IoInvalidateBusRelationsLock, v0);
  while ( 1 )
  {
    v3 = (PVOID *)P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_15;
    v4 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_15;
    P = *(PVOID *)P;
    *(_QWORD *)(v4 + 8) = &P;
    IopProcessInvalidateBusRelationsRequest(v3);
    ObfDereferenceObjectWithTag(v3[2], 0x65706E50u);
    v3[2] = 0LL;
    ExFreePoolWithTag(v3, 0x6F697050u);
  }
  KeReleaseGuardedMutex(&IoInvalidateBusRelationsMutex);
}
