/*
 * XREFs of AlpcSectionDeleteProcedure @ 0x140A734A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1409936F0 (AlpcpUnlockBlob.c)
 *     AlpcDeleteBlobByHandle @ 0x140A73588 (AlpcDeleteBlobByHandle.c)
 *     AlpcpRemoveResourcePort @ 0x140A73664 (AlpcpRemoveResourcePort.c)
 */

LONG_PTR __fastcall AlpcSectionDeleteProcedure(
        _QWORD *BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rcx
  LONG_PTR result; // rax
  void *v7; // rdi

  v5 = BugCheckParameter2[2];
  if ( v5 )
  {
    result = AlpcDeleteBlobByHandle(v5, BugCheckParameter2[3], BugCheckParameter2);
    BugCheckParameter2[2] = 0LL;
  }
  v7 = (void *)BugCheckParameter2[5];
  if ( v7 )
  {
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)BugCheckParameter2, a2, a3, a4);
    AlpcpRemoveResourcePort(v7, BugCheckParameter2);
    BugCheckParameter2[5] = 0LL;
    AlpcpUnlockBlob((ULONG_PTR)BugCheckParameter2);
    return ObfDereferenceObject(v7);
  }
  return result;
}
