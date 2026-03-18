/*
 * XREFs of PopNotifyConsoleUserPresent @ 0x140A3DB40
 * Callers:
 *     PopUserPresentSetWorker @ 0x1404CF520 (PopUserPresentSetWorker.c)
 *     PopSetSystemAwayMode @ 0x1407D1390 (PopSetSystemAwayMode.c)
 *     NtSetThreadExecutionState @ 0x1407D2150 (NtSetThreadExecutionState.c)
 *     PopSessionWinlogonNotification @ 0x140A3B184 (PopSessionWinlogonNotification.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     RtlGetActiveConsoleId @ 0x140450F30 (RtlGetActiveConsoleId.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x140723FD0 (ZwPowerInformation.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     TtmNotifyConsoleUserPresent @ 0x140A3C5F8 (TtmNotifyConsoleUserPresent.c)
 *     PopDiagTraceNotifyConsoleUserPresent @ 0x140A3DDDC (PopDiagTraceNotifyConsoleUserPresent.c)
 *     TtmIsEnabled @ 0x140A3EE84 (TtmIsEnabled.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x140A3F7F4 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PopDiagTraceWin32kCalloutStart @ 0x140A3F92C (PopDiagTraceWin32kCalloutStart.c)
 *     PopIsStateTransitionBlockingThread @ 0x140C05B3C (PopIsStateTransitionBlockingThread.c)
 */

__int64 __fastcall PopNotifyConsoleUserPresent(__int64 a1, unsigned int a2, __int64 a3)
{
  char v4; // r15
  unsigned int ActiveConsoleId; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  char IsStateTransitionBlockingThread; // bl
  int v9; // r9d
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // r14
  int v13; // ebx
  char v14; // di
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v18; // [rsp+3Ch] [rbp-C4h]
  __int64 OutputBuffer; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  __int128 *v22; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v24; // [rsp+70h] [rbp-90h]
  __int128 v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-70h]
  int InputBuffer; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-58h]
  char v29; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  int *v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  int *v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]

  LOBYTE(v18) = 0;
  v17 = 0;
  v4 = a1;
  LODWORD(v26) = 0;
  ActiveConsoleId = -1;
  v23 = 0LL;
  v16 = -1;
  v24 = 0LL;
  v25 = 0LL;
  if ( LOBYTE(PsAltSystemCallRegistrationLock.TrapFrame) )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    v16 = ActiveConsoleId;
    if ( ActiveConsoleId == -1 )
    {
      v14 = 2;
    }
    else
    {
      if ( (unsigned __int8)TtmIsEnabled(a1, v6, a3) )
      {
        TtmNotifyConsoleUserPresent(v16, a2, v7);
      }
      else
      {
        BYTE4(v24) = 0;
        LOBYTE(v17) = v4;
        v18 = a2;
        LODWORD(v24) = 1;
        *(_QWORD *)&v25 = &v17;
        DWORD2(v25) = 0;
        DWORD2(v24) = 8;
        v26 = 0LL;
        memset_0(&InputBuffer, 0, 0x60uLL);
        OutputBuffer = 0LL;
        IsStateTransitionBlockingThread = PopIsStateTransitionBlockingThread();
        LOBYTE(v9) = 1;
        PopDiagTraceWin32kCalloutStart(5, (unsigned int)&v23, 1, v9, (__int64)&v16);
        if ( IsStateTransitionBlockingThread )
        {
          v10 = OutputBuffer;
        }
        else
        {
          InputBuffer = 21;
          if ( ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, &OutputBuffer, 8u) < 0
            || (v10 = OutputBuffer) == 0 )
          {
            v10 = 0LL;
            OutputBuffer = 0LL;
          }
        }
        v11 = PopInvokeWin32CalloutWithWatchdog(5, (unsigned int)&v23, 1, (unsigned int)&v16, v10);
        v12 = OutputBuffer;
        v13 = v11;
        if ( OutputBuffer )
        {
          memset_0(&InputBuffer, 0, 0x60uLL);
          InputBuffer = 21;
          v28 = v12;
          v29 = 1;
          ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
        }
        v22 = &v23;
        v21 = 0;
        v20 = v13;
        if ( byte_140E67628
          && EtwEventEnabled(
               *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
               &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END) )
        {
          UserData.Ptr = (ULONGLONG)&v22;
          *(_QWORD *)&UserData.Size = 8LL;
          v31 = &v20;
          v32 = 4LL;
          v33 = &v21;
          v34 = 4LL;
          EtwWrite(
            *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
            &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END,
            0LL,
            3u,
            &UserData);
        }
      }
      ActiveConsoleId = v16;
      v14 = 0;
    }
  }
  else
  {
    v14 = 1;
  }
  LOBYTE(a3) = v4;
  LOBYTE(a1) = v14;
  return PopDiagTraceNotifyConsoleUserPresent(a1, ActiveConsoleId, a3, a2);
}
