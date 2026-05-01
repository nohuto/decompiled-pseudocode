/*
 * XREFs of RmGameModeRegisterProcess @ 0x180002160
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800034E0 (CempRpcBindToServer.c)
 */

__int64 __fastcall RmGameModeRegisterProcess(__int64 a1, __int64 a2, int a3)
{
  char v6; // si
  CLIENT_CALL_RETURN v7; // rax
  unsigned int Pointer; // ebx
  int v10; // [rsp+30h] [rbp-48h]
  RPC_BINDING_HANDLE Binding[3]; // [rsp+48h] [rbp-30h] BYREF

  Binding[0] = 0LL;
  v6 = 0;
  if ( (int)CempRpcBindToServer(&unk_18001D3D0) < 0 )
  {
    Pointer = -1073610725;
  }
  else
  {
    v6 = 1;
    v10 = a3;
    v7.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001D430, 0, 0LL, Binding[0], a1, a2, v10).Pointer;
    Pointer = (unsigned int)v7.Pointer;
    Binding[1] = v7.Pointer;
    if ( SLODWORD(v7.Simple) >= 0 )
      Pointer = 0;
  }
  if ( v6 )
    RpcBindingFree(Binding);
  return Pointer;
}
