/*
 * XREFs of ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1400FCC28
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1400FC164 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     CoreUICallSend @ 0x1400FD920 (CoreUICallSend.c)
 *     ?TraceRegisterPort@Log@CoreMessagingK@@SAXPEBGPEBU_GUID@@J@Z @ 0x1400FE7BC (-TraceRegisterPort@Log@CoreMessagingK@@SAXPEBGPEBU_GUID@@J@Z.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1401A086C (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::RegisterPort(
        const unsigned __int16 *a1,
        const struct _GUID *a2,
        __int64 a3)
{
  __int64 UserCoreMessagingSessionState; // rbx
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+E0h] [rbp+77h] BYREF
  void *v11; // [rsp+E8h] [rbp+7Fh] BYREF

  v11 = &CoreMessagingK::SendHost::s_Vtbl;
  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(a1, a2, a3);
  *(_DWORD *)(UserCoreMessagingSessionState + 32) = 27;
  v10 = 0LL;
  v6 = CoreUICallSend((unsigned int)&v11, (unsigned int)&v10, 1, 1, 11);
  if ( v6 >= 0 )
    v8 = *(_DWORD *)(UserCoreMessagingSessionState + 32) != 0 ? 0xC0000001 : 0;
  else
    v8 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v6, v7);
  CoreMessagingK::Log::TraceRegisterPort(a1, a2, v8);
  return v8;
}
