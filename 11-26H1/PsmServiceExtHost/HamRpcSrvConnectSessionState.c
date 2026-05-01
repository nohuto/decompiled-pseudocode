/*
 * XREFs of HamRpcSrvConnectSessionState @ 0x180064EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002FF30 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180030D78 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 *     CempRpcQueryClientInformation @ 0x1800318A4 (CempRpcQueryClientInformation.c)
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180040958 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 */

__int64 __fastcall HamRpcSrvConnectSessionState(void *a1, struct _HAM_CLIENT_CONTEXT **a2)
{
  int v3; // ebx
  struct _HAM_CLIENT_CONTEXT *v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // [rsp+38h] [rbp-38h]
  __int64 v10; // [rsp+40h] [rbp-30h]
  HANDLE Handle; // [rsp+60h] [rbp-10h] BYREF
  struct _HAM_CLIENT_CONTEXT *v12; // [rsp+68h] [rbp-8h] BYREF
  int TokenInformation; // [rsp+90h] [rbp+20h] BYREF
  unsigned int v14; // [rsp+98h] [rbp+28h] BYREF

  v14 = 0;
  TokenInformation = 0;
  v12 = 0LL;
  Handle = 0LL;
  v3 = CempRpcQueryClientInformation(a1, 0LL, &TokenInformation, &v14, 0LL, &Handle);
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
    {
      v14 = v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v6,
        byte_1800CFB50,
        v7,
        v8,
        (__int64)&v14);
    }
  }
  else
  {
    v3 = HamSrvConnect((__int64)RmSvcGlobals + 2360, v14, 0LL, Handle, TokenInformation, 5u, 0, v9, v10, 0LL, &v12);
    if ( v3 >= 0 )
    {
      v4 = 0LL;
      *a2 = v12;
      v3 = 0;
    }
    else
    {
      v4 = v12;
    }
    if ( v4 )
      HamSrvDisconnect(v4);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}
