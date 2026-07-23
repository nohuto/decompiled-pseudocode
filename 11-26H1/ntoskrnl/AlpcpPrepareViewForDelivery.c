/*
 * XREFs of AlpcpPrepareViewForDelivery @ 0x140A8ED68
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x140992124 (AlpcpCaptureViewAttributeInternal.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     MmUnsecureVirtualMemory @ 0x140992B70 (MmUnsecureVirtualMemory.c)
 *     AlpcpUnlockBlob @ 0x1409936F0 (AlpcpUnlockBlob.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140A02FF8 (MmSecureVirtualMemoryAgainstWrites.c)
 */

__int64 __fastcall AlpcpPrepareViewForDelivery(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v4; // rsi
  char v6; // r14
  char v7; // di
  ULONG_PTR v8; // rbp
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  _QWORD *v13; // rdi
  __int64 v14; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v6 = a3;
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  v7 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v8 = 0LL;
  AlpcpLockForCachedReferenceBlob(v4, a2, a3, a4);
  v9 = *(_DWORD *)(v4 + 48);
  if ( (v9 & 1) == 0 )
  {
    if ( !v7 )
      goto LABEL_10;
    if ( *(_DWORD *)(BugCheckParameter2 + 76) )
      goto LABEL_10;
    v10 = *(_DWORD *)(v4 + 52);
    if ( v10 > 2 )
      goto LABEL_10;
    if ( v10 != 1 )
    {
      v13 = *(_QWORD **)(v4 + 56);
      if ( v13 == (_QWORD *)BugCheckParameter2 )
        v13 = (_QWORD *)*v13;
      if ( (*(_DWORD *)(BugCheckParameter2 + 72) & 8) == 0 )
      {
        v14 = MmSecureVirtualMemoryAgainstWrites(
                *(struct _KPROCESS **)(BugCheckParameter2 + 32),
                *(_QWORD *)(BugCheckParameter2 + 40),
                *(_QWORD *)(BugCheckParameter2 + 48));
        if ( !v14 )
          goto LABEL_10;
        *(_QWORD *)(BugCheckParameter2 + 64) = v14;
      }
      *(_DWORD *)(BugCheckParameter2 + 72) &= ~1u;
      AlpcpReferenceBlob(BugCheckParameter2);
      *(_DWORD *)(v4 + 48) |= 1u;
      *(_QWORD *)(v4 + 72) = BugCheckParameter2;
      *(_QWORD *)(v4 + 80) = v13;
      goto LABEL_10;
    }
    *(_QWORD *)(v4 + 80) = BugCheckParameter2;
    *(_DWORD *)(v4 + 48) = v9 | 1;
LABEL_10:
    v11 = 0;
    ++*(_DWORD *)(BugCheckParameter2 + 76);
    goto LABEL_11;
  }
  if ( BugCheckParameter2 == *(_QWORD *)(v4 + 80) )
  {
    if ( !v7 )
    {
      v8 = *(_QWORD *)(v4 + 72);
      if ( v8 )
      {
        if ( *(_QWORD *)(v8 + 64) )
        {
          KeStackAttachProcess(*(PRKPROCESS *)(v8 + 32), &ApcState);
          MmUnsecureVirtualMemory(*(HANDLE *)(v8 + 64));
          KiUnstackDetachProcess((__int64)&ApcState, 0);
          *(_QWORD *)(v8 + 64) = 0LL;
        }
        *(_DWORD *)(v8 + 72) |= 1u;
        *(_QWORD *)(v4 + 72) = 0LL;
      }
      *(_DWORD *)(v4 + 48) &= ~1u;
      *(_QWORD *)(v4 + 80) = 0LL;
      goto LABEL_10;
    }
    if ( !*(_DWORD *)(BugCheckParameter2 + 76) )
      goto LABEL_10;
  }
  v11 = -1073741790;
LABEL_11:
  *(_DWORD *)(BugCheckParameter2 + 72) ^= ((unsigned __int8)*(_DWORD *)(BugCheckParameter2 + 72) ^ (unsigned __int8)(2 * v6)) & 2;
  AlpcpUnlockBlob(v4);
  if ( v8 )
    AlpcpDereferenceBlobEx(v8, 1);
  return v11;
}
