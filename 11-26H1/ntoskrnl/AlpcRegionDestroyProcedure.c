/*
 * XREFs of AlpcRegionDestroyProcedure @ 0x140AAB290
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x1409936F0 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcRegionDestroyProcedure(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v4; // rdi

  v4 = *(_QWORD *)(a1 + 16);
  AlpcpLockForCachedReferenceBlob(v4, a2, a3, a4);
  **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
  --*(_DWORD *)(v4 + 52);
  AlpcpUnlockBlob(v4);
  AlpcpDereferenceBlobEx(v4, 1);
  return 0LL;
}
