/*
 * XREFs of AlpcpExposeViewAttributeInSenderContext @ 0x140991C60
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x14098FFA0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpExposeAttributesInSenderContext @ 0x140991C40 (AlpcpExposeAttributesInSenderContext.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteView @ 0x140992A34 (AlpcpDeleteView.c)
 *     MmUnsecureVirtualMemory @ 0x140992B70 (MmUnsecureVirtualMemory.c)
 *     AlpcpCreateView @ 0x140993130 (AlpcpCreateView.c)
 *     AlpcpUnlockBlob @ 0x1409936F0 (AlpcpUnlockBlob.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140A02FF8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpRestoreWriteAccess @ 0x140A8F764 (AlpcpRestoreWriteAccess.c)
 */

__int64 __fastcall AlpcpExposeViewAttributeInSenderContext(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v4; // rbx
  int View; // r12d
  ULONG_PTR v8; // rsi
  _QWORD **v9; // r15
  _QWORD *i; // rcx
  ULONG_PTR v11; // rdi
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  __int64 v17; // rax
  _QWORD *v18; // [rsp+20h] [rbp-40h]
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a2 + 144);
  memset(&ApcState, 0, sizeof(ApcState));
  View = 0;
  v8 = *(_QWORD *)(v4 + 16);
  AlpcpLockForCachedReferenceBlob(v8, a2, a3, a4);
  v9 = (_QWORD **)(v8 + 56);
  while ( 1 )
  {
    for ( i = *v9; ; i = (_QWORD *)*i )
    {
      if ( i == v9 )
      {
        v11 = 0LL;
        v18 = 0LL;
        goto LABEL_8;
      }
      if ( i[3] == a1 )
        break;
    }
    v18 = i;
    v11 = (ULONG_PTR)i;
    if ( !i || AlpcpReferenceBlob((ULONG_PTR)i) > 0 )
      break;
    AlpcpUnlockBlob(v8);
    AlpcpLockForCachedReferenceBlob(v8, v14, v15, v16);
  }
LABEL_8:
  if ( (*(_DWORD *)(v8 + 48) & 1) == 0 )
  {
    if ( v11 )
      goto LABEL_16;
    goto LABEL_24;
  }
  if ( v11 == *(_QWORD *)(v8 + 80) )
  {
LABEL_17:
    *(_QWORD *)(a2 + 144) = v18;
    ++*((_DWORD *)v18 + 19);
    goto LABEL_18;
  }
  if ( v11 && v11 == *(_QWORD *)(v8 + 72) )
  {
    if ( (*(_DWORD *)(v4 + 72) & 8) == 0 )
    {
      v17 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v4 + 32), *(_QWORD *)(v4 + 40), *(_QWORD *)(v4 + 48));
      if ( !v17 )
      {
        if ( *(_QWORD *)(v11 + 64) )
        {
          KeStackAttachProcess(*(PRKPROCESS *)(v11 + 32), &ApcState);
          MmUnsecureVirtualMemory(*(HANDLE *)(v11 + 64));
          KiUnstackDetachProcess((__int64)&ApcState, 0);
          *(_QWORD *)(v11 + 64) = 0LL;
        }
        *(_DWORD *)(v11 + 72) |= 1u;
        AlpcpDereferenceBlobEx(v11, 1);
        *(_DWORD *)(v8 + 48) &= ~1u;
        *(_QWORD *)(v8 + 72) = 0LL;
        *(_QWORD *)(v8 + 80) = 0LL;
        goto LABEL_17;
      }
      *(_QWORD *)(v4 + 64) = v17;
    }
    *(_DWORD *)(v4 + 72) &= ~1u;
    AlpcpReferenceBlob(v4);
    if ( *(_QWORD *)(v11 + 64) )
    {
      KeStackAttachProcess(*(PRKPROCESS *)(v11 + 32), &ApcState);
      MmUnsecureVirtualMemory(*(HANDLE *)(v11 + 64));
      KiUnstackDetachProcess((__int64)&ApcState, 0);
      *(_QWORD *)(v11 + 64) = 0LL;
    }
    *(_DWORD *)(v11 + 72) |= 1u;
    *(_QWORD *)(v8 + 72) = v4;
    *(_QWORD *)(v8 + 80) = v11;
    AlpcpDereferenceBlobEx(v11, 1);
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(v4 + 72) & 8) != 0 )
    goto LABEL_14;
  v12 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v4 + 32), *(_QWORD *)(v4 + 40), *(_QWORD *)(v4 + 48));
  if ( !v12 )
  {
    *(_DWORD *)(v8 + 48) &= ~1u;
    *(_QWORD *)(v8 + 72) = 0LL;
    *(_QWORD *)(v8 + 80) = 0LL;
LABEL_24:
    View = AlpcpCreateView(v8);
    if ( View < 0 )
      goto LABEL_30;
LABEL_16:
    *(_DWORD *)(a2 + 40) |= 0x8000u;
    goto LABEL_17;
  }
  *(_QWORD *)(v4 + 64) = v12;
LABEL_14:
  *(_DWORD *)(v4 + 72) &= ~1u;
  AlpcpReferenceBlob(v4);
  *(_QWORD *)(v8 + 72) = v4;
  *(_QWORD *)(v8 + 80) = 0LL;
  if ( v11 )
  {
    *(_QWORD *)(v8 + 80) = v11;
    goto LABEL_17;
  }
  View = AlpcpCreateView(v8);
  if ( View >= 0 )
    goto LABEL_16;
  AlpcpRestoreWriteAccess(v4);
  AlpcpDereferenceBlobEx(v4, 1);
LABEL_30:
  *(_QWORD *)(a2 + 144) = 0LL;
LABEL_18:
  --*(_DWORD *)(v4 + 76);
  if ( (*(_DWORD *)(v4 + 72) & 2) != 0 )
  {
    AlpcpDeleteView(v4);
    *(_DWORD *)(v4 + 72) &= ~2u;
  }
  AlpcpUnlockBlob(v8);
  AlpcpDereferenceBlobEx(v4, 1);
  return (unsigned int)View;
}
