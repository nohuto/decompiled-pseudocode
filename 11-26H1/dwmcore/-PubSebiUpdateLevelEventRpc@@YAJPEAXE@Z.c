/*
 * XREFs of ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x1801C8D04
 * Callers:
 *     ?SignalSEBWorker@CFSVPProvider@@AEAAXXZ @ 0x1801C8C04 (-SignalSEBWorker@CFSVPProvider@@AEAAXXZ.c)
 *     ?ReleaseWNFHandles@CFSVPProvider@@AEAAXXZ @ 0x1801DF790 (-ReleaseWNFHandles@CFSVPProvider@@AEAAXXZ.c)
 * Callees:
 *     ?Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x1801C8E2C (-Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z.c)
 */

__int64 __fastcall PubSebiUpdateLevelEventRpc(struct _SEB_RPC_PUBLISH_DATA *a1, unsigned __int8 a2)
{
  int v2; // esi
  RPC_STATUS Pointer; // ebx
  RPC_BINDING_HANDLE v5; // rbp
  bool v6; // cc
  void *v7; // rbx
  int v8; // eax
  bool v9; // zf
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  RPC_WSTR Options; // [rsp+20h] [rbp-18h]
  RPC_WSTR String; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( !a1 )
  {
    LOWORD(Pointer) = 87;
    return (unsigned __int16)Pointer | 0x80070000;
  }
  Pointer = 0;
  String = 0LL;
  if ( !PubSebiServiceHandle )
  {
    Pointer = RpcStringBindingComposeW(
                0LL,
                (RPC_WSTR)L"ncalrpc",
                0LL,
                (RPC_WSTR)L"csebpub",
                (RPC_WSTR)L"Security=Impersonation Dynamic True",
                &String);
    if ( !Pointer )
    {
      Pointer = RpcBindingFromStringBindingW(String, &PubSebiServiceHandle);
      RpcStringFreeW(&String);
    }
  }
  v5 = PubSebiServiceHandle;
  v6 = Pointer <= 0;
  if ( !Pointer )
  {
    v7 = ContextTable::Find(a1, a1);
    if ( !v7 )
    {
      LOWORD(Pointer) = 6;
      return (unsigned __int16)Pointer | 0x80070000;
    }
    RtlAcquireSRWLockExclusive(a1);
    *((_DWORD *)a1 + 2) = GetCurrentThreadId();
    v8 = *((_DWORD *)a1 + 3);
    if ( (_BYTE)v2 )
    {
      v9 = v8 == 0;
    }
    else
    {
      if ( !v8 )
      {
        Pointer = 50;
LABEL_10:
        RtlReleaseSRWLockExclusive(a1);
        v6 = Pointer <= 0;
        *((_DWORD *)a1 + 2) = 0;
        goto LABEL_11;
      }
      v9 = v8 == 1;
    }
    if ( !v9
      || (LODWORD(Options) = v2,
          (Pointer = (unsigned int)NdrClientCall3(
                                     (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                     1u,
                                     0LL,
                                     v5,
                                     Options,
                                     v7).Pointer) == 0) )
    {
      v11 = *((_DWORD *)a1 + 3);
      v12 = v11 - 1;
      v13 = v11 + 1;
      if ( !(_BYTE)v2 )
        v13 = v12;
      Pointer = 0;
      *((_DWORD *)a1 + 3) = v13;
    }
    goto LABEL_10;
  }
LABEL_11:
  if ( !v6 )
    return (unsigned __int16)Pointer | 0x80070000;
  return (unsigned int)Pointer;
}
