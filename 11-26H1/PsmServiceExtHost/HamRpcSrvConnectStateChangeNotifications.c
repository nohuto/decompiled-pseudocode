/*
 * XREFs of HamRpcSrvConnectStateChangeNotifications @ 0x180065710
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

__int64 __fastcall HamRpcSrvConnectStateChangeNotifications(
        RPC_BINDING_HANDLE ClientBinding,
        unsigned int *a2,
        struct _HAM_CLIENT_CONTEXT **a3,
        _QWORD *a4)
{
  int v8; // eax
  HANDLE v9; // rdi
  int v10; // ebx
  struct _HAM_CLIENT_CONTEXT *v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // [rsp+38h] [rbp-91h]
  __int64 v17; // [rsp+40h] [rbp-89h]
  unsigned int v18; // [rsp+60h] [rbp-69h] BYREF
  int TokenInformation; // [rsp+64h] [rbp-65h] BYREF
  struct _HAM_CLIENT_CONTEXT *v20; // [rsp+68h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-59h] BYREF
  unsigned int *v22; // [rsp+78h] [rbp-51h] BYREF
  __int128 v23; // [rsp+80h] [rbp-49h]
  __int64 v24; // [rsp+90h] [rbp-39h]
  _BYTE DestinationSid[80]; // [rsp+A0h] [rbp-29h] BYREF

  v18 = 0;
  memset_0(DestinationSid, 0, 0x44uLL);
  TokenInformation = 0;
  v20 = 0LL;
  Handle = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v22 = a2;
  v8 = CempRpcQueryClientInformation(ClientBinding, DestinationSid, &TokenInformation, &v18, 0LL, &Handle);
  v9 = Handle;
  v10 = v8;
  if ( v8 < 0 )
  {
    if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
    {
      v18 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v13,
        byte_1800CFB86,
        v14,
        v15,
        (__int64)&v18);
    }
  }
  else
  {
    v10 = HamSrvConnect(
            (__int64)RmSvcGlobals + 2360,
            v18,
            DestinationSid,
            Handle,
            TokenInformation,
            6u,
            0,
            v16,
            v17,
            &v22,
            &v20);
    if ( v10 >= 0 )
    {
      v11 = 0LL;
      *a3 = v20;
      v10 = 0;
      *a4 = v24;
    }
    else
    {
      v11 = v20;
    }
    if ( v11 )
      HamSrvDisconnect(v11);
  }
  if ( v9 )
    NtClose(v9);
  return (unsigned int)v10;
}
