/*
 * XREFs of MiFreeCloneDescriptor @ 0x140B46704
 * Callers:
 *     MiCloneTreeUpdate @ 0x1404EE49C (MiCloneTreeUpdate.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404F5510 (MiDeleteDeferredCloneDescriptors.c)
 *     MiSetCloneParentForkInProgress @ 0x140511B1C (MiSetCloneParentForkInProgress.c)
 *     MiFreeCloneDescriptorAndHeader @ 0x140535524 (MiFreeCloneDescriptorAndHeader.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C6FA0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiFreeProtoPool @ 0x140450078 (MiFreeProtoPool.c)
 *     MiDecrementCloneHeaderCount @ 0x140506AAC (MiDecrementCloneHeaderCount.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeCloneDescriptor(ULONG_PTR BugCheckParameter1, _QWORD *P)
{
  volatile signed __int64 *v2; // rbx
  void *v5; // rcx

  v2 = (volatile signed __int64 *)P[7];
  v5 = (void *)*((_QWORD *)v2 + 2);
  if ( _InterlockedExchangeAdd64(v2 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    MiFreeProtoPool(v5, 32 * *v2);
    MiDecrementCloneHeaderCount(*((_QWORD *)v2 + 3));
    ExFreePoolWithTag((PVOID)v2, 0);
  }
  PsReturnProcessNonPagedPoolQuota(BugCheckParameter1, P[8]);
  ExFreePoolWithTag(P, 0);
}
