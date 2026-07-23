/*
 * XREFs of AlpcpCaptureViewAttributeInternal @ 0x140992124
 * Callers:
 *     AlpcpCaptureViewAttribute @ 0x140AAE534 (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureViewAttribute32 @ 0x140AFEBB0 (AlpcpCaptureViewAttribute32.c)
 * Callees:
 *     AlpcReferenceBlobByHandle @ 0x14098FD60 (AlpcReferenceBlobByHandle.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteView @ 0x140992A34 (AlpcpDeleteView.c)
 *     AlpcpUnlockBlob @ 0x1409936F0 (AlpcpUnlockBlob.c)
 *     AlpcpLocateSectionView @ 0x140A84878 (AlpcpLocateSectionView.c)
 *     AlpcpPrepareViewForDelivery @ 0x140A8ED68 (AlpcpPrepareViewForDelivery.c)
 */

__int64 __fastcall AlpcpCaptureViewAttributeInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v11; // rdi
  __int64 v12; // rcx
  ULONG_PTR v13; // rax
  ULONG_PTR v14; // rbx
  int v15; // ebp
  ULONG_PTR v16; // rdi
  int v17; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_DWORD *)a2 & 0xFFF8FFFF) != 0 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a3 + 144);
  BugCheckParameter2 = v8;
  if ( v8 )
  {
    *(_QWORD *)(a3 + 144) = 0LL;
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v8 + 16), a2, a3, (struct _KLOCK_ENTRIES *)a4);
    --*(_DWORD *)(v8 + 76);
    AlpcpUnlockBlob(*(_QWORD *)(v8 + 16));
    if ( (*(_DWORD *)a2 & 0x10000) != 0 || (v17 = *(_DWORD *)(a3 + 40), (v17 & 0x8000) != 0) && (v17 & 0x4000) == 0 )
      AlpcpDeleteView(v8);
    AlpcpDereferenceBlobEx(v8, 1);
  }
  *(_DWORD *)(a3 + 40) &= 0xFFFF3FFF;
  v9 = *(_QWORD *)(a2 + 8);
  if ( !v9 )
    return 0LL;
  v11 = *(_QWORD *)(a2 + 16);
  if ( !v11 )
    return 3221225793LL;
  v12 = *(_QWORD *)(a1 + 16);
  if ( !v12 )
    return 3221225480LL;
  v13 = AlpcReferenceBlobByHandle((_QWORD *)(v12 + 40), v9, AlpcSectionType, (struct _KLOCK_ENTRIES *)a4);
  v14 = v13;
  if ( !v13 )
    return 3221225480LL;
  v15 = AlpcpLocateSectionView(v13, a1, v11, &BugCheckParameter2);
  if ( v15 >= 0 )
  {
    v16 = BugCheckParameter2;
    v15 = AlpcpPrepareViewForDelivery(BugCheckParameter2);
    if ( v15 < 0 )
      AlpcpDereferenceBlobEx(v16, 1);
    else
      *(_QWORD *)(a4 + 40) = v16;
  }
  AlpcpDereferenceBlobEx(v14, 1);
  return (unsigned int)v15;
}
