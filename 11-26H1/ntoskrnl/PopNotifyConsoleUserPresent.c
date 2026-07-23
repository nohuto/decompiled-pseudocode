/*
 * XREFs of PopNotifyConsoleUserPresent @ 0x1409F9560
 * Callers:
 *     PopUserPresentSetWorker @ 0x1404C8F50 (PopUserPresentSetWorker.c)
 *     PopSetSystemAwayMode @ 0x1407D4430 (PopSetSystemAwayMode.c)
 *     NtSetThreadExecutionState @ 0x1407D51F0 (NtSetThreadExecutionState.c)
 *     PopSessionWinlogonNotification @ 0x140B776DC (PopSessionWinlogonNotification.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     RtlGetActiveConsoleId @ 0x140449060 (RtlGetActiveConsoleId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x140728BA0 (ZwPowerInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409F8018 (TtmNotifyConsoleUserPresent.c)
 *     PopDiagTraceNotifyConsoleUserPresent @ 0x1409F97FC (PopDiagTraceNotifyConsoleUserPresent.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x1409FB214 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PopDiagTraceWin32kCalloutStart @ 0x1409FB34C (PopDiagTraceWin32kCalloutStart.c)
 *     PopIsStateTransitionBlockingThread @ 0x140C0BD4C (PopIsStateTransitionBlockingThread.c)
 */

__int64 __fastcall PopNotifyConsoleUserPresent(__int64 a1, unsigned int a2, __int64 a3)
{
  char v4; // r15
  ULONG ActiveConsoleId; // eax
  char IsStateTransitionBlockingThread; // bl
  int v7; // r9d
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // r14
  int v11; // ebx
  char v12; // di
  ULONG v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v16; // [rsp+3Ch] [rbp-C4h]
  __int64 OutputBuffer; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  __int128 *v20; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+70h] [rbp-90h]
  __int128 v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  int InputBuffer; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-58h]
  char v27; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  int *v29; // [rsp+110h] [rbp+10h]
  __int64 v30; // [rsp+118h] [rbp+18h]
  int *v31; // [rsp+120h] [rbp+20h]
  __int64 v32; // [rsp+128h] [rbp+28h]

  LOBYTE(v16) = 0;
  v15 = 0;
  v4 = a1;
  LODWORD(v24) = 0;
  ActiveConsoleId = -1;
  v21 = 0LL;
  v14 = -1;
  v22 = 0LL;
  v23 = 0LL;
  if ( BYTE1(PsAltSystemCallRegistrationLock.Timer.DueTime.LowPart) )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    v14 = ActiveConsoleId;
    if ( ActiveConsoleId == -1 )
    {
      v12 = 2;
    }
    else
    {
      if ( (unsigned __int8)TtmIsEnabled() )
      {
        TtmNotifyConsoleUserPresent(v14, a2);
      }
      else
      {
        BYTE4(v22) = 0;
        LOBYTE(v15) = v4;
        v16 = a2;
        LODWORD(v22) = 1;
        *(_QWORD *)&v23 = &v15;
        DWORD2(v23) = 0;
        DWORD2(v22) = 8;
        v24 = 0LL;
        memset_0(&InputBuffer, 0, 0x60uLL);
        OutputBuffer = 0LL;
        IsStateTransitionBlockingThread = PopIsStateTransitionBlockingThread();
        LOBYTE(v7) = 1;
        PopDiagTraceWin32kCalloutStart(5, (unsigned int)&v21, 1, v7, (__int64)&v14);
        if ( IsStateTransitionBlockingThread )
        {
          v8 = OutputBuffer;
        }
        else
        {
          InputBuffer = 21;
          if ( ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, &OutputBuffer, 8u) < 0
            || (v8 = OutputBuffer) == 0 )
          {
            v8 = 0LL;
            OutputBuffer = 0LL;
          }
        }
        v9 = PopInvokeWin32CalloutWithWatchdog(5, (unsigned int)&v21, 1, (unsigned int)&v14, v8);
        v10 = OutputBuffer;
        v11 = v9;
        if ( OutputBuffer )
        {
          memset_0(&InputBuffer, 0, 0x60uLL);
          InputBuffer = 21;
          v26 = v10;
          v27 = 1;
          ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
        }
        v20 = &v21;
        v19 = 0;
        v18 = v11;
        if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END) )
        {
          UserData.Ptr = (ULONGLONG)&v20;
          *(_QWORD *)&UserData.Size = 8LL;
          v29 = &v18;
          v30 = 4LL;
          v31 = &v19;
          v32 = 4LL;
          EtwWrite(PopDiagHandle, &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END, 0LL, 3u, &UserData);
        }
      }
      ActiveConsoleId = v14;
      v12 = 0;
    }
  }
  else
  {
    v12 = 1;
  }
  LOBYTE(a3) = v4;
  LOBYTE(a1) = v12;
  return PopDiagTraceNotifyConsoleUserPresent(a1, ActiveConsoleId, a3, a2);
}
