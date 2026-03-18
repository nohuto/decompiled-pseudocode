/*
 * XREFs of ?Uninitialize@ServerPorts@CoreMessagingK@@SAXXZ @ 0x1400DAB50
 * Callers:
 *     CoreMsgUninitialize @ 0x1400DAAB4 (CoreMsgUninitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall CoreMessagingK::ServerPorts::Uninitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 UserCoreMessagingSessionState; // rbx
  void *v4; // rcx
  void *v5; // rcx

  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(a1, a2, a3);
  v4 = *(void **)(UserCoreMessagingSessionState + 72);
  if ( v4 )
  {
    ExUnregisterCallback(v4);
    v5 = *(void **)(UserCoreMessagingSessionState + 64);
    *(_QWORD *)(UserCoreMessagingSessionState + 72) = 0LL;
    ObfDereferenceObject(v5);
    *(_QWORD *)(UserCoreMessagingSessionState + 64) = 0LL;
  }
}
