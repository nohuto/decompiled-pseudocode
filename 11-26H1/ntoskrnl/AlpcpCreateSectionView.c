/*
 * XREFs of AlpcpCreateSectionView @ 0x1408F1878
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x1408EB9BC (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreateSectionView @ 0x140AAF390 (NtAlpcCreateSectionView.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     AlpcpCreateRegion @ 0x1408F19C0 (AlpcpCreateRegion.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateView @ 0x140993130 (AlpcpCreateView.c)
 *     AlpcpUnlockBlob @ 0x1409936F0 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpCreateSectionView(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int Region; // ebx
  struct _KLOCK_ENTRIES *v8; // r9
  void *v9; // rdx
  LegacyAutoBoost *v10; // rdi
  int View; // edi

  *a5 = 0LL;
  AlpcpLockForCachedReferenceBlob(BugCheckParameter2);
  Region = AlpcpCreateRegion(BugCheckParameter2);
  AlpcpUnlockBlob(BugCheckParameter2);
  if ( Region < 0 )
    return (unsigned int)Region;
  v10 = (LegacyAutoBoost *)KeAbPreAcquire(a2 + 352, 0LL, 0LL, v8);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a2 + 352), 0, v10, (struct _KTHREAD *)(a2 + 352));
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  AlpcpLockForCachedReferenceBlob(0LL);
  View = AlpcpCreateView(0LL);
  AlpcpUnlockBlob(0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 352), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 352));
  KeAbPostRelease(a2 + 352);
  AlpcpDereferenceBlobEx(0LL);
  if ( View < 0 )
    return (unsigned int)View;
  *a5 = 0LL;
  return 0LL;
}
