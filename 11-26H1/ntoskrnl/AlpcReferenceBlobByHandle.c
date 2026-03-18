/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x1409BED80
 * Callers:
 *     NtAlpcRevokeSecurityContext @ 0x1407C06A0 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1409BEA70 (AlpcpLookupMessage.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1409C1144 (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1409C1390 (NtAlpcImpersonateClientOfPort.c)
 *     NtAlpcDeleteResourceReserve @ 0x140A92D00 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcDeletePortSection @ 0x140A9A1A0 (NtAlpcDeletePortSection.c)
 *     NtAlpcCreateSectionView @ 0x140AB13A0 (NtAlpcCreateSectionView.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140449B6C (ExfAcquireReleasePushLockExclusive.c)
 *     AlpcpReferenceBlob @ 0x1409BEEB8 (AlpcpReferenceBlob.c)
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
