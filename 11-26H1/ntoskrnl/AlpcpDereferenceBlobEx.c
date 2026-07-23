/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x140991360
 * Callers:
 *     NtAlpcRevokeSecurityContext @ 0x1407C3700 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpForceUnlinkSecureView @ 0x1407C43BC (AlpcpForceUnlinkSecureView.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1407C4F38 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpMapLegacyPortView @ 0x1408EB9BC (AlpcpMapLegacyPortView.c)
 *     NtSecureConnectPort @ 0x1408EC280 (NtSecureConnectPort.c)
 *     AlpcConnectionDestroyProcedure @ 0x1408EF6E0 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpDeletePort @ 0x1408F0D70 (AlpcpDeletePort.c)
 *     AlpcpFlushResourcesPort @ 0x1408F1178 (AlpcpFlushResourcesPort.c)
 *     AlpcpCreateSectionView @ 0x1408F1878 (AlpcpCreateSectionView.c)
 *     AlpcpCreateSection @ 0x14098C8B8 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x14098D004 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x14098D530 (AlpcpCreateSecurityContext.c)
 *     AlpcpReleaseAttributes @ 0x14098DA90 (AlpcpReleaseAttributes.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14098DF10 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcMessageCleanupProcedure @ 0x14098E170 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x14098FA50 (AlpcpLookupMessage.c)
 *     AlpcpDispatchNewMessage @ 0x140990410 (AlpcpDispatchNewMessage.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140991C60 (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x140991F30 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140992124 (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140992370 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpCreateView @ 0x140993130 (AlpcpCreateView.c)
 *     AlpcpExposeAttributes @ 0x1409B93B0 (AlpcpExposeAttributes.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1409BADB4 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCleanupProcessViews @ 0x1409FD618 (AlpcpCleanupProcessViews.c)
 *     NtAlpcDeleteSectionView @ 0x140A7DC00 (NtAlpcDeleteSectionView.c)
 *     AlpcpLocateSectionView @ 0x140A84878 (AlpcpLocateSectionView.c)
 *     AlpcpPrepareViewForDelivery @ 0x140A8ED68 (AlpcpPrepareViewForDelivery.c)
 *     NtAlpcDeleteResourceReserve @ 0x140A97850 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcCreateSecurityContext @ 0x140A9E020 (NtAlpcCreateSecurityContext.c)
 *     NtAlpcDeletePortSection @ 0x140A9E320 (NtAlpcDeletePortSection.c)
 *     AlpcpFlushCancelQueue @ 0x140A9F650 (AlpcpFlushCancelQueue.c)
 *     AlpcRegionDestroyProcedure @ 0x140AAB290 (AlpcRegionDestroyProcedure.c)
 *     NtAlpcCreateSectionView @ 0x140AAF390 (NtAlpcCreateSectionView.c)
 *     NtAlpcCreatePortSection @ 0x140AB7DB0 (NtAlpcCreatePortSection.c)
 *     AlpcpReleaseViewAttribute @ 0x140AE13E0 (AlpcpReleaseViewAttribute.c)
 *     AlpcCreateSecurityContext @ 0x140AFC620 (AlpcCreateSecurityContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDereferenceBlobEx(ULONG_PTR BugCheckParameter2, int a2)
{
  signed __int64 BugCheckParameter4; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  void *v6; // rcx

  BugCheckParameter4 = -a2 + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), -a2);
  if ( BugCheckParameter4 <= 0 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
    v4 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
    guard_dispatch_icall_no_overrides(BugCheckParameter2, 0LL);
    if ( (int)guard_dispatch_icall_no_overrides(BugCheckParameter2, v5) >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
      {
        ExFreeToNPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(v4 + 8), (PVOID)(BugCheckParameter2 - 48));
      }
      else
      {
        v6 = (void *)(BugCheckParameter2 - 48);
        if ( *(_QWORD *)(v4 + 48) )
          guard_dispatch_icall_no_overrides((__int64)v6, (__int64)&AlpcpLookasides);
        else
          ExFreePoolWithTag(v6, *(_DWORD *)(v4 + 4));
      }
    }
  }
}
