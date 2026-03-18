/*
 * XREFs of ObReferenceObjectSafe @ 0x140449C10
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1407C0EF8 (AlpcpPortQueryServerInfo.c)
 *     CmUnRegisterCallback @ 0x1408505D0 (CmUnRegisterCallback.c)
 *     AlpcpDispatchConnectionRequest @ 0x1408E8048 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1408E84E0 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpFlushMessagesPort @ 0x1408EAD50 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x1408EAF48 (AlpcpDisconnectPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1408F7730 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReferenceConnectedPort @ 0x140929760 (AlpcpReferenceConnectedPort.c)
 *     AlpcpDispatchNewMessage @ 0x1409BF430 (AlpcpDispatchNewMessage.c)
 *     WmipProcessEvent @ 0x140A0D184 (WmipProcessEvent.c)
 *     ObpCreateTypeArray @ 0x140A5A9E4 (ObpCreateTypeArray.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x140A866E0 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpQueryRemoteView @ 0x140AA8D08 (AlpcpQueryRemoteView.c)
 *     AlpcpReceiveLegacyMessage @ 0x140ACBE7C (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCancelMessage @ 0x140ACCE1C (AlpcpCancelMessage.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140AEAE90 (AlpcpReferenceMessageByWaitingThread.c)
 *     IovpBuildDriverObjectList @ 0x140C20F98 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x140278BB0 (ObpTraceObjectReferenceIfActive.c)
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
