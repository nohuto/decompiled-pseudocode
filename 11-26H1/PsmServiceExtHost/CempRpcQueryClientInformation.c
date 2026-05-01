/*
 * XREFs of CempRpcQueryClientInformation @ 0x1800318A4
 * Callers:
 *     HamRpcSrvConnectServicing @ 0x18002FE00 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectExtendedExecution @ 0x180030000 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvConnect @ 0x180030F90 (HamRpcSrvConnect.c)
 *     RmgrSrv_RegisterWithServer @ 0x180031310 (RmgrSrv_RegisterWithServer.c)
 *     CrmRpcSrvRegister @ 0x180031660 (CrmRpcSrvRegister.c)
 *     HamRpcSrvPlmNotifyNewSession @ 0x1800494D0 (HamRpcSrvPlmNotifyNewSession.c)
 *     HamRpcSrvConnectSessionState @ 0x180064EB0 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x180065710 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectDebugging @ 0x1800658A0 (HamRpcSrvConnectDebugging.c)
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x180074A70 (RmgrSrv_RmSetMemoryUsageLimit.c)
 *     HamRpcSrvConnectFullTrust @ 0x18007C5F0 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     CempGetUserSidFromToken @ 0x180030940 (CempGetUserSidFromToken.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CempRpcQueryClientInformation(
        RPC_BINDING_HANDLE ClientBinding,
        PSID DestinationSid,
        PVOID TokenInformation,
        _DWORD *a4,
        __int64 a5,
        void **a6)
{
  HANDLE CurrentThread; // rax
  NTSTATUS UserSidFromToken; // ebx
  void *TokenHandle; // [rsp+30h] [rbp-89h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-81h] BYREF
  _DWORD RpcCallAttributes[28]; // [rsp+40h] [rbp-79h] BYREF

  ReturnLength = 0;
  memset_0(RpcCallAttributes, 0, sizeof(RpcCallAttributes));
  TokenHandle = 0LL;
  if ( RpcImpersonateClient(ClientBinding) )
    goto LABEL_17;
  CurrentThread = GetCurrentThread();
  UserSidFromToken = NtOpenThreadToken(CurrentThread, 8u, 1u, &TokenHandle);
  if ( UserSidFromToken < 0
    || DestinationSid && (UserSidFromToken = CempGetUserSidFromToken(TokenHandle, DestinationSid), UserSidFromToken < 0)
    || TokenInformation
    && (UserSidFromToken = NtQueryInformationToken(TokenHandle, TokenSessionId, TokenInformation, 4u, &ReturnLength),
        UserSidFromToken < 0)
    || a5 && (UserSidFromToken = RtlQueryTokenHostIdAsUlong64(TokenHandle, a5), UserSidFromToken < 0) )
  {
    RpcRevertToSelf();
    goto LABEL_14;
  }
  if ( RpcRevertToSelf() )
    goto LABEL_17;
  if ( a4 )
  {
    RpcCallAttributes[0] = 2;
    RpcCallAttributes[1] = 16;
    if ( !RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes) )
    {
      *a4 = RpcCallAttributes[16];
      goto LABEL_11;
    }
LABEL_17:
    UserSidFromToken = -1073741823;
    goto LABEL_14;
  }
LABEL_11:
  if ( a6 )
  {
    *a6 = TokenHandle;
    TokenHandle = 0LL;
  }
  UserSidFromToken = 0;
LABEL_14:
  if ( TokenHandle )
    CloseHandle(TokenHandle);
  return (unsigned int)UserSidFromToken;
}
