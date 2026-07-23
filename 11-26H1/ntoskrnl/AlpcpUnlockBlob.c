/*
 * XREFs of AlpcpUnlockBlob @ 0x1409936F0
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x1407C43BC (AlpcpForceUnlinkSecureView.c)
 *     AlpcpMapLegacyPortView @ 0x1408EB9BC (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x1408F1878 (AlpcpCreateSectionView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140991C60 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140992124 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcViewDestroyProcedure @ 0x140992BD0 (AlpcViewDestroyProcedure.c)
 *     AlpcpCreateView @ 0x140993130 (AlpcpCreateView.c)
 *     AlpcpExposeAttributes @ 0x1409B93B0 (AlpcpExposeAttributes.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A732B8 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcSectionDeleteProcedure @ 0x140A734A0 (AlpcSectionDeleteProcedure.c)
 *     AlpcpPrepareViewForDelivery @ 0x140A8ED68 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpQueryRemoteView @ 0x140AA4FC8 (AlpcpQueryRemoteView.c)
 *     AlpcRegionDestroyProcedure @ 0x140AAB290 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x140AE13E0 (AlpcpReleaseViewAttribute.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpUnlockBlob(ULONG_PTR BugCheckParameter2)
{
  char v2; // cl
  int v3; // eax
  signed __int64 BugCheckParameter4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  void *v7; // rcx

  v2 = *(_BYTE *)(BugCheckParameter2 - 32);
  if ( (v2 & 1) != 0
    && (v3 = *(__int16 *)(BugCheckParameter2 - 30),
        *(_BYTE *)(BugCheckParameter2 - 32) = v2 & 0xFE,
        *(_WORD *)(BugCheckParameter2 - 30) = 0,
        0x10000 - v3 > 0)
    && (BugCheckParameter4 = v3
                           - 0x10000
                           + _InterlockedExchangeAdd64(
                               (volatile signed __int64 *)(BugCheckParameter2 - 24),
                               v3 - 0x10000),
        BugCheckParameter4 <= 0) )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
    v5 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
    guard_dispatch_icall_no_overrides(BugCheckParameter2, 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
    KeAbPostRelease(BugCheckParameter2 - 16);
    if ( (int)guard_dispatch_icall_no_overrides(BugCheckParameter2, v6) >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
      {
        ExFreeToNPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(v5 + 8), (PVOID)(BugCheckParameter2 - 48));
      }
      else
      {
        v7 = (void *)(BugCheckParameter2 - 48);
        if ( *(_QWORD *)(v5 + 48) )
          guard_dispatch_icall_no_overrides((__int64)v7, (__int64)&AlpcpLookasides);
        else
          ExFreePoolWithTag(v7, *(_DWORD *)(v5 + 4));
      }
    }
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
    KeAbPostRelease(BugCheckParameter2 - 16);
  }
}
