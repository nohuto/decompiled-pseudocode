/*
 * XREFs of PubSebRegisterRpc @ 0x1801811D4
 * Callers:
 *     ?EnsureWNFHandles@CFSVPProvider@@AEAAJXZ @ 0x1800EE1F0 (-EnsureWNFHandles@CFSVPProvider@@AEAAJXZ.c)
 *     ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x1800EFDC0 (-CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     CSebiUnregisterPublisher @ 0x180181314 (CSebiUnregisterPublisher.c)
 *     ?Insert@ContextTable@@QEAAKPEAU_SEB_RPC_PUBLISH_DATA@@PEAX@Z @ 0x180181348 (-Insert@ContextTable@@QEAAKPEAU_SEB_RPC_PUBLISH_DATA@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18021C5B4 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall PubSebRegisterRpc(__int64 a1, struct _SEB_RPC_PUBLISH_DATA **a2)
{
  RPC_STATUS Pointer; // edi
  RPC_BINDING_HANDLE v5; // rbp
  bool v6; // cc
  struct _SEB_RPC_PUBLISH_DATA *Heap; // rax
  struct _SEB_RPC_PUBLISH_DATA *v8; // rsi
  CLIENT_CALL_RETURN v9; // rcx
  void *v11; // r8
  RPC_WSTR String; // [rsp+60h] [rbp+18h] BYREF
  void *v13; // [rsp+68h] [rbp+20h] BYREF

  Pointer = 0;
  v13 = 0LL;
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
    Heap = (struct _SEB_RPC_PUBLISH_DATA *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
    v8 = Heap;
    if ( !Heap )
    {
      LOWORD(Pointer) = 8;
      return (unsigned __int16)Pointer | 0x80070000;
    }
    *(_OWORD *)Heap = 0LL;
    RtlInitializeSRWLock(Heap);
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                              0,
                              0LL,
                              v5,
                              a1,
                              &v13).Pointer;
    if ( Pointer )
      goto LABEL_5;
    v11 = v13;
    if ( !v13 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgs();
      v11 = v13;
    }
    Pointer = ContextTable::Insert((ContextTable *)v9.Pointer, v8, v11);
    if ( !Pointer )
    {
      *a2 = v8;
      goto LABEL_7;
    }
    Pointer = CSebiUnregisterPublisher(v5, &v13);
    if ( Pointer )
LABEL_5:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
LABEL_7:
    v6 = Pointer <= 0;
  }
  if ( !v6 )
    return (unsigned __int16)Pointer | 0x80070000;
  return (unsigned int)Pointer;
}
