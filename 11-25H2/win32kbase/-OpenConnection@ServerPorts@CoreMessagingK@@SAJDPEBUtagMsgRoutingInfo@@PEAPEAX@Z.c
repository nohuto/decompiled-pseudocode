/*
 * XREFs of ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1400FD4F8
 * Callers:
 *     CoreMsgOpenConnection @ 0x1400FD1A8 (CoreMsgOpenConnection.c)
 * Callees:
 *     ?PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU_GUID@@@Z @ 0x1400FD654 (-PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU.c)
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1400FD770 (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 *     ?Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z @ 0x1400FE438 (-Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x14019EC04 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

int __fastcall CoreMessagingK::ServerPorts::OpenConnection(char a1, const struct tagMsgRoutingInfo *a2, void **a3)
{
  int result; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  struct CoreMessagingK::CoreMsgObject *v13; // rcx
  int v14; // [rsp+20h] [rbp-48h] BYREF
  struct CoreMessagingK::CoreMsgObject *v15; // [rsp+28h] [rbp-40h] BYREF
  struct _GUID v16; // [rsp+30h] [rbp-38h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  v14 = 0;
  v16 = 0LL;
  result = CoreMessagingK::RegistrarClient::PrepareConnection(a2, (enum MsgError *)&v14, &v16);
  if ( result >= 0 )
  {
    if ( v14 == 5 )
      return 0;
    if ( v14 == 10 )
    {
      return -1073741670;
    }
    else
    {
      if ( v14 )
        return -1073741823;
      v10 = *(_QWORD *)(W32GetUserCoreMessagingSessionState(v8, v7, v9) + 56);
      if ( !v10 )
        goto LABEL_21;
      do
      {
        v11 = *(_QWORD *)&v16.Data1 - *(_QWORD *)(v10 + 16);
        if ( *(_QWORD *)&v16.Data1 == *(_QWORD *)(v10 + 16) )
          v11 = *(_QWORD *)v16.Data4 - *(_QWORD *)(v10 + 24);
        if ( !v11 )
          break;
        v10 = *(_QWORD *)(v10 + 48);
      }
      while ( v10 );
      if ( !v10 )
LABEL_21:
        CoreMessagingK::Runtime::BugCheck(1536LL, 0LL, 0LL);
      CoreMessagingK::ServerPorts::DrainPort((struct CoreMessagingK::ServerPortInfo *)v10);
      v12 = *(_QWORD *)(v10 + 40);
      if ( !v12 )
        return -1073741823;
      do
      {
        if ( *(_DWORD *)(v12 + 8) == *(_DWORD *)a2 && *(_DWORD *)(v12 + 12) == *((_DWORD *)a2 + 1) )
          break;
        v12 = *(_QWORD *)(v12 + 24);
      }
      while ( v12 );
      if ( v12 )
      {
        result = CoreMessagingK::CoreMsgObject::Create(
                   a1,
                   (const struct CoreMessagingK::ObjectImplVtbl *)&CoreMessagingK::ConnectionTargetInfo::s_Vtbl,
                   &v15,
                   a3);
        if ( result >= 0 )
        {
          v13 = v15;
          *((_QWORD *)v15 + 2) = *((_QWORD *)a2 + 1);
          *((_QWORD *)v13 + 3) = v12;
          ++*(_DWORD *)(v12 + 16);
          return 0;
        }
      }
      else
      {
        return -1073741823;
      }
    }
  }
  return result;
}
