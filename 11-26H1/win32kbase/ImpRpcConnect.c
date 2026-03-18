/*
 * XREFs of ImpRpcConnect @ 0x1400BDCEC
 * Callers:
 *     ImSessionStart @ 0x1400BDFF8 (ImSessionStart.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 ImpRpcConnect()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 InputMonitorSessionState; // r14
  _QWORD *v4; // rsi
  RPC_BINDING_HANDLE *v5; // r14
  RPC_STATUS v6; // eax
  CLIENT_CALL_RETURN v7; // rbx
  bool v8; // cc
  RPC_BINDING_HANDLE Binding; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+40h] [rbp-D8h] BYREF
  CLIENT_CALL_RETURN v12; // [rsp+48h] [rbp-D0h]
  RPC_BINDING_HANDLE *v13; // [rsp+50h] [rbp-C8h]
  __int64 v14; // [rsp+58h] [rbp-C0h]
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+60h] [rbp-B8h] BYREF
  _DWORD v16[4]; // [rsp+88h] [rbp-90h] BYREF
  __int128 v17; // [rsp+98h] [rbp-80h]
  PSID SeLocalSystemSid; // [rsp+A8h] [rbp-70h]
  __int128 v19; // [rsp+B0h] [rbp-68h]
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+C0h] [rbp-58h] BYREF
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [rsp+F8h] [rbp-20h] BYREF

  *(&Security.Version + 1) = 0;
  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2);
  v4 = (_QWORD *)(InputMonitorSessionState + 8);
  v14 = InputMonitorSessionState + 8;
  if ( *(_QWORD *)(InputMonitorSessionState + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2);
  v5 = (RPC_BINDING_HANDLE *)(InputMonitorSessionState + 16);
  v13 = v5;
  if ( *v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2);
  v11 = 0LL;
  Binding = 0LL;
  *(_QWORD *)(&Template.ProtocolSequence + 1) = 0LL;
  HIDWORD(Template.NetworkAddress) = 0;
  Template.u1.Reserved = 0LL;
  *(_QWORD *)(&Security.Version + 1) = 0LL;
  HIDWORD(Security.ServerPrincName) = 0;
  Security.AuthIdentity = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  Options.CallTimeout = 0;
  Template.Version = 1;
  Template.Flags = 1;
  Template.ProtocolSequence = 3;
  Template.StringEndpoint = L"imsfk";
  Template.ObjectUuid = (UUID)xmmword_1402554B4;
  v16[0] = 5;
  v16[2] = 0;
  v16[3] = 3;
  SeLocalSystemSid = SeExports->SeLocalSystemSid;
  v16[1] = 17;
  Security.Version = 1;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 20;
  Security.SecurityQos = (RPC_SECURITY_QOS *)v16;
  Options.Version = 1;
  Options.Flags = 2;
  Options.ComTimeout = 5;
  v6 = RpcBindingCreateW(&Template, &Security, &Options, &Binding);
  LODWORD(v7.Pointer) = v6;
  v8 = v6 <= 0;
  if ( v6 || (v6 = RpcBindingBind(0LL, Binding, &unk_1402554B0), LODWORD(v7.Pointer) = v6, v8 = v6 <= 0, v6) )
  {
    if ( !v8 )
      LODWORD(v7.Pointer) = (unsigned __int16)v6 | 0xC0070000;
  }
  else
  {
    v12.Simple = 0LL;
    v7.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 2u, 0LL, Binding, &v11).Pointer;
    v12.Pointer = v7.Pointer;
    if ( SLODWORD(v7.Simple) >= 0 )
    {
      *v4 = v11;
      *v5 = Binding;
      Binding = 0LL;
      v11 = 0LL;
    }
  }
  if ( v11 )
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 1u, 0LL, &v11);
  if ( Binding )
    RpcBindingFree(&Binding);
  return LODWORD(v7.Pointer);
}
