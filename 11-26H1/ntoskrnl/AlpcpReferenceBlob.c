/*
 * XREFs of AlpcpReferenceBlob @ 0x1409BEEB8
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408E6A30 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x1408E7C0C (AlpcpFormatConnectionRequest.c)
 *     AlpcpSetMessageCommunicationInfo @ 0x1408E831C (AlpcpSetMessageCommunicationInfo.c)
 *     AlpcpFlushResourcesPort @ 0x1408EABB8 (AlpcpFlushResourcesPort.c)
 *     AlpcpCreateRegion @ 0x1408EB400 (AlpcpCreateRegion.c)
 *     AlpcpExposeAttributes @ 0x140972B20 (AlpcpExposeAttributes.c)
 *     AlpcpCreateSection @ 0x1409BB8D8 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1409BC024 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x1409BC550 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1409BCF30 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1409BEA70 (AlpcpLookupMessage.c)
 *     AlpcReferenceBlobByHandle @ 0x1409BED80 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDispatchNewMessage @ 0x1409BF430 (AlpcpDispatchNewMessage.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1409C0C80 (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x1409C0F50 (NtAlpcDeleteSecurityContext.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1409C1390 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpCreateView @ 0x1409C2150 (AlpcpCreateView.c)
 *     AlpcpCleanupProcessViews @ 0x140A41C68 (AlpcpCleanupProcessViews.c)
 *     AlpcpViewSearchCallbackFunction @ 0x140A75148 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpLocateSectionView @ 0x140A7EA08 (AlpcpLocateSectionView.c)
 *     AlpcpFlushQueue @ 0x140A81A40 (AlpcpFlushQueue.c)
 *     AlpcpPrepareViewForDelivery @ 0x140A87C38 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140AADF70 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReceiveMessagePort @ 0x140ACC1E4 (AlpcpReceiveMessagePort.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140ADC698 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
