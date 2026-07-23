/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x140AE13E0
 * Callers:
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1407C4F38 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x14098DA90 (AlpcpReleaseAttributes.c)
 * Callees:
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteView @ 0x140992A34 (AlpcpDeleteView.c)
 *     AlpcpUnlockBlob @ 0x1409936F0 (AlpcpUnlockBlob.c)
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
