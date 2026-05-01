/*
 * XREFs of HamHostIdFind @ 0x180001F50
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800034E0 (CempRpcBindToServer.c)
 */

__int64 __fastcall HamHostIdFind(__int64 a1, __int64 a2)
{
  int Pointer; // ebx
  CLIENT_CALL_RETURN v5; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+70h] [rbp+18h] BYREF
  CLIENT_CALL_RETURN v8; // [rsp+78h] [rbp+20h]

  Binding = 0LL;
  Pointer = CempRpcBindToServer(&unk_18001DBC0);
  if ( Pointer >= 0 )
  {
    v8.Simple = 0LL;
    v5.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001DC20, 0, 0LL, Binding, a1, a2).Pointer;
    Pointer = (int)v5.Pointer;
    v8.Pointer = v5.Pointer;
    if ( SLODWORD(v5.Simple) >= 0 )
      Pointer = 0;
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  return (unsigned int)Pointer;
}
