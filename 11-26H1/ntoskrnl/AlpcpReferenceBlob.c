/*
 * XREFs of AlpcpReferenceBlob @ 0x14098FE98
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408ECFF0 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x1408EE1CC (AlpcpFormatConnectionRequest.c)
 *     AlpcpSetMessageCommunicationInfo @ 0x1408EE8DC (AlpcpSetMessageCommunicationInfo.c)
 *     AlpcpFlushResourcesPort @ 0x1408F1178 (AlpcpFlushResourcesPort.c)
 *     AlpcpCreateRegion @ 0x1408F19C0 (AlpcpCreateRegion.c)
 *     AlpcpCreateSection @ 0x14098C8B8 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x14098D004 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x14098D530 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14098DF10 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x14098FA50 (AlpcpLookupMessage.c)
 *     AlpcReferenceBlobByHandle @ 0x14098FD60 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDispatchNewMessage @ 0x140990410 (AlpcpDispatchNewMessage.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140991C60 (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x140991F30 (NtAlpcDeleteSecurityContext.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140992370 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpCreateView @ 0x140993130 (AlpcpCreateView.c)
 *     AlpcpExposeAttributes @ 0x1409B93B0 (AlpcpExposeAttributes.c)
 *     AlpcpCleanupProcessViews @ 0x1409FD618 (AlpcpCleanupProcessViews.c)
 *     AlpcpViewSearchCallbackFunction @ 0x140A7DE68 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpLocateSectionView @ 0x140A84878 (AlpcpLocateSectionView.c)
 *     AlpcpFlushQueue @ 0x140A878B0 (AlpcpFlushQueue.c)
 *     AlpcpPrepareViewForDelivery @ 0x140A8ED68 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140AAC030 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReceiveMessagePort @ 0x140ACE424 (AlpcpReceiveMessagePort.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140AD9BE8 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  __int64 v2; // r8

  _m_prefetchw((const void *)(BugCheckParameter2 - 24));
  result = *(_QWORD *)(BugCheckParameter2 - 24);
  while ( result > 0 )
  {
    v2 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 - 24), result + 1, result);
    if ( result == v2 )
      return ++result;
  }
  if ( result )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x20uLL, result);
  return result;
}
