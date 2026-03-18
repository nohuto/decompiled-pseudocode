/*
 * XREFs of PubSebUnregisterRpc @ 0x1801C8A64
 * Callers:
 *     ?ReleaseWNFHandles@CFSVPProvider@@AEAAXXZ @ 0x1801DF790 (-ReleaseWNFHandles@CFSVPProvider@@AEAAXXZ.c)
 * Callees:
 *     ?RemoveAt@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHH@Z @ 0x1801C5010 (-RemoveAt@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBL.c)
 *     ?Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x1801C8E2C (-Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z.c)
 *     ?FindKey@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEBAHAEBQEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x1801C8EB8 (-FindKey@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLI.c)
 */

__int64 __fastcall PubSebUnregisterRpc(struct _SEB_RPC_PUBLISH_DATA *a1)
{
  RPC_STATUS Pointer; // ebx
  RPC_BINDING_HANDLE v3; // rsi
  bool v4; // cc
  __int64 v5; // rcx
  int Key; // eax
  __int64 v7; // rcx
  RPC_WSTR String; // [rsp+40h] [rbp+8h] BYREF
  void *v10; // [rsp+48h] [rbp+10h] BYREF

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
  v3 = PubSebiServiceHandle;
  v4 = Pointer <= 0;
  if ( !Pointer )
  {
    v10 = ContextTable::Find(a1, a1);
    if ( !v10 )
    {
      LOWORD(Pointer) = 6;
      return (unsigned __int16)Pointer | 0x80070000;
    }
    RtlAcquireSRWLockExclusive(a1);
    *((_DWORD *)a1 + 2) = GetCurrentThreadId();
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                              2u,
                              0LL,
                              v3,
                              &v10).Pointer;
    if ( !Pointer )
    {
      String = (RPC_WSTR)a1;
      RtlAcquireSRWLockExclusive(&unk_1803DE630);
      Key = ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::FindKey(
              v5,
              &String);
      if ( Key != -1 )
        ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::RemoveAt(
          v7,
          Key);
      RtlReleaseSRWLockExclusive(&unk_1803DE630);
      Pointer = 0;
    }
    RtlReleaseSRWLockExclusive(a1);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
    v4 = Pointer <= 0;
  }
  if ( !v4 )
    return (unsigned __int16)Pointer | 0x80070000;
  return (unsigned int)Pointer;
}
