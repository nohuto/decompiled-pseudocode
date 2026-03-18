/*
 * XREFs of ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1400FC594
 * Callers:
 *     ?OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1400FC570 (-OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z.c)
 * Callees:
 *     ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1400FC484 (-UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z.c)
 *     ?Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z @ 0x1400FCBC8 (-Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z.c)
 *     ?UnregisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z @ 0x1400FCEC8 (-UnregisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1400FE5D8 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 */

void __fastcall CoreMessagingK::ServerPorts::UninitializeServerPort(
        struct CoreMessagingK::ServerPortInfo *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 UserCoreMessagingSessionState; // r8
  __int64 v5; // rdx
  __int64 i; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx

  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(a1, a2, a3);
  v5 = 0LL;
  for ( i = *(_QWORD *)(UserCoreMessagingSessionState + 56); i; i = *(_QWORD *)(i + 48) )
  {
    if ( (struct CoreMessagingK::ServerPortInfo *)i == a1 )
    {
      v7 = *((_QWORD *)a1 + 6);
      if ( v5 )
        *(_QWORD *)(v5 + 48) = v7;
      else
        *(_QWORD *)(UserCoreMessagingSessionState + 56) = v7;
      break;
    }
    v5 = i;
  }
  v8 = *((_QWORD *)a1 + 5);
  *((_QWORD *)a1 + 5) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  if ( v8 )
  {
    do
    {
      v9 = *(_QWORD *)(v8 + 24);
      ZwClose(*(HANDLE *)v8);
      *(_QWORD *)v8 = 0LL;
      *(_QWORD *)(v8 + 24) = 0LL;
      CoreMessagingK::ClientPortInfo::Release((CoreMessagingK::ClientPortInfo *)v8);
      v8 = v9;
    }
    while ( v9 );
  }
  if ( *((_QWORD *)a1 + 1) )
  {
    CoreMessagingK::RegistrarClient::UnregisterObject(
      *((const unsigned __int16 **)a1 + 4),
      v5,
      UserCoreMessagingSessionState);
    CoreMessagingK::RegistrarClient::UnregisterPort((const struct _GUID *)a1 + 1);
    ZwClose(*((HANDLE *)a1 + 1));
    *((_QWORD *)a1 + 1) = 0LL;
  }
  v10 = *((_QWORD *)a1 + 4);
  if ( v10 )
  {
    CoreMessagingK::Runtime::Free(v10, 1314082115LL);
    *((_QWORD *)a1 + 4) = 0LL;
  }
}
