/*
 * XREFs of CoreMsgOpenConnection @ 0x1400D8214
 * Callers:
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1400D7F54 (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     UserCoreMsgOpenConnectionHandle @ 0x1400D9E10 (UserCoreMsgOpenConnectionHandle.c)
 *     ?RegisterEndpoint@CoreMessagingKPort@@QEAAJW4COREMESSAGINGK_ENDPOINT_ID@@AEBUtagMsgRoutingInfo@@@Z @ 0x1401CDD80 (-RegisterEndpoint@CoreMessagingKPort@@QEAAJW4COREMESSAGINGK_ENDPOINT_ID@@AEBUtagMsgRoutingInfo@@.c)
 * Callees:
 *     ?TraceOpenConnectionStart@Log@CoreMessagingK@@SAXDPEBUtagMsgRoutingInfo@@@Z @ 0x1400D82C8 (-TraceOpenConnectionStart@Log@CoreMessagingK@@SAXDPEBUtagMsgRoutingInfo@@@Z.c)
 *     ?TraceOpenConnectionStop@Log@CoreMessagingK@@SAXJPEAX@Z @ 0x1400D8354 (-TraceOpenConnectionStop@Log@CoreMessagingK@@SAXJPEAX@Z.c)
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1400D8450 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1400D8568 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 */

__int64 __fastcall CoreMsgOpenConnection(char a1, const struct tagMsgRoutingInfo *a2, void **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  PRKMUTEX *UserCoreMessagingSessionState; // rax
  char v16; // [rsp+48h] [rbp+20h] BYREF

  v16 = 0;
  CoreMessagingK::Log::TraceOpenConnectionStart(a1, a2);
  CoreMessagingK::EntryLock::Acquire(&v16, 3LL);
  if ( *(_QWORD *)(W32GetUserCoreMessagingSessionState(v7, v6, v8) + 24) )
  {
    v9 = CoreMessagingK::ServerPorts::OpenConnection(a1, a2, a3);
    v10 = v9;
    if ( !v9 )
    {
      if ( !*a3 )
        v9 = -1073741584;
      v10 = v9;
    }
  }
  else
  {
    v10 = -1073741584;
  }
  CoreMessagingK::Log::TraceOpenConnectionStop(v10, *a3);
  if ( v16 )
  {
    UserCoreMessagingSessionState = (PRKMUTEX *)W32GetUserCoreMessagingSessionState(v12, v11, v13);
    KeReleaseMutex(*UserCoreMessagingSessionState, 0);
  }
  return v10;
}
