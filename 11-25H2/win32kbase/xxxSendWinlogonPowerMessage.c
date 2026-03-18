/*
 * XREFs of xxxSendWinlogonPowerMessage @ 0x14016C260
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x14007FE94 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EA660 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledDeviceUsageNoInline @ 0x1401B6B5C (Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledDeviceUsageNoInline.c)
 *     SendWinlogonPowerMessageWorker @ 0x1401B6BB0 (SendWinlogonPowerMessageWorker.c)
 *     WmsgpSendPSPMessage @ 0x1402C97EC (WmsgpSendPSPMessage.c)
 */

__int64 __fastcall xxxSendWinlogonPowerMessage(char a1, unsigned int a2, __int128 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 v13; // xmm6
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  __int64 v17; // rdx
  __int128 v18; // xmm6
  __int64 v19; // rax
  _DWORD v20[4]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v21; // [rsp+30h] [rbp-20h] BYREF
  char v22; // [rsp+78h] [rbp+28h] BYREF

  if ( (unsigned int)Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !a1 )
      return SendWinlogonPowerMessageWorker(a2, a3);
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v22, 1);
    v8 = SendWinlogonPowerMessageWorker(a2, a3);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v22, v9);
  }
  else
  {
    v20[0] = 0;
    if ( !*(_QWORD *)(W32GetUserSessionState(v7, v6) + 69120) )
      return 0LL;
    if ( a1 )
    {
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v22, 1);
      v13 = *a3;
      UserSessionState = W32GetUserSessionState(v15, v14);
      v21 = v13;
      v8 = WmsgpSendPSPMessage(*(_QWORD *)(UserSessionState + 69120), a2, &v21, v20);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v22, v17);
    }
    else
    {
      v18 = *a3;
      v19 = W32GetUserSessionState(v12, v11);
      v21 = v18;
      v8 = WmsgpSendPSPMessage(*(_QWORD *)(v19 + 69120), a2, &v21, v20);
    }
    if ( v8 >= 0 )
      return (unsigned int)v20[0];
  }
  return (unsigned int)v8;
}
