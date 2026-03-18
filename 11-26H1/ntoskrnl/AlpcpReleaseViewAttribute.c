/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x140AE38D8
 * Callers:
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1407C1ED8 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x1409BCAB0 (AlpcpReleaseAttributes.c)
 * Callees:
 *     AlpcpLockForCachedReferenceBlob @ 0x1409BEF10 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1409C0380 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteView @ 0x1409C1A54 (AlpcpDeleteView.c)
 *     AlpcpUnlockBlob @ 0x1409C2710 (AlpcpUnlockBlob.c)
 */

void __fastcall AlpcpReleaseViewAttribute(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  int v5; // ebx
  ULONG_PTR v6; // rcx

  v5 = a2;
  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(BugCheckParameter2 + 16), a2, a3, a4);
  v6 = *(_QWORD *)(BugCheckParameter2 + 16);
  --*(_DWORD *)(BugCheckParameter2 + 76);
  AlpcpUnlockBlob(v6);
  if ( v5 )
    AlpcpDeleteView(BugCheckParameter2);
  AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
}
