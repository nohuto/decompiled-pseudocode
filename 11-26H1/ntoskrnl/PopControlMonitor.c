/*
 * XREFs of PopControlMonitor @ 0x1409F5820
 * Callers:
 *     PopScreenOn @ 0x1407DFB4C (PopScreenOn.c)
 *     PopScreenOff @ 0x1409F4374 (PopScreenOff.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x140728BA0 (ZwPowerInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     TtmSessionMonitorControl @ 0x1409F6408 (TtmSessionMonitorControl.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x1409FB214 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PopDiagTraceWin32kCalloutStart @ 0x1409FB34C (PopDiagTraceWin32kCalloutStart.c)
 *     PopIsStateTransitionBlockingThread @ 0x140C0BD4C (PopIsStateTransitionBlockingThread.c)
 */

__int64 __fastcall PopControlMonitor(unsigned int *a1, unsigned int a2)
{
  unsigned int v3; // ebx
  char IsStateTransitionBlockingThread; // bl
  int v5; // r9d
  __int64 v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rdi
  unsigned int v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 OutputBuffer; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  __int128 *v14; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v15; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v16; // [rsp+68h] [rbp-98h]
  __int128 v17; // [rsp+78h] [rbp-88h]
  __int64 v18; // [rsp+88h] [rbp-78h]
  int InputBuffer; // [rsp+90h] [rbp-70h] BYREF
  __int64 v20; // [rsp+98h] [rbp-68h]
  char v21; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  int *v23; // [rsp+100h] [rbp+0h]
  __int64 v24; // [rsp+108h] [rbp+8h]
  int *v25; // [rsp+110h] [rbp+10h]
  __int64 v26; // [rsp+118h] [rbp+18h]

  v10 = a2;
  DWORD1(v15) = 0;
  if ( (unsigned __int8)TtmIsEnabled() )
  {
    return (unsigned int)TtmSessionMonitorControl(v10, a1[1], *a1);
  }
  else
  {
    v18 = 0LL;
    v16 = 0LL;
    LODWORD(v16) = 3;
    BYTE4(v16) = 0;
    DWORD2(v16) = 8;
    v15 = 0LL;
    v17 = (unsigned __int64)a1;
    memset_0(&InputBuffer, 0, 0x60uLL);
    OutputBuffer = 0LL;
    IsStateTransitionBlockingThread = PopIsStateTransitionBlockingThread();
    LOBYTE(v5) = 1;
    PopDiagTraceWin32kCalloutStart(5, (unsigned int)&v15, 1, v5, (__int64)&v10);
    if ( IsStateTransitionBlockingThread )
    {
      v6 = OutputBuffer;
    }
    else
    {
      InputBuffer = 21;
      if ( ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, &OutputBuffer, 8u) < 0
        || (v6 = OutputBuffer) == 0 )
      {
        v6 = 0LL;
        OutputBuffer = 0LL;
      }
    }
    v7 = PopInvokeWin32CalloutWithWatchdog(5, (unsigned int)&v15, 1, (unsigned int)&v10, v6);
    v8 = OutputBuffer;
    v3 = v7;
    if ( OutputBuffer )
    {
      memset_0(&InputBuffer, 0, 0x60uLL);
      InputBuffer = 21;
      v20 = v8;
      v21 = 1;
      ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
    }
    v14 = &v15;
    v13 = 0;
    v12 = v3;
    if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END) )
    {
      UserData.Ptr = (ULONGLONG)&v14;
      *(_QWORD *)&UserData.Size = 8LL;
      v23 = (int *)&v12;
      v24 = 4LL;
      v25 = &v13;
      v26 = 4LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END, 0LL, 3u, &UserData);
    }
  }
  return v3;
}
