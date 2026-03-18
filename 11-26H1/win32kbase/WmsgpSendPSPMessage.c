/*
 * XREFs of WmsgpSendPSPMessage @ 0x1402D2BA0
 * Callers:
 *     SendWinlogonPowerMessageWorker @ 0x1401C0344 (SendWinlogonPowerMessageWorker.c)
 * Callees:
 *     ClientI_WMsgkSendPSPMessage @ 0x1401834D8 (ClientI_WMsgkSendPSPMessage.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

RPC_STATUS __fastcall WmsgpSendPSPMessage(__int64 a1, int a2, __int128 *a3, RPC_STATUS *a4)
{
  __int128 v7; // xmm6
  RPC_STATUS result; // eax
  NTSTATUS v9; // eax
  struct _KEVENT Event; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v11; // [rsp+50h] [rbp-B8h] BYREF
  _RPC_ASYNC_STATE pAsync; // [rsp+60h] [rbp-A8h] BYREF

  v7 = *a3;
  memset(&pAsync, 0, sizeof(pAsync));
  memset(&Event, 0, sizeof(Event));
  result = RpcAsyncInitializeHandle(&pAsync, 0x58u);
  if ( !result )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    pAsync.UserInfo = 0LL;
    pAsync.NotificationType = RpcNotificationTypeEvent;
    pAsync.u.Event = &Event;
    v11 = v7;
    ClientI_WMsgkSendPSPMessage((__int64)&pAsync, a1, a2, &v11);
    if ( KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL) )
    {
      if ( !RpcAsyncCancelCall(&pAsync, 1) )
      {
        v9 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        RtlNtStatusToDosError(v9);
      }
    }
    result = RpcAsyncCompleteCall(&pAsync, 0LL);
    *a4 = result;
  }
  return result;
}
