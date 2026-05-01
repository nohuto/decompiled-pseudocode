/*
 * XREFs of HamCloseActivityForDesktopBridge @ 0x18001BCAC
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x18000DAB0 (HamRegisterDesktopProcessWithAppContainerToken.c)
 * Callees:
 *     CempRpcBindToServer @ 0x180004080 (CempRpcBindToServer.c)
 */

__int64 __fastcall HamCloseActivityForDesktopBridge(__int64 a1, __int64 a2)
{
  int Pointer; // ebx
  CLIENT_CALL_RETURN v5; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+70h] [rbp+18h] BYREF
  CLIENT_CALL_RETURN v8; // [rsp+78h] [rbp+20h]

  Binding = 0LL;
  Pointer = CempRpcBindToServer(&unk_18001EC50, &Binding);
  if ( Pointer >= 0 )
  {
    v8.Simple = 0LL;
    v5.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 7u, 0LL, Binding, a1, a2).Pointer;
    Pointer = (int)v5.Pointer;
    v8.Pointer = v5.Pointer;
    if ( LODWORD(v5.Pointer) == -2147483638 )
      Pointer = 0;
    if ( Pointer >= 0 )
      Pointer = 0;
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  return (unsigned int)Pointer;
}
