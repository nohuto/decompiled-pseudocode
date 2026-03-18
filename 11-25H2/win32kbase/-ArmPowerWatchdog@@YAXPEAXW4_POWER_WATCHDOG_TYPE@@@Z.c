/*
 * XREFs of ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1400EA3AC
 * Callers:
 *     PowerOnMonitor @ 0x14007FA80 (PowerOnMonitor.c)
 *     QueuePowerRequest @ 0x1400E9340 (QueuePowerRequest.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1400E0D04 (McTemplateK0pq_EtwWriteTransfer.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall ArmPowerWatchdog(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rax
  unsigned int i; // ecx
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 UserSessionState; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-19h]
  _QWORD InputBuffer[12]; // [rsp+30h] [rbp-9h] BYREF

  if ( a1 )
  {
    v2 = a2;
    memset(InputBuffer, 0, sizeof(InputBuffer));
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = a1;
    v6 = (_DWORD *)(W32GetUserSessionState(v5, v4) + 368);
    for ( i = 0; i < 5; ++i )
    {
      if ( *v6 == (_DWORD)v2 )
      {
        v8 = v6[4];
        goto LABEL_6;
      }
      v6 += 6;
    }
    v8 = 30000;
LABEL_6:
    LODWORD(InputBuffer[2]) = v8;
    HIDWORD(InputBuffer[2]) = W32GetCurrentWin32kSessionId();
    LODWORD(InputBuffer[3]) = 412;
    InputBuffer[4] = v2;
    if ( (_DWORD)v2 == 16 )
    {
      UserSessionState = W32GetUserSessionState(v10, v9);
      BYTE1(InputBuffer[8]) = 1;
      InputBuffer[5] = UserSessionState + 536;
      InputBuffer[6] = *(_QWORD *)W32GetUserSessionState(v15, v14);
      v17 = W32GetUserSessionState(InputBuffer[6], v16);
      BYTE3(InputBuffer[8]) = 1;
      InputBuffer[7] = v17 + 488;
    }
    else
    {
      InputBuffer[6] = 0LL;
      InputBuffer[7] = 0LL;
      InputBuffer[5] = KeGetCurrentThread();
    }
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      LODWORD(v18) = v2;
      McTemplateK0pq_EtwWriteTransfer(v11, &StartPowerWatchdog, v12, a1, v18);
    }
  }
}
