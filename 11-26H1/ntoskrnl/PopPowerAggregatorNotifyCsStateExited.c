/*
 * XREFs of PopPowerAggregatorNotifyCsStateExited @ 0x1409F4A04
 * Callers:
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x1409F48A0 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     PoBlockConsoleSwitchEx @ 0x140448F98 (PoBlockConsoleSwitchEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x140728BA0 (ZwPowerInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopDispatchStateCallout @ 0x1409F5718 (PopDispatchStateCallout.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409F5A40 (TtmNotifyLowPowerStateExited.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x1409FB214 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PopDiagTraceWin32kCalloutStart @ 0x1409FB34C (PopDiagTraceWin32kCalloutStart.c)
 *     PopIsStateTransitionBlockingThread @ 0x140C0BD4C (PopIsStateTransitionBlockingThread.c)
 */

__int64 PopPowerAggregatorNotifyCsStateExited()
{
  char IsStateTransitionBlockingThread; // bl
  int v1; // r9d
  __int64 v2; // rax
  ULONG v3; // eax
  __int64 v4; // rdi
  ULONG v5; // ebx
  ULONG v7; // [rsp+38h] [rbp-D0h] BYREF
  ULONG v8; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  __int64 OutputBuffer; // [rsp+50h] [rbp-B8h] BYREF
  __int128 OutputBuffer_8; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v12; // [rsp+68h] [rbp-A0h]
  __int128 v13; // [rsp+78h] [rbp-90h]
  __int64 v14; // [rsp+88h] [rbp-80h]
  __int128 *p_OutputBuffer_8; // [rsp+90h] [rbp-78h] BYREF
  int InputBuffer; // [rsp+98h] [rbp-70h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-68h]
  char v18; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v20; // [rsp+108h] [rbp+0h]
  __int64 v21; // [rsp+118h] [rbp+10h]
  __int64 v22; // [rsp+120h] [rbp+18h]

  v20 = 0LL;
  DWORD2(v20) = 1;
  LODWORD(v14) = 0;
  OutputBuffer_8 = 0LL;
  v21 = 0LL;
  v12 = 0LL;
  v8 = 0;
  v13 = 0LL;
  UserData = 0LL;
  PoBlockConsoleSwitchEx((__int64)&UserData, &v8, 0LL);
  v7 = v8;
  if ( (unsigned __int8)TtmIsEnabled() )
  {
    TtmNotifyLowPowerStateExited(v7);
  }
  else
  {
    v14 = 0LL;
    v12 = 0LL;
    LODWORD(v12) = 5;
    OutputBuffer_8 = 0LL;
    BYTE4(v12) = 0;
    DWORD2(v12) = 0;
    v13 = 0uLL;
    memset_0(&InputBuffer, 0, 0x60uLL);
    OutputBuffer = 0LL;
    IsStateTransitionBlockingThread = PopIsStateTransitionBlockingThread();
    LOBYTE(v1) = 1;
    PopDiagTraceWin32kCalloutStart(5, (unsigned int)&OutputBuffer_8, 1, v1, (__int64)&v7);
    if ( IsStateTransitionBlockingThread )
    {
      v2 = OutputBuffer;
    }
    else
    {
      InputBuffer = 21;
      if ( ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, &OutputBuffer, 8u) < 0
        || (v2 = OutputBuffer) == 0 )
      {
        v2 = 0LL;
        OutputBuffer = 0LL;
      }
    }
    v3 = PopInvokeWin32CalloutWithWatchdog(5, (unsigned int)&OutputBuffer_8, 1, (unsigned int)&v7, v2);
    v4 = OutputBuffer;
    v5 = v3;
    if ( OutputBuffer )
    {
      memset_0(&InputBuffer, 0, 0x60uLL);
      InputBuffer = 21;
      v17 = v4;
      v18 = 1;
      ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
    }
    p_OutputBuffer_8 = &OutputBuffer_8;
    LODWORD(v9) = 0;
    v8 = v5;
    if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END) )
    {
      UserData.Ptr = (ULONGLONG)&p_OutputBuffer_8;
      *(_QWORD *)&UserData.Size = 8LL;
      *(_QWORD *)&v20 = &v8;
      *((_QWORD *)&v20 + 1) = 4LL;
      v21 = (__int64)&v9;
      v22 = 4LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END, 0LL, 3u, &UserData);
    }
  }
  v20 = 0LL;
  LODWORD(v9) = v7;
  UserData = 0LL;
  DWORD2(v20) = 1;
  v21 = 7LL;
  return PopDispatchStateCallout(&UserData, &v9);
}
