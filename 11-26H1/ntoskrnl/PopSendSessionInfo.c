/*
 * XREFs of PopSendSessionInfo @ 0x140B48360
 * Callers:
 *     PopReleaseAdaptiveLock @ 0x1409F9104 (PopReleaseAdaptiveLock.c)
 *     PopAdaptivePowerSettingCallback @ 0x140ABE290 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x140728BA0 (ZwPowerInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x1409FB214 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PopDiagTraceWin32kCalloutStart @ 0x1409FB34C (PopDiagTraceWin32kCalloutStart.c)
 *     PopIsStateTransitionBlockingThread @ 0x140C0BD4C (PopIsStateTransitionBlockingThread.c)
 */

char __fastcall PopSendSessionInfo(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 *v4; // rax
  char IsStateTransitionBlockingThread; // bl
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdi
  int v9; // ebx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 OutputBuffer; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
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

  v11 = a1;
  LOBYTE(v4) = 0;
  v16 = 0LL;
  LODWORD(v19) = 0;
  v17 = 0LL;
  v18 = 0LL;
  if ( BYTE1(PsAltSystemCallRegistrationLock.Timer.DueTime.LowPart) )
  {
    DWORD2(v17) = 20;
    *(_QWORD *)&v18 = a4;
    DWORD2(v18) = 0;
    v19 = 0LL;
    memset_0(&InputBuffer, 0, 0x60uLL);
    OutputBuffer = 0LL;
    IsStateTransitionBlockingThread = PopIsStateTransitionBlockingThread();
    PopDiagTraceWin32kCalloutStart(5, (__int64)&v16, 1u, 1, &v11);
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
    v7 = PopInvokeWin32CalloutWithWatchdog(5u, (__int64)&v16, 1u, &v11, v6);
    v8 = OutputBuffer;
    v9 = v7;
    if ( OutputBuffer )
    {
      memset_0(&InputBuffer, 0, 0x60uLL);
      InputBuffer = 21;
      v21 = v8;
      v22 = 1;
      ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
    }
    v4 = &v16;
    v15 = &v16;
    v14 = 0;
    v13 = v9;
    if ( PopDiagHandleRegistered )
    {
      LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END);
      if ( (_BYTE)v4 )
      {
        UserData.Ptr = (ULONGLONG)&v15;
        *(_QWORD *)&UserData.Size = 8LL;
        v24 = &v13;
        v25 = 4LL;
        v26 = &v14;
        v27 = 4LL;
        LOBYTE(v4) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END, 0LL, 3u, &UserData);
      }
    }
  }
  return (char)v4;
}
