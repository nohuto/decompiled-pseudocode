/*
 * XREFs of MiFreeCloneDescriptor @ 0x140B44944
 * Callers:
 *     MiCloneTreeUpdate @ 0x1404F4EBC (MiCloneTreeUpdate.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404FBFC4 (MiDeleteDeferredCloneDescriptors.c)
 *     MiSetCloneParentForkInProgress @ 0x1405180AC (MiSetCloneParentForkInProgress.c)
 *     MiFreeCloneDescriptorAndHeader @ 0x1405330A4 (MiFreeCloneDescriptorAndHeader.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403BD130 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiFreeProtoPool @ 0x140458808 (MiFreeProtoPool.c)
 *     MiDecrementCloneHeaderCount @ 0x14050D03C (MiDecrementCloneHeaderCount.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
