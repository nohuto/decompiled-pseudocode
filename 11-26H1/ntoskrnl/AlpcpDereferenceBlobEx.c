/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x1409C0380
 * Callers:
 *     NtAlpcRevokeSecurityContext @ 0x1407C06A0 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpForceUnlinkSecureView @ 0x1407C0E28 (AlpcpForceUnlinkSecureView.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1407C1ED8 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpMapLegacyPortView @ 0x1408E53FC (AlpcpMapLegacyPortView.c)
 *     NtSecureConnectPort @ 0x1408E5CC0 (NtSecureConnectPort.c)
 *     AlpcConnectionDestroyProcedure @ 0x1408E9120 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpDeletePort @ 0x1408EA7B0 (AlpcpDeletePort.c)
 *     AlpcpFlushResourcesPort @ 0x1408EABB8 (AlpcpFlushResourcesPort.c)
 *     AlpcpCreateSectionView @ 0x1408EB2B8 (AlpcpCreateSectionView.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x140970C44 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpExposeAttributes @ 0x140972B20 (AlpcpExposeAttributes.c)
 *     AlpcpCreateSection @ 0x1409BB8D8 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1409BC024 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x1409BC550 (AlpcpCreateSecurityContext.c)
 *     AlpcpReleaseAttributes @ 0x1409BCAB0 (AlpcpReleaseAttributes.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1409BCF30 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcMessageCleanupProcedure @ 0x1409BD190 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1409BEA70 (AlpcpLookupMessage.c)
 *     AlpcpDispatchNewMessage @ 0x1409BF430 (AlpcpDispatchNewMessage.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1409C0C80 (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x1409C0F50 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1409C1144 (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1409C1390 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpCreateView @ 0x1409C2150 (AlpcpCreateView.c)
 *     AlpcpCleanupProcessViews @ 0x140A41C68 (AlpcpCleanupProcessViews.c)
 *     NtAlpcDeleteSectionView @ 0x140A74EE0 (NtAlpcDeleteSectionView.c)
 *     AlpcpLocateSectionView @ 0x140A7EA08 (AlpcpLocateSectionView.c)
 *     AlpcpPrepareViewForDelivery @ 0x140A87C38 (AlpcpPrepareViewForDelivery.c)
 *     NtAlpcDeleteResourceReserve @ 0x140A92D00 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcCreateSecurityContext @ 0x140A99EA0 (NtAlpcCreateSecurityContext.c)
 *     NtAlpcDeletePortSection @ 0x140A9A1A0 (NtAlpcDeletePortSection.c)
 *     AlpcpFlushCancelQueue @ 0x140A9F328 (AlpcpFlushCancelQueue.c)
 *     AlpcRegionDestroyProcedure @ 0x140AAD1D0 (AlpcRegionDestroyProcedure.c)
 *     NtAlpcCreateSectionView @ 0x140AB13A0 (NtAlpcCreateSectionView.c)
 *     NtAlpcCreatePortSection @ 0x140AB69F0 (NtAlpcCreatePortSection.c)
 *     AlpcpReleaseViewAttribute @ 0x140AE38D8 (AlpcpReleaseViewAttribute.c)
 *     AlpcCreateSecurityContext @ 0x140AFA190 (AlpcCreateSecurityContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
