/*
 * XREFs of HamGetApplicationInterruptiveUIState @ 0x18000D000
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 */

__int64 __fastcall HamGetApplicationInterruptiveUIState(__int64 a1, void *a2, int a3, bool *a4)
{
  int v8; // esi
  RPC_STATUS v9; // eax
  signed int Pointer; // ebx
  RPC_STATUS v11; // eax
  ULONG v12; // eax
  CLIENT_CALL_RETURN v13; // rax
  _BYTE v15[8]; // [rsp+50h] [rbp-118h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+58h] [rbp-110h] BYREF
  int v17; // [rsp+60h] [rbp-108h]
  RPC_BINDING_HANDLE v18[2]; // [rsp+68h] [rbp-100h] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-C8h] BYREF
  int v21; // [rsp+A8h] [rbp-C0h]
  int v22; // [rsp+ACh] [rbp-BCh]
  __int128 v23; // [rsp+B0h] [rbp-B8h]
  __int128 v24; // [rsp+C0h] [rbp-A8h]
  __int64 v25; // [rsp+D0h] [rbp-98h]
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [rsp+D8h] [rbp-90h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+E8h] [rbp-80h] BYREF

  v18[1] = a4;
  v18[0] = 0LL;
  v15[0] = 0;
  v8 = 0;
  if ( RtlValidSid(a2) )
  {
    Binding = 0LL;
    memset(&Template, 0, sizeof(Template));
    *(_QWORD *)&Options.ComTimeout = 5LL;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    *(_QWORD *)(&Security.Version + 1) = 0LL;
    HIDWORD(Security.ServerPrincName) = 0;
    Security.AuthIdentity = 0LL;
    Template.Version = 1;
    Template.ProtocolSequence = 3;
    Options.Version = 1;
    Options.Flags = 1;
    v20 = 5LL;
    v21 = 1;
    v22 = 3;
    Security.Version = 1;
    Security.AuthnLevel = 6;
    Security.AuthnSvc = 10;
    Security.SecurityQos = (RPC_SECURITY_QOS *)&v20;
    v9 = RpcBindingCreateW(&Template, &Security, &Options, &Binding);
    Pointer = v9;
    if ( v9 )
    {
      if ( v9 > 0 )
        Pointer = (unsigned __int16)v9 | 0xC0070000;
    }
    else
    {
      v11 = RpcBindingBind(0LL, Binding, &unk_18001DC80);
      Pointer = v11;
      if ( v11 )
      {
        if ( v11 > 0 )
          Pointer = (unsigned __int16)v11 | 0xC0070000;
      }
      else
      {
        v18[0] = Binding;
        Binding = 0LL;
        Pointer = 0;
      }
    }
    if ( Binding )
      RpcBindingFree(&Binding);
    if ( Pointer >= 0 )
    {
      v8 = 1;
      LODWORD(Binding) = 1;
      v12 = RtlLengthSid(a2);
      *(_QWORD *)&Options.Version = 0LL;
      v13.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0x13u, 0LL, v18[0], a1, a2, v12, a3, v15).Pointer;
      Pointer = (signed int)v13.Pointer;
      *(CLIENT_CALL_RETURN *)&Options.Version = v13;
      v17 = (int)v13.Pointer;
      if ( SLODWORD(v13.Simple) >= 0 )
      {
        *a4 = v15[0] != 0;
        Pointer = 0;
      }
    }
  }
  else
  {
    Pointer = -1073741584;
  }
  if ( v8 )
    RpcBindingFree(v18);
  return (unsigned int)Pointer;
}
