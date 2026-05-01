/*
 * XREFs of RmGameModeUnregisterProcess @ 0x180015990
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x180004080 (CempRpcBindToServer.c)
 */

__int64 __fastcall RmGameModeUnregisterProcess(__int64 a1)
{
  char v2; // si
  unsigned int Pointer; // ebx
  CLIENT_CALL_RETURN v4; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+70h] [rbp+18h] BYREF
  CLIENT_CALL_RETURN v7; // [rsp+78h] [rbp+20h]

  Binding = 0LL;
  v2 = 0;
  if ( (int)CempRpcBindToServer(&unk_18001E9C0, &Binding) >= 0 )
  {
    v2 = 1;
    v7.Simple = 0LL;
    v4.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EA20, 1u, 0LL, Binding, a1).Pointer;
    Pointer = (unsigned int)v4.Pointer;
    v7.Pointer = v4.Pointer;
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
