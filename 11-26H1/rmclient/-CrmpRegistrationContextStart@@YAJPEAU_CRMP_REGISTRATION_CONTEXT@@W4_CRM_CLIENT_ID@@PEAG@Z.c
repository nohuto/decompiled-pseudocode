/*
 * XREFs of ?CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z @ 0x1800045D0
 * Callers:
 *     CrmRegister @ 0x180004520 (CrmRegister.c)
 * Callees:
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 */

__int64 __fastcall CrmpRegistrationContextStart(__int64 a1, int a2, __int64 a3)
{
  int v7; // esi
  RPC_STATUS v8; // eax
  int InformationProcess; // ebx
  RPC_STATUS v10; // eax
  HANDLE CurrentProcess; // rax
  LPWSTR FileNameW; // rax
  CLIENT_CALL_RETURN v13; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+50h] [rbp-368h] BYREF
  int Pointer; // [rsp+58h] [rbp-360h]
  int v17; // [rsp+60h] [rbp-358h]
  RPC_BINDING_HANDLE v18; // [rsp+68h] [rbp-350h] BYREF
  __int64 v19; // [rsp+70h] [rbp-348h] BYREF
  _QWORD v20[3]; // [rsp+78h] [rbp-340h] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W v21; // [rsp+90h] [rbp-328h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-300h] BYREF
  int v23; // [rsp+C0h] [rbp-2F8h]
  int v24; // [rsp+C4h] [rbp-2F4h]
  __int128 v25; // [rsp+C8h] [rbp-2F0h]
  __int128 v26; // [rsp+D8h] [rbp-2E0h]
  __int64 v27; // [rsp+E8h] [rbp-2D0h]
  RPC_BINDING_HANDLE_OPTIONS_V1 v28; // [rsp+F0h] [rbp-2C8h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W v29; // [rsp+100h] [rbp-2B8h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+140h] [rbp-278h] BYREF
  LPCWSTR pszPath; // [rsp+148h] [rbp-270h]

  v20[1] = a1;
  v17 = a2;
  v18 = 0LL;
  v7 = 0;
  v19 = 0LL;
  v20[0] = 0LL;
  Binding = 0LL;
  memset(&v29, 0, sizeof(v29));
  *(_QWORD *)&v28.ComTimeout = 5LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  *(_QWORD *)(&v21.Version + 1) = 0LL;
  HIDWORD(v21.ServerPrincName) = 0;
  v21.AuthIdentity = 0LL;
  v29.Version = 1;
  v29.ProtocolSequence = 3;
  *(_QWORD *)&v28.Version = 0x100000001LL;
  v22 = 5LL;
  v23 = 1;
  v24 = 3;
  v21.Version = 1;
  v21.AuthnLevel = 6;
  v21.AuthnSvc = 10;
  v21.SecurityQos = (RPC_SECURITY_QOS *)&v22;
  v8 = RpcBindingCreateW(&v29, &v21, &v28, &Binding);
  InformationProcess = v8;
  if ( v8 )
  {
    if ( v8 > 0 )
      InformationProcess = (unsigned __int16)v8 | 0xC0070000;
  }
  else
  {
    v10 = RpcBindingBind(0LL, Binding, &unk_18001D460);
    InformationProcess = v10;
    if ( v10 )
    {
      if ( v10 > 0 )
        InformationProcess = (unsigned __int16)v10 | 0xC0070000;
    }
    else
    {
      v18 = Binding;
      Binding = 0LL;
      InformationProcess = 0;
    }
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  if ( InformationProcess >= 0 )
  {
    v7 = 1;
    LODWORD(Binding) = 1;
    CurrentProcess = GetCurrentProcess();
    InformationProcess = NtQueryInformationProcess(
                           CurrentProcess,
                           ProcessImageFileNameWin32,
                           ProcessInformation,
                           0x228u,
                           0LL);
    if ( InformationProcess >= 0 )
    {
      FileNameW = PathFindFileNameW(pszPath);
      *(_QWORD *)&v28.Version = 0LL;
      v13.Pointer = NdrClientCall3(
                      (MIDL_STUBLESS_PROXY_INFO *)&stru_18001DC50,
                      0,
                      0LL,
                      v18,
                      &v19,
                      v20,
                      a2,
                      a3,
                      FileNameW).Pointer;
      InformationProcess = (int)v13.Pointer;
      *(CLIENT_CALL_RETURN *)&v28.Version = v13;
      Pointer = (int)v13.Pointer;
      if ( SLODWORD(v13.Simple) >= 0 )
      {
        *(_DWORD *)a1 = a2;
        *(_QWORD *)(a1 + 8) = v19;
        *(_QWORD *)(a1 + 16) = v20[0];
        InformationProcess = 0;
      }
    }
  }
  if ( v7 )
    RpcBindingFree(&v18);
  return (unsigned int)InformationProcess;
}
