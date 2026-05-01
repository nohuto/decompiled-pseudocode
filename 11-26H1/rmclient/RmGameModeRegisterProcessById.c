/*
 * XREFs of RmGameModeRegisterProcessById @ 0x180014820
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800034E0 (CempRpcBindToServer.c)
 */

__int64 __fastcall RmGameModeRegisterProcessById(int a1, __int64 a2, int a3)
{
  char v6; // si
  unsigned int Pointer; // ebx
  CLIENT_CALL_RETURN v8; // rax
  int v10; // [rsp+20h] [rbp-58h]
  int v11; // [rsp+30h] [rbp-48h]
  RPC_BINDING_HANDLE Binding; // [rsp+48h] [rbp-30h] BYREF
  CLIENT_CALL_RETURN v13; // [rsp+50h] [rbp-28h]

  Binding = 0LL;
  v6 = 0;
  if ( (int)CempRpcBindToServer(&unk_180021860, &Binding) >= 0 )
  {
    v6 = 1;
    v13.Simple = 0LL;
    v11 = a3;
    v10 = a1;
    v8.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021900, 0, 0LL, Binding, v10, a2, v11).Pointer;
    Pointer = (unsigned int)v8.Pointer;
    v13.Pointer = v8.Pointer;
    if ( SLODWORD(v8.Simple) >= 0 )
      Pointer = 0;
  }
  else
  {
    Pointer = -1073610725;
  }
  if ( v6 )
    RpcBindingFree(&Binding);
  return Pointer;
}
