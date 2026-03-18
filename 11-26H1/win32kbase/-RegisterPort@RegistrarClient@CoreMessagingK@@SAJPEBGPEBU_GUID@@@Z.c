/*
 * XREFs of ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1400D9C0C
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1400D8074 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     CoreUICallSend @ 0x1400D87E8 (CoreUICallSend.c)
 *     ?TraceRegisterPort@Log@CoreMessagingK@@SAXPEBGPEBU_GUID@@J@Z @ 0x1400D9FB4 (-TraceRegisterPort@Log@CoreMessagingK@@SAXPEBGPEBU_GUID@@J@Z.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1401C3DBC (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::RegisterPort(
        const unsigned __int16 *a1,
        const struct _GUID *a2,
        __int64 a3)
{
  __int64 UserCoreMessagingSessionState; // rbx
  struct _GUID v6; // xmm0
  int v7; // eax
  int v8; // edx
  unsigned int v9; // ebx
  int v11; // [rsp+50h] [rbp-19h]
  struct _GUID v12; // [rsp+60h] [rbp-9h] BYREF
  __int128 v13; // [rsp+70h] [rbp+7h]
  __int64 v14; // [rsp+80h] [rbp+17h]
  __int128 v15; // [rsp+90h] [rbp+27h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+37h]
  __int64 v17; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v18; // [rsp+E0h] [rbp+77h] BYREF
  void *v19; // [rsp+E8h] [rbp+7Fh] BYREF

  v19 = &CoreMessagingK::SendHost::s_Vtbl;
  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(a1, a2, a3);
  v13 = 0LL;
  *(_DWORD *)(UserCoreMessagingSessionState + 32) = 27;
  v6 = *a2;
  v14 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v11 = 1;
  LODWORD(v13) = 1;
  v12 = v6;
  v15 = v13;
  v16 = 0LL;
  v7 = CoreUICallSend((int)&v19, (int)&v18, 1, 1, 11, (__int64)&unk_1402710FE, a1, &v15, &v17, &v12, v11);
  if ( v7 >= 0 )
    v9 = *(_DWORD *)(UserCoreMessagingSessionState + 32) != 0 ? 0xC0000001 : 0;
  else
    v9 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v7, v8);
  CoreMessagingK::Log::TraceRegisterPort(a1, a2, v9);
  return v9;
}
