/*
 * XREFs of ObReferenceObjectSafe @ 0x140441D40
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1407C448C (AlpcpPortQueryServerInfo.c)
 *     CmUnRegisterCallback @ 0x1408568E0 (CmUnRegisterCallback.c)
 *     AlpcpDispatchConnectionRequest @ 0x1408EE608 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1408EEAA0 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpFlushMessagesPort @ 0x1408F1310 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x1408F1508 (AlpcpDisconnectPort.c)
 *     AlpcpReferenceConnectedPort @ 0x140905270 (AlpcpReferenceConnectedPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409276C0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140990410 (AlpcpDispatchNewMessage.c)
 *     WmipProcessEvent @ 0x140A0CBD4 (WmipProcessEvent.c)
 *     ObpCreateTypeArray @ 0x140A67954 (ObpCreateTypeArray.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x140A8B660 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpQueryRemoteView @ 0x140AA4FC8 (AlpcpQueryRemoteView.c)
 *     AlpcpReceiveLegacyMessage @ 0x140ACE0BC (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140AEDC60 (AlpcpReferenceMessageByWaitingThread.c)
 *     IovpBuildDriverObjectList @ 0x140C26FA8 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 */

char __fastcall ObReferenceObjectSafe(__int64 a1)
{
  volatile signed __int64 *v1; // r9
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = (volatile signed __int64 *)(a1 - 48);
  _m_prefetchw((const void *)(a1 - 48));
  v2 = *(_QWORD *)(a1 - 48);
  while ( v2 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(v1, v2 + 1, v2);
    if ( v3 == v2 )
    {
      ObpTraceObjectReferenceIfActive((__int64)v1, 1, 0x746C6644u);
      LOBYTE(v2) = 1;
      return v2;
    }
  }
  return v2;
}
