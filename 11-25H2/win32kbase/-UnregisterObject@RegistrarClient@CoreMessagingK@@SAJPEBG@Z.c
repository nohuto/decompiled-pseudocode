/*
 * XREFs of ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1400FC484
 * Callers:
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1400FC594 (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     CoreUICallSend @ 0x1400FD920 (CoreUICallSend.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1401A086C (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 *     ?TraceUnregisterObject@Log@CoreMessagingK@@SAXPEBGJ@Z @ 0x1401A1A68 (-TraceUnregisterObject@Log@CoreMessagingK@@SAXPEBGJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::UnregisterObject(
        const unsigned __int16 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 UserCoreMessagingSessionState; // rbx
  int v5; // eax
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+A8h] [rbp+6Fh] BYREF
  void *v10; // [rsp+B0h] [rbp+77h] BYREF

  v10 = &CoreMessagingK::SendHost::s_Vtbl;
  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(a1, a2, a3);
  *(_DWORD *)(UserCoreMessagingSessionState + 32) = 27;
  v9 = 0LL;
  v5 = CoreUICallSend((unsigned int)&v10, (unsigned int)&v9, 1, 1, 13);
  if ( v5 >= 0 )
    v7 = *(_DWORD *)(UserCoreMessagingSessionState + 32) != 0 ? 0xC0000001 : 0;
  else
    v7 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v5, v6);
  CoreMessagingK::Log::TraceUnregisterObject(a1, v7);
  return v7;
}
