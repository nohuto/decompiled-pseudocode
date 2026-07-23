/*
 * XREFs of AlpcReserveDestroyProcedure @ 0x140A73510
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcDeleteBlobByHandle @ 0x140A73588 (AlpcDeleteBlobByHandle.c)
 *     AlpcpRemoveResourcePort @ 0x140A73664 (AlpcpRemoveResourcePort.c)
 */

__int64 __fastcall AlpcReserveDestroyProcedure(PVOID *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  PVOID v9; // rcx

  v4 = (ULONG_PTR)a1[3];
  if ( v4 )
  {
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)a1[3], a2, a3, a4);
    *(_QWORD *)(v4 + 96) = 0LL;
    a1[3] = 0LL;
    AlpcpUnlockMessage(v4, v6, v7, v8);
  }
  v9 = a1[1];
  if ( v9 )
    AlpcDeleteBlobByHandle(v9, a1[2], a1);
  if ( *a1 )
  {
    AlpcpRemoveResourcePort(*a1, a1);
    ObfDereferenceObject(*a1);
  }
  return 0LL;
}
