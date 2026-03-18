/*
 * XREFs of PopPowerAggregatorNotifyCsStateExited @ 0x140A38E44
 * Callers:
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140A38CE0 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     PoBlockConsoleSwitchEx @ 0x140450E68 (PoBlockConsoleSwitchEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x140723FD0 (ZwPowerInformation.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopDispatchStateCallout @ 0x140A39B10 (PopDispatchStateCallout.c)
 *     TtmNotifyLowPowerStateExited @ 0x140A39E40 (TtmNotifyLowPowerStateExited.c)
 *     TtmIsEnabled @ 0x140A3EE84 (TtmIsEnabled.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x140A3F7F4 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PopDiagTraceWin32kCalloutStart @ 0x140A3F92C (PopDiagTraceWin32kCalloutStart.c)
 *     PopIsStateTransitionBlockingThread @ 0x140C05B3C (PopIsStateTransitionBlockingThread.c)
 */

__int64 PopPowerAggregatorNotifyCsStateExited()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  char IsStateTransitionBlockingThread; // bl
  int v4; // r9d
  __int64 v5; // rax
  unsigned int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v11; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  __int64 OutputBuffer; // [rsp+50h] [rbp-B8h] BYREF
  __int128 OutputBuffer_8; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v15; // [rsp+68h] [rbp-A0h]
  __int128 v16; // [rsp+78h] [rbp-90h]
  __int64 v17; // [rsp+88h] [rbp-80h]
  __int128 *p_OutputBuffer_8; // [rsp+90h] [rbp-78h] BYREF
  int InputBuffer; // [rsp+98h] [rbp-70h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-68h]
  char v21; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v23; // [rsp+108h] [rbp+0h]
  __int64 v24; // [rsp+118h] [rbp+10h]
  __int64 v25; // [rsp+120h] [rbp+18h]

  v23 = 0LL;
  DWORD2(v23) = 1;
  LODWORD(v17) = 0;
  OutputBuffer_8 = 0LL;
  v24 = 0LL;
  v15 = 0LL;
  v11 = 0;
  v16 = 0LL;
  UserData = 0LL;
  PoBlockConsoleSwitchEx((__int64)&UserData, &v11, 0LL);
  v10 = v11;
  if ( (unsigned __int8)TtmIsEnabled(v1, v0, v2) )
  {
    TtmNotifyLowPowerStateExited(v10);
  }
  else
  {
    v17 = 0LL;
    v15 = 0LL;
    LODWORD(v15) = 5;
    OutputBuffer_8 = 0LL;
    BYTE4(v15) = 0;
    DWORD2(v15) = 0;
    v16 = 0uLL;
    memset_0(&InputBuffer, 0, 0x60uLL);
    OutputBuffer = 0LL;
    IsStateTransitionBlockingThread = PopIsStateTransitionBlockingThread();
    LOBYTE(v4) = 1;
    PopDiagTraceWin32kCalloutStart(5, (unsigned int)&OutputBuffer_8, 1, v4, (__int64)&v10);
    if ( IsStateTransitionBlockingThread )
    {
      v5 = OutputBuffer;
    }
    else
    {
      InputBuffer = 21;
      if ( ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, &OutputBuffer, 8u) < 0
        || (v5 = OutputBuffer) == 0 )
      {
        v5 = 0LL;
        OutputBuffer = 0LL;
      }
    }
    v6 = PopInvokeWin32CalloutWithWatchdog(5, (unsigned int)&OutputBuffer_8, 1, (unsigned int)&v10, v5);
    v7 = OutputBuffer;
    v8 = v6;
    if ( OutputBuffer )
    {
      memset_0(&InputBuffer, 0, 0x60uLL);
      InputBuffer = 21;
      v20 = v7;
      v21 = 1;
      ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
    }
    p_OutputBuffer_8 = &OutputBuffer_8;
    LODWORD(v12) = 0;
    v11 = v8;
    if ( byte_140E67628
      && EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END) )
    {
      UserData.Ptr = (ULONGLONG)&p_OutputBuffer_8;
      *(_QWORD *)&UserData.Size = 8LL;
      *(_QWORD *)&v23 = &v11;
      *((_QWORD *)&v23 + 1) = 4LL;
      v24 = (__int64)&v12;
      v25 = 4LL;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END,
        0LL,
        3u,
        &UserData);
    }
  }
  v23 = 0LL;
  LODWORD(v12) = v10;
  UserData = 0LL;
  DWORD2(v23) = 1;
  v24 = 7LL;
  return PopDispatchStateCallout(&UserData, &v12);
}
