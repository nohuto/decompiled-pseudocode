/*
 * XREFs of RmGameModeUnregisterProcessById @ 0x1800149D0
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800034E0 (CempRpcBindToServer.c)
 */

__int64 __fastcall RmGameModeUnregisterProcessById(int a1)
{
  char v2; // si
  unsigned int Pointer; // ebx
  CLIENT_CALL_RETURN v4; // rax
  int v6; // [rsp+20h] [rbp-38h]
  RPC_BINDING_HANDLE Binding; // [rsp+70h] [rbp+18h] BYREF
  CLIENT_CALL_RETURN v8; // [rsp+78h] [rbp+20h]

  Binding = 0LL;
  v2 = 0;
  if ( (int)CempRpcBindToServer(&unk_180021860, &Binding) >= 0 )
  {
    v2 = 1;
    v8.Simple = 0LL;
    v6 = a1;
    v4.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021900, 1u, 0LL, Binding, v6).Pointer;
    Pointer = (unsigned int)v4.Pointer;
    v8.Pointer = v4.Pointer;
    if ( SLODWORD(v4.Simple) >= 0 )
      Pointer = 0;
  }
  else
  {
    Pointer = -1073610725;
  }
  if ( v2 )
    RpcBindingFree(&Binding);
  return Pointer;
}
