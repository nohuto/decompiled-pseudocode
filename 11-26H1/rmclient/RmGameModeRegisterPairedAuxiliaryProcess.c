/*
 * XREFs of RmGameModeRegisterPairedAuxiliaryProcess @ 0x180014620
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800034E0 (CempRpcBindToServer.c)
 */

__int64 __fastcall RmGameModeRegisterPairedAuxiliaryProcess(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v8; // si
  unsigned int Pointer; // ebx
  CLIENT_CALL_RETURN v10; // rax
  int v12; // [rsp+38h] [rbp-40h]
  char v13; // [rsp+40h] [rbp-38h]
  RPC_BINDING_HANDLE Binding; // [rsp+48h] [rbp-30h] BYREF
  CLIENT_CALL_RETURN v15; // [rsp+50h] [rbp-28h]

  Binding = 0LL;
  v8 = 0;
  if ( (int)CempRpcBindToServer(&unk_18001D3D0, &Binding) >= 0 )
  {
    v8 = 1;
    v13 = 1;
    v15.Simple = 0LL;
    v12 = a4;
    v10.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001D430, 5u, 0LL, Binding, a1, a2, a3, v12, v13).Pointer;
    Pointer = (unsigned int)v10.Pointer;
    v15.Pointer = v10.Pointer;
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
