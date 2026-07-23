/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x14098FD60
 * Callers:
 *     NtAlpcRevokeSecurityContext @ 0x1407C3700 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x14098FA50 (AlpcpLookupMessage.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140992124 (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140992370 (NtAlpcImpersonateClientOfPort.c)
 *     NtAlpcDeleteResourceReserve @ 0x140A97850 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcDeletePortSection @ 0x140A9E320 (NtAlpcDeletePortSection.c)
 *     NtAlpcCreateSectionView @ 0x140AAF390 (NtAlpcCreateSectionView.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140441C9C (ExfAcquireReleasePushLockExclusive.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 */

ULONG_PTR __fastcall AlpcReferenceBlobByHandle(_QWORD *a1, int a2, _DWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v6; // rdi
  unsigned int v7; // ebp
  void *v8; // rdx
  LegacyAutoBoost *v9; // rsi
  ULONG_PTR v10; // rbx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 v13; // rdx
  signed __int32 v15[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( !a1 )
    return 0LL;
  v6 = a1 + 1;
  v7 = a2 - 16;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(a1 + 1), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v6, 0, v9, (struct _KTHREAD *)v6);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  if ( (unsigned __int64)v7 < a1[2]
    && (_mm_lfence(), (v10 = *(_QWORD *)(*a1 + 8LL * v7)) != 0)
    && *(unsigned __int8 *)(v10 - 31) == *a3
    && AlpcpReferenceBlob(v10) )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((unsigned __int64)v6);
    if ( (*(_BYTE *)(v10 - 32) & 4) != 0 )
    {
      _InterlockedOr(v15, 0);
      v13 = *(_QWORD *)(v10 - 16);
      if ( (v13 & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((struct _KTHREAD *)(v10 - 16), v13, v11, v12);
    }
    return v10;
  }
  else
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((unsigned __int64)v6);
    return 0LL;
  }
}
