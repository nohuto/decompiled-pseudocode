/*
 * XREFs of ?PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU_GUID@@@Z @ 0x1400FD654
 * Callers:
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1400FD4F8 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 * Callees:
 *     CoreUICallSend @ 0x1400FD920 (CoreUICallSend.c)
 *     ?TracePrepareConnection@Log@CoreMessagingK@@SAXPEBUtagMsgRoutingInfo@@JW4MsgError@@PEBU_GUID@@@Z @ 0x1400FDDAC (-TracePrepareConnection@Log@CoreMessagingK@@SAXPEBUtagMsgRoutingInfo@@JW4MsgError@@PEBU_GUID@@@Z.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1401A086C (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::PrepareConnection(
        const struct tagMsgRoutingInfo *a1,
        enum MsgError *a2,
        struct _GUID *a3)
{
  unsigned int v3; // ebx
  __int64 UserCoreMessagingSessionState; // rdi
  int v8; // eax
  int v9; // edx
  __int64 v11; // [rsp+108h] [rbp+67h] BYREF
  void *v12; // [rsp+120h] [rbp+7Fh] BYREF

  v3 = 0;
  v12 = &CoreMessagingK::SendHost::s_Vtbl;
  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(a1, a2, a3);
  *(_DWORD *)(UserCoreMessagingSessionState + 32) = 27;
  *(_QWORD *)(UserCoreMessagingSessionState + 40) = 0LL;
  v11 = 0LL;
  v8 = CoreUICallSend((unsigned int)&v12, (unsigned int)&v11, 1, 1, 3);
  if ( v8 < 0 )
  {
    v3 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v8, v9);
  }
  else
  {
    *(_DWORD *)a2 = *(_DWORD *)(UserCoreMessagingSessionState + 32);
    *a3 = *(struct _GUID *)(*(_QWORD *)(UserCoreMessagingSessionState + 40) + 24LL);
  }
  CoreMessagingK::Log::TracePrepareConnection(a1, v3, *(unsigned int *)a2, a3);
  return v3;
}
