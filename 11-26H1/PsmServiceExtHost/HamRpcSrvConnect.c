/*
 * XREFs of HamRpcSrvConnect @ 0x180030F90
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002FF30 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180030D78 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 *     CempRpcQueryClientInformation @ 0x1800318A4 (CempRpcQueryClientInformation.c)
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180040958 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamRpcSrvConnect(
        RPC_BINDING_HANDLE ClientBinding,
        struct _HAM_CLIENT_CONTEXT **a2,
        unsigned int a3,
        unsigned int *a4,
        _QWORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        struct _HAM_CLIENT_CONTEXT **a8)
{
  int v12; // eax
  HANDLE v13; // rdi
  int v14; // ebx
  struct _HAM_CLIENT_CONTEXT *v15; // rcx
  DWORD CurrentProcessId; // eax
  struct _HAM_CLIENT_CONTEXT *v18; // rdx
  struct _HAM_CLIENT_CONTEXT *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // [rsp+38h] [rbp-C1h]
  __int64 v25; // [rsp+40h] [rbp-B9h]
  unsigned int v26; // [rsp+60h] [rbp-99h] BYREF
  int TokenInformation; // [rsp+64h] [rbp-95h] BYREF
  struct _HAM_CLIENT_CONTEXT *v28; // [rsp+68h] [rbp-91h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-89h] BYREF
  struct _HAM_CLIENT_CONTEXT **v30; // [rsp+78h] [rbp-81h]
  unsigned int *v31; // [rsp+80h] [rbp-79h] BYREF
  __int128 v32; // [rsp+88h] [rbp-71h]
  __int64 v33; // [rsp+98h] [rbp-61h]
  _BYTE DestinationSid[80]; // [rsp+A0h] [rbp-59h] BYREF

  v30 = a8;
  memset_0(DestinationSid, 0, 0x44uLL);
  v31 = a4;
  v26 = 0;
  TokenInformation = 0;
  v28 = 0LL;
  Handle = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v12 = CempRpcQueryClientInformation(ClientBinding, DestinationSid, &TokenInformation, 0LL, (__int64)&Handle);
  v13 = Handle;
  v14 = v12;
  if ( v12 < 0 )
  {
    if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 8LL) )
    {
      v26 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v21,
        byte_1800CFB1A,
        v22,
        v23,
        (__int64)&v26);
    }
  }
  else
  {
    v14 = HamSrvConnect(
            (__int64)RmSvcGlobals + 2360,
            v26,
            DestinationSid,
            Handle,
            TokenInformation,
            0,
            a3,
            v24,
            v25,
            &v31,
            &v28);
    if ( v14 >= 0 )
    {
      CurrentProcessId = GetCurrentProcessId();
      v18 = v28;
      v19 = 0LL;
      if ( v26 == CurrentProcessId )
        v19 = v28;
      *v30 = v19;
      v15 = 0LL;
      v20 = v32;
      v14 = 0;
      *a2 = v18;
      *a5 = v20;
      *a6 = DWORD2(v32);
      *a7 = v33;
    }
    else
    {
      v15 = v28;
    }
    if ( v15 )
      HamSrvDisconnect(v15);
  }
  if ( v13 )
    NtClose(v13);
  return (unsigned int)v14;
}
