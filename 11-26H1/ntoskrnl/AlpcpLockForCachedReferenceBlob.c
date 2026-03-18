/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x1409BEF10
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x1407C0E28 (AlpcpForceUnlinkSecureView.c)
 *     AlpcpPortQueryServerInfo @ 0x1407C0EF8 (AlpcpPortQueryServerInfo.c)
 *     AlpcpMapLegacyPortView @ 0x1408E53FC (AlpcpMapLegacyPortView.c)
 *     AlpcpSendCloseMessage @ 0x1408EAA08 (AlpcpSendCloseMessage.c)
 *     AlpcpDisconnectPort @ 0x1408EAF48 (AlpcpDisconnectPort.c)
 *     AlpcpCreateSectionView @ 0x1408EB2B8 (AlpcpCreateSectionView.c)
 *     AlpcpExposeAttributes @ 0x140972B20 (AlpcpExposeAttributes.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1409BEA70 (AlpcpLookupMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x1409C0480 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1409C0C80 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1409C1144 (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1409C1390 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcViewDestroyProcedure @ 0x1409C1BF0 (AlpcViewDestroyProcedure.c)
 *     AlpcpCreateView @ 0x1409C2150 (AlpcpCreateView.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140A4992C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A662E8 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcSectionDeleteProcedure @ 0x140A664D0 (AlpcSectionDeleteProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x140A66540 (AlpcReserveDestroyProcedure.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140A69A60 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x140A81A40 (AlpcpFlushQueue.c)
 *     AlpcpPrepareViewForDelivery @ 0x140A87C38 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpQueryRemoteView @ 0x140AA8D08 (AlpcpQueryRemoteView.c)
 *     AlpcRegionDestroyProcedure @ 0x140AAD1D0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140AADF70 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReceiveMessagePort @ 0x140ACC1E4 (AlpcpReceiveMessagePort.c)
 *     AlpcpReleaseViewAttribute @ 0x140AE38D8 (AlpcpReleaseViewAttribute.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpLockForCachedReferenceBlob(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rsi
  __int64 result; // rax

  v5 = (AutoBoost *)KeAbPreAcquire(BugCheckParameter2 - 16, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 - 16), v5, BugCheckParameter2 - 16);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL) + 0x10000;
  if ( result <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x26uLL, result);
  return result;
}
