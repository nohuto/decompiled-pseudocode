/*
 * XREFs of PopControlMonitor @ 0x140A39C20
 * Callers:
 *     PopScreenOn @ 0x1407DB930 (PopScreenOn.c)
 *     PopScreenOff @ 0x140A387B4 (PopScreenOff.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x140723FD0 (ZwPowerInformation.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     TtmSessionMonitorControl @ 0x140A3A808 (TtmSessionMonitorControl.c)
 *     TtmIsEnabled @ 0x140A3EE84 (TtmIsEnabled.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x140A3F7F4 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PopDiagTraceWin32kCalloutStart @ 0x140A3F92C (PopDiagTraceWin32kCalloutStart.c)
 *     PopIsStateTransitionBlockingThread @ 0x140C05B3C (PopIsStateTransitionBlockingThread.c)
 */

__int64 __fastcall PopControlMonitor(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  char IsStateTransitionBlockingThread; // bl
  int v6; // r9d
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rdi
  unsigned int v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 OutputBuffer; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  __int128 *v15; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v17; // [rsp+68h] [rbp-98h]
  __int128 v18; // [rsp+78h] [rbp-88h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  int InputBuffer; // [rsp+90h] [rbp-70h] BYREF
  __int64 v21; // [rsp+98h] [rbp-68h]
  char v22; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  int *v24; // [rsp+100h] [rbp+0h]
  __int64 v25; // [rsp+108h] [rbp+8h]
  int *v26; // [rsp+110h] [rbp+10h]
  __int64 v27; // [rsp+118h] [rbp+18h]

  v11 = a2;
  DWORD1(v16) = 0;
  if ( (unsigned __int8)TtmIsEnabled(a1, a2, a3) )
  {
    return (unsigned int)TtmSessionMonitorControl(v11, a1[1], *a1);
  }
  else
  {
    v19 = 0LL;
    v17 = 0LL;
    LODWORD(v17) = 3;
    BYTE4(v17) = 0;
    DWORD2(v17) = 8;
    v16 = 0LL;
    v18 = (unsigned __int64)a1;
    memset_0(&InputBuffer, 0, 0x60uLL);
    OutputBuffer = 0LL;
    IsStateTransitionBlockingThread = PopIsStateTransitionBlockingThread();
    LOBYTE(v6) = 1;
    PopDiagTraceWin32kCalloutStart(5, (unsigned int)&v16, 1, v6, (__int64)&v11);
    if ( IsStateTransitionBlockingThread )
    {
      v7 = OutputBuffer;
    }
    else
    {
      InputBuffer = 21;
      if ( ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, &OutputBuffer, 8u) < 0
        || (v7 = OutputBuffer) == 0 )
      {
        v7 = 0LL;
        OutputBuffer = 0LL;
      }
    }
    v8 = PopInvokeWin32CalloutWithWatchdog(5, (unsigned int)&v16, 1, (unsigned int)&v11, v7);
    v9 = OutputBuffer;
    v4 = v8;
    if ( OutputBuffer )
    {
      memset_0(&InputBuffer, 0, 0x60uLL);
      InputBuffer = 21;
      v21 = v9;
      v22 = 1;
      ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
    }
    v15 = &v16;
    v14 = 0;
    v13 = v4;
    if ( byte_140E67628
      && EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END) )
    {
      UserData.Ptr = (ULONGLONG)&v15;
      *(_QWORD *)&UserData.Size = 8LL;
      v24 = (int *)&v13;
      v25 = 4LL;
      v26 = &v14;
      v27 = 4LL;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END,
        0LL,
        3u,
        &UserData);
    }
  }
  return v4;
}
