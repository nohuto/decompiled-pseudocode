/*
 * XREFs of xxxSendWinlogonPowerMessage @ 0x1401D9BF0
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1400EA20C (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     SendWinlogonPowerMessageWorker @ 0x1401C0344 (SendWinlogonPowerMessageWorker.c)
 */

__int64 __fastcall xxxSendWinlogonPowerMessage(char a1, __int64 a2, __int128 *a3, __int64 a4)
{
  unsigned int v5; // edi
  int v6; // r8d
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // r8d
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v5 = a2;
  if ( !a1 )
    return SendWinlogonPowerMessageWorker(a2, a3, (int)a3);
  LOBYTE(a2) = 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v11, a2, (__int64)a3, a4);
  v7 = SendWinlogonPowerMessageWorker(v5, a3, v6);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v11, v8, v9);
  return v7;
}
