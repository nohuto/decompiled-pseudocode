/*
 * XREFs of ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1400DA8A0
 * Callers:
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1400DA7A4 (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     CoreUICallSend @ 0x1400D87E8 (CoreUICallSend.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1401C3DBC (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 *     ?TraceUnregisterObject@Log@CoreMessagingK@@SAXPEBGJ@Z @ 0x1401C5910 (-TraceUnregisterObject@Log@CoreMessagingK@@SAXPEBGJ@Z.c)
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
  int v9; // [rsp+40h] [rbp+7h]
  __int128 v10; // [rsp+50h] [rbp+17h]
  __int128 v11; // [rsp+70h] [rbp+37h] BYREF
  __int64 v12; // [rsp+80h] [rbp+47h]
  __int64 v13; // [rsp+A8h] [rbp+6Fh] BYREF
  void *v14; // [rsp+B0h] [rbp+77h] BYREF

  v14 = &CoreMessagingK::SendHost::s_Vtbl;
  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(a1, a2, a3);
  v10 = 0LL;
  *(_DWORD *)(UserCoreMessagingSessionState + 32) = 27;
  v13 = 0LL;
  v12 = 0LL;
  v9 = 1;
  LODWORD(v10) = 1;
  v11 = v10;
  v5 = CoreUICallSend((int)&v14, (int)&v13, 1, 1, 13, (__int64)&unk_14027110B, a1, &v11, v9);
  if ( v5 >= 0 )
    v7 = *(_DWORD *)(UserCoreMessagingSessionState + 32) != 0 ? 0xC0000001 : 0;
  else
    v7 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v5, v6);
  CoreMessagingK::Log::TraceUnregisterObject(a1, v7);
  return v7;
}
