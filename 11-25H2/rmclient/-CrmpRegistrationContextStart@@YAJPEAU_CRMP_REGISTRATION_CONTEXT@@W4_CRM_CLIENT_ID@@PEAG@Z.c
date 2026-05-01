/*
 * XREFs of ?CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z @ 0x180008A50
 * Callers:
 *     CrmRegister @ 0x1800089A0 (CrmRegister.c)
 * Callees:
 *     __security_check_cookie @ 0x18001C080 (__security_check_cookie.c)
 */

__int64 __fastcall CrmpRegistrationContextStart(__int64 a1, int a2, __int64 a3)
{
  int v6; // esi
  RPC_STATUS v7; // eax
  int InformationProcess; // ebx
  RPC_STATUS v9; // eax
  HANDLE CurrentProcess; // rax
  LPWSTR FileNameW; // rax
  CLIENT_CALL_RETURN v12; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+50h] [rbp-348h] BYREF
  int Pointer; // [rsp+58h] [rbp-340h]
  int v16; // [rsp+60h] [rbp-338h]
  RPC_BINDING_HANDLE v17; // [rsp+68h] [rbp-330h] BYREF
  __int64 v18; // [rsp+70h] [rbp-328h] BYREF
  _QWORD v19[2]; // [rsp+78h] [rbp-320h] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W v20; // [rsp+88h] [rbp-310h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-2E8h] BYREF
  int v22; // [rsp+B8h] [rbp-2E0h]
  int v23; // [rsp+BCh] [rbp-2DCh]
  __int128 v24; // [rsp+C0h] [rbp-2D8h]
  __int128 v25; // [rsp+D0h] [rbp-2C8h]
  __int64 v26; // [rsp+E0h] [rbp-2B8h]
  RPC_BINDING_HANDLE_OPTIONS_V1 v27; // [rsp+E8h] [rbp-2B0h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W v28; // [rsp+F8h] [rbp-2A0h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+130h] [rbp-268h] BYREF
  LPCWSTR pszPath; // [rsp+138h] [rbp-260h]

  v19[1] = a1;
  v16 = a2;
  v17 = 0LL;
  v6 = 0;
  v18 = 0LL;
  v19[0] = 0LL;
  Binding = 0LL;
  memset(&v28, 0, sizeof(v28));
  *(_QWORD *)&v27.ComTimeout = 5LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  *(_QWORD *)(&v20.Version + 1) = 0LL;
  HIDWORD(v20.ServerPrincName) = 0;
  v20.AuthIdentity = 0LL;
  v28.Version = 1;
  v28.ProtocolSequence = 3;
  *(_QWORD *)&v27.Version = 0x100000001LL;
  v21 = 5LL;
  v22 = 1;
  v23 = 3;
  v20.Version = 1;
  v20.AuthnLevel = 6;
  v20.AuthnSvc = 10;
  v20.SecurityQos = (RPC_SECURITY_QOS *)&v21;
  v7 = RpcBindingCreateW(&v28, &v20, &v27, &Binding);
  InformationProcess = v7;
  if ( v7 )
  {
    if ( v7 > 0 )
      InformationProcess = (unsigned __int16)v7 | 0xC0070000;
  }
  else
  {
    v9 = RpcBindingBind(0LL, Binding, &unk_18001EB10);
    InformationProcess = v9;
    if ( v9 )
    {
      if ( v9 > 0 )
        InformationProcess = (unsigned __int16)v9 | 0xC0070000;
    }
    else
    {
      v17 = Binding;
      Binding = 0LL;
      InformationProcess = 0;
    }
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  if ( InformationProcess >= 0 )
  {
    v6 = 1;
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
      *(_QWORD *)&v27.Version = 0LL;
      v12.Pointer = NdrClientCall3(
                      (MIDL_STUBLESS_PROXY_INFO *)&stru_18001EC20,
                      0,
                      0LL,
                      v17,
                      &v18,
                      v19,
                      a2,
                      a3,
                      FileNameW).Pointer;
      InformationProcess = (int)v12.Pointer;
      *(CLIENT_CALL_RETURN *)&v27.Version = v12;
      Pointer = (int)v12.Pointer;
      if ( SLODWORD(v12.Simple) >= 0 )
      {
        *(_DWORD *)a1 = a2;
        *(_QWORD *)(a1 + 8) = v18;
        *(_QWORD *)(a1 + 16) = v19[0];
        InformationProcess = 0;
      }
    }
  }
  if ( v6 )
    RpcBindingFree(&v17);
  return (unsigned int)InformationProcess;
}
