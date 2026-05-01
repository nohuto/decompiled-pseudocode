/*
 * XREFs of HamRpcSrvConnectDebugging @ 0x1800658A0
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

__int64 __fastcall HamRpcSrvConnectDebugging(
        RPC_BINDING_HANDLE ClientBinding,
        struct _HAM_CLIENT_CONTEXT **a2,
        _QWORD *a3)
{
  int v6; // ebx
  struct _HAM_CLIENT_CONTEXT *v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+38h] [rbp-81h]
  __int64 v13; // [rsp+40h] [rbp-79h]
  unsigned int v14; // [rsp+60h] [rbp-59h] BYREF
  int TokenInformation; // [rsp+64h] [rbp-55h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-51h] BYREF
  struct _HAM_CLIENT_CONTEXT *v17; // [rsp+70h] [rbp-49h] BYREF
  __int128 v18; // [rsp+78h] [rbp-41h] BYREF
  __int128 v19; // [rsp+88h] [rbp-31h]
  _BYTE DestinationSid[80]; // [rsp+A0h] [rbp-19h] BYREF

  memset_0(DestinationSid, 0, 0x44uLL);
  v14 = 0;
  TokenInformation = 0;
  v17 = 0LL;
  Handle = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v6 = CempRpcQueryClientInformation(ClientBinding, DestinationSid, &TokenInformation, &v14, 0LL, &Handle);
  if ( v6 < 0 )
  {
    if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
    {
      v14 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v9,
        byte_1800CFC35,
        v10,
        v11,
        (__int64)&v14);
    }
  }
  else
  {
    v6 = HamSrvConnect(
           (__int64)RmSvcGlobals + 2360,
           v14,
           DestinationSid,
           Handle,
           TokenInformation,
           1u,
           0,
           v12,
           v13,
           (unsigned int **)&v18,
           &v17);
    if ( v6 >= 0 )
    {
      v7 = 0LL;
      *a2 = v17;
      v6 = 0;
      *a3 = *((_QWORD *)&v19 + 1);
    }
    else
    {
      v7 = v17;
    }
    if ( v7 )
      HamSrvDisconnect(v7);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v6;
}
