/*
 * XREFs of RmGameModeRegisterPairedAuxiliaryProcessById @ 0x180014720
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800034E0 (CempRpcBindToServer.c)
 */

__int64 __fastcall RmGameModeRegisterPairedAuxiliaryProcessById(int a1, __int64 a2, int a3, int a4)
{
  char v8; // si
  unsigned int Pointer; // ebx
  CLIENT_CALL_RETURN v10; // rax
  int v12; // [rsp+20h] [rbp-58h]
  int v13; // [rsp+30h] [rbp-48h]
  int v14; // [rsp+38h] [rbp-40h]
  char v15; // [rsp+40h] [rbp-38h]
  RPC_BINDING_HANDLE Binding; // [rsp+48h] [rbp-30h] BYREF
  CLIENT_CALL_RETURN v17; // [rsp+50h] [rbp-28h]

  Binding = 0LL;
  v8 = 0;
  if ( (int)CempRpcBindToServer(&unk_180021860, &Binding) >= 0 )
  {
    v8 = 1;
    v15 = 1;
    v17.Simple = 0LL;
    v14 = a4;
    v13 = a3;
    v12 = a1;
    v10.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021900, 4u, 0LL, Binding, v12, a2, v13, v14, v15).Pointer;
    Pointer = (unsigned int)v10.Pointer;
    v17.Pointer = v10.Pointer;
    if ( SLODWORD(v10.Simple) >= 0 )
      Pointer = 0;
  }
  else
  {
    Pointer = -1073610725;
  }
  if ( v8 )
    RpcBindingFree(&Binding);
  return Pointer;
}
