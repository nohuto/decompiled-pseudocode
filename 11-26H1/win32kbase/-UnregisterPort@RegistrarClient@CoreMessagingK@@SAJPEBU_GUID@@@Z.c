/*
 * XREFs of ?UnregisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z @ 0x1400D9D0C
 * Callers:
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1400DA7A4 (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     CoreUICallSend @ 0x1400D87E8 (CoreUICallSend.c)
 *     ?TraceUnregisterPort@Log@CoreMessagingK@@SAXPEBU_GUID@@J@Z @ 0x1400D9DD0 (-TraceUnregisterPort@Log@CoreMessagingK@@SAXPEBU_GUID@@J@Z.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1401BE08C (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1401C3DBC (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::UnregisterPort(const struct _GUID *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 UserCoreMessagingSessionState; // rdi
  int v6; // eax
  int v7; // edx
  struct _GUID v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  void *v11; // [rsp+68h] [rbp+10h] BYREF

  v11 = &CoreMessagingK::SendHost::s_Vtbl;
  v4 = 0;
  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(a1, a2, a3);
  v10 = 0LL;
  *(_DWORD *)(UserCoreMessagingSessionState + 32) = 27;
  v9 = *a1;
  v6 = CoreUICallSend((int)&v11, (int)&v10, 1, 1, 15, (__int64)&unk_1402710AD, &v9);
  if ( v6 < 0 )
  {
    v4 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v6, v7);
  }
  else if ( *(_DWORD *)(UserCoreMessagingSessionState + 32) )
  {
    CoreMessagingK::Runtime::BugCheck(1030LL, *(int *)(UserCoreMessagingSessionState + 32), 0LL);
  }
  CoreMessagingK::Log::TraceUnregisterPort(a1, v4);
  return v4;
}
