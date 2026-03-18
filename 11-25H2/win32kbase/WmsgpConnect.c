/*
 * XREFs of WmsgpConnect @ 0x1402CA7F4
 * Callers:
 *     _RegisterLogonProcess @ 0x14016BF30 (_RegisterLogonProcess.c)
 * Callees:
 *     StringCchPrintfW @ 0x14014F7E4 (StringCchPrintfW.c)
 *     Feature_UMAccessWmsgpConnect__private_IsEnabledDeviceUsageNoInline @ 0x140226188 (Feature_UMAccessWmsgpConnect__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     RtlReadULongFromUser @ 0x1402C906C (RtlReadULongFromUser.c)
 */

__int64 __fastcall WmsgpConnect(unsigned int *a1, int a2, RPC_BINDING_HANDLE *a3)
{
  unsigned int v6; // ebx
  unsigned int *v7; // rsi
  unsigned int ULongFromUser; // ebx
  unsigned int v9; // eax
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+40h] [rbp-1F8h] BYREF
  __int128 v13; // [rsp+68h] [rbp-1D0h] BYREF
  __int128 v14; // [rsp+78h] [rbp-1C0h]
  __int128 v15; // [rsp+88h] [rbp-1B0h]
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+98h] [rbp-1A0h] BYREF
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [rsp+D0h] [rbp-168h] BYREF
  wchar_t pszDest[152]; // [rsp+E0h] [rbp-158h] BYREF

  *(_OWORD *)&Template.Version = xmmword_140274420;
  memset(&Template.NetworkAddress, 0, 40);
  Options = (RPC_BINDING_HANDLE_OPTIONS_V1)xmmword_140274400;
  v13 = xmmword_14025C8B8;
  v14 = xmmword_14025C8C8;
  v15 = *(_OWORD *)&off_14025C8D8;
  *(_QWORD *)&Security.Version = 1LL;
  Security.ServerPrincName = 0LL;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  Security.AuthIdentity = 0LL;
  Security.SecurityQos = (RPC_SECURITY_QOS *)&v13;
  if ( a2 == -1 )
  {
    v6 = -1073741822;
  }
  else
  {
    v7 = a1 + 1;
    if ( (unsigned int)Feature_UMAccessWmsgpConnect__private_IsEnabledDeviceUsageNoInline() )
    {
      ULongFromUser = RtlReadULongFromUser(a1);
      v9 = RtlReadULongFromUser(v7);
    }
    else
    {
      v9 = *v7;
      ULongFromUser = *a1;
    }
    StringCchPrintfW(
      pszDest,
      0x91uLL,
      L"WMsgKRpc%X%X%X",
      v9,
      ULongFromUser,
      a2,
      0,
      a3,
      *(_QWORD *)&Security.Version,
      Security.ServerPrincName,
      *(_QWORD *)&Security.AuthnLevel,
      Security.AuthIdentity,
      Security.SecurityQos,
      v13,
      v14,
      v15,
      *(_QWORD *)&Template.Version,
      *(_QWORD *)&Template.ProtocolSequence,
      Template.NetworkAddress,
      Template.StringEndpoint,
      Template.u1.Reserved,
      *(_QWORD *)&Template.ObjectUuid.Data1,
      *(_QWORD *)Template.ObjectUuid.Data4,
      *(_QWORD *)&Options.Version,
      *(_QWORD *)&Options.ComTimeout);
    Template.StringEndpoint = pszDest;
    v6 = RpcBindingCreateW(&Template, &Security, &Options, a3);
    if ( !v6 )
      v6 = RpcBindingBind(0LL, *a3, &unk_14025C9E0);
  }
  if ( v6 && *a3 )
  {
    RpcBindingFree(a3);
    *a3 = 0LL;
  }
  return v6;
}
