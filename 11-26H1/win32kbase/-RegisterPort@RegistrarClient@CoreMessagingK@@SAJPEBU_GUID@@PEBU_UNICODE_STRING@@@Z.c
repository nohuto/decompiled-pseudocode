/*
 * XREFs of ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1401B52BC
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1400D8074 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     CoreUICallSend @ 0x1400D87E8 (CoreUICallSend.c)
 *     ?TraceRegisterPort@Log@CoreMessagingK@@SAXPEBU_GUID@@PEBGJ@Z @ 0x1401B53B8 (-TraceRegisterPort@Log@CoreMessagingK@@SAXPEBU_GUID@@PEBGJ@Z.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1401BE08C (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1401C3DBC (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::RegisterPort(
        const struct _GUID *a1,
        const struct _UNICODE_STRING *a2,
        __int64 a3)
{
  unsigned int v5; // ebx
  __int64 UserCoreMessagingSessionState; // rdi
  int v7; // eax
  int v8; // edx
  PWSTR Buffer; // [rsp+38h] [rbp-60h]
  __int128 v11; // [rsp+50h] [rbp-48h] BYREF
  struct _GUID v12; // [rsp+60h] [rbp-38h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+8h] BYREF
  void *v14; // [rsp+A8h] [rbp+10h] BYREF

  v14 = &CoreMessagingK::SendHost::s_Vtbl;
  v5 = 0;
  v11 = 0LL;
  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(a1, a2, a3);
  v13 = 0LL;
  *(_DWORD *)(UserCoreMessagingSessionState + 32) = 27;
  Buffer = a2->Buffer;
  v12 = *a1;
  v7 = CoreUICallSend((int)&v14, (int)&v13, 1, 1, 14, (__int64)&unk_140271112, &v12, Buffer, &v11);
  if ( v7 >= 0 )
  {
    if ( *(_DWORD *)(UserCoreMessagingSessionState + 32) )
      CoreMessagingK::Runtime::BugCheck(1029LL, *(int *)(UserCoreMessagingSessionState + 32), 0LL);
  }
  else
  {
    v5 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v7, v8);
  }
  CoreMessagingK::Log::TraceRegisterPort(a1, a2->Buffer, v5);
  return v5;
}
