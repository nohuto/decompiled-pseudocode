/*
 * XREFs of HamHostIdCreateSingleUse @ 0x18000E810
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 */

__int64 __fastcall HamHostIdCreateSingleUse(__int64 a1)
{
  RPC_STATUS v2; // eax
  signed int Pointer; // ebx
  RPC_STATUS v4; // eax
  CLIENT_CALL_RETURN v6; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp-D8h] BYREF
  RPC_BINDING_HANDLE v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+40h] [rbp-C8h]
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+70h] [rbp-98h] BYREF
  int v12; // [rsp+78h] [rbp-90h]
  int v13; // [rsp+7Ch] [rbp-8Ch]
  __int128 v14; // [rsp+80h] [rbp-88h]
  __int128 v15; // [rsp+90h] [rbp-78h]
  __int64 v16; // [rsp+A0h] [rbp-68h]
  RPC_BINDING_HANDLE_OPTIONS_V1 v17; // [rsp+A8h] [rbp-60h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W v18; // [rsp+B8h] [rbp-50h] BYREF

  v8 = 0LL;
  Binding = 0LL;
  memset(&v18, 0, sizeof(v18));
  *(_QWORD *)&v17.ComTimeout = 5LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  *(_QWORD *)(&Security.Version + 1) = 0LL;
  HIDWORD(Security.ServerPrincName) = 0;
  Security.AuthIdentity = 0LL;
  v18.Version = 1;
  v18.ProtocolSequence = 3;
  *(_QWORD *)&v17.Version = 0x100000001LL;
  v11 = 5LL;
  v12 = 1;
  v13 = 3;
  Security.Version = 1;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  Security.SecurityQos = (RPC_SECURITY_QOS *)&v11;
  v2 = RpcBindingCreateW(&v18, &Security, &v17, &Binding);
  Pointer = v2;
  if ( v2 )
  {
    if ( v2 > 0 )
      Pointer = (unsigned __int16)v2 | 0xC0070000;
  }
  else
  {
    v4 = RpcBindingBind(0LL, Binding, &unk_18001DBC0);
    Pointer = v4;
    if ( v4 )
    {
      if ( v4 > 0 )
        Pointer = (unsigned __int16)v4 | 0xC0070000;
    }
    else
    {
      v8 = Binding;
      Binding = 0LL;
      Pointer = 0;
    }
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  if ( Pointer >= 0 )
  {
    Binding = 0LL;
    v6.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001DC20, 2u, 0LL, v8, a1).Pointer;
    Pointer = (signed int)v6.Pointer;
    Binding = (RPC_BINDING_HANDLE)v6.Simple;
    v9 = (int)v6.Pointer;
    if ( SLODWORD(v6.Simple) >= 0 )
      Pointer = 0;
  }
  if ( v8 )
    RpcBindingFree(&v8);
  return (unsigned int)Pointer;
}
