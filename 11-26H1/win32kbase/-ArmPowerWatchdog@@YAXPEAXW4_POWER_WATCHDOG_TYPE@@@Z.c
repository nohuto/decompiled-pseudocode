/*
 * XREFs of ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1401C1404
 * Callers:
 *     QueuePowerRequest @ 0x140111D40 (QueuePowerRequest.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1401D6660 (PowerOnMonitor.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140113150 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?GetPowerWatchdogTimeoutMsec@@YAKW4_POWER_WATCHDOG_TYPE@@@Z @ 0x14015EE60 (-GetPowerWatchdogTimeoutMsec@@YAKW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall ArmPowerWatchdog(__int64 a1, int a2)
{
  __int64 v2; // rdi
  int v4; // edx
  int v5; // r8d
  __int64 v6; // rcx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 OutputBufferLength; // [rsp+20h] [rbp-19h]
  _QWORD InputBuffer[12]; // [rsp+30h] [rbp-9h] BYREF

  if ( a1 )
  {
    v2 = a2;
    memset(InputBuffer, 0, sizeof(InputBuffer));
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = a1;
    LODWORD(InputBuffer[2]) = GetPowerWatchdogTimeoutMsec(v2, v4, v5);
    HIDWORD(InputBuffer[2]) = W32GetCurrentWin32kSessionId(v6);
    LODWORD(InputBuffer[3]) = 412;
    InputBuffer[4] = v2;
    if ( (_DWORD)v2 == 16 )
    {
      UserSessionState = W32GetUserSessionState(v8, v7, v9);
      BYTE1(InputBuffer[8]) = 1;
      InputBuffer[5] = UserSessionState + 536;
      InputBuffer[6] = *(_QWORD *)W32GetUserSessionState(v12, v11, v13);
      v16 = W32GetUserSessionState(InputBuffer[6], v14, v15);
      BYTE3(InputBuffer[8]) = 1;
      InputBuffer[7] = v16 + 488;
    }
    else
    {
      InputBuffer[5] = KeGetCurrentThread();
      InputBuffer[6] = 0LL;
      InputBuffer[7] = 0LL;
    }
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      LODWORD(OutputBufferLength) = v2;
      McTemplateK0pq_EtwWriteTransfer(v17, &StartPowerWatchdog, v18, a1, OutputBufferLength);
    }
  }
}
