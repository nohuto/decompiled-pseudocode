/*
 * XREFs of PopInvokeWin32Callout @ 0x140ABE89C
 * Callers:
 *     PopUserPresentSetWorker @ 0x1404C8F50 (PopUserPresentSetWorker.c)
 *     PopEventCalloutDispatch @ 0x1404E3D88 (PopEventCalloutDispatch.c)
 *     PoSessionBuiltinPanelState @ 0x140613E10 (PoSessionBuiltinPanelState.c)
 *     PoSessionEngagementUpdate @ 0x140613EB0 (PoSessionEngagementUpdate.c)
 *     PoSessionPowerControl @ 0x1407E259C (PoSessionPowerControl.c)
 *     PopDispatchStateCallout @ 0x1409F5718 (PopDispatchStateCallout.c)
 *     PopAdaptivePowerSettingCallback @ 0x140ABE290 (PopAdaptivePowerSettingCallback.c)
 *     PopLidSwitchChangeCallback @ 0x140ABE540 (PopLidSwitchChangeCallback.c)
 *     PopBroadcastSessionInfo @ 0x140ABE614 (PopBroadcastSessionInfo.c)
 *     PopPowerRequestCallbackDisplayRequired @ 0x140ABE670 (PopPowerRequestCallbackDisplayRequired.c)
 * Callees:
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     ZwPowerInformation @ 0x140728BA0 (ZwPowerInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x1409FB214 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PopDiagTraceWin32kCalloutStart @ 0x1409FB34C (PopDiagTraceWin32kCalloutStart.c)
 *     PsGetNextSession @ 0x140A837F0 (PsGetNextSession.c)
 *     PopDiagTraceWin32kCalloutEnd @ 0x140ABEBE4 (PopDiagTraceWin32kCalloutEnd.c)
 *     PopIsStateTransitionBlockingThread @ 0x140C0BD4C (PopIsStateTransitionBlockingThread.c)
 */

__int64 __fastcall PopInvokeWin32Callout(unsigned int a1, __int64 a2, int a3, int *a4)
{
  unsigned int v8; // edi
  char IsStateTransitionBlockingThread; // bl
  __int64 v10; // rax
  int *v11; // r9
  unsigned int v12; // r8d
  _QWORD *NextSession; // rbx
  __int64 v14; // r15
  __int64 v15; // rbx
  int InputBuffer; // [rsp+30h] [rbp-29h] BYREF
  __int64 v18; // [rsp+38h] [rbp-21h]
  char v19; // [rsp+88h] [rbp+2Fh]
  int SessionId; // [rsp+D0h] [rbp+77h] BYREF
  __int64 OutputBuffer; // [rsp+D8h] [rbp+7Fh] BYREF

  SessionId = 0;
  memset_0(&InputBuffer, 0, 0x60uLL);
  v8 = 0;
  OutputBuffer = 0LL;
  IsStateTransitionBlockingThread = PopIsStateTransitionBlockingThread();
  PopDiagTraceWin32kCalloutStart(a1, a2, a3, a4 != 0LL, a4);
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
  if ( !a3 )
  {
    v11 = 0LL;
    v12 = 0;
LABEL_12:
    v8 = PopInvokeWin32CalloutWithWatchdog(a1, a2, v12, v11, v10);
    goto LABEL_17;
  }
  if ( a3 == 1 )
  {
    v11 = a4;
    v12 = 1;
    goto LABEL_12;
  }
  NextSession = PsGetNextSession(0LL);
  if ( !NextSession )
  {
    v10 = OutputBuffer;
    v12 = 2;
    v11 = 0LL;
    goto LABEL_12;
  }
  v14 = HalSystemVectorDispatchEntry();
  do
  {
    if ( *(_QWORD *)(NextSession[93] + 160LL) == v14 )
    {
      SessionId = PsGetSessionId((__int64)NextSession);
      v8 = PopInvokeWin32CalloutWithWatchdog(a1, a2, 1u, &SessionId, OutputBuffer);
    }
    NextSession = PsGetNextSession(NextSession);
  }
  while ( NextSession );
LABEL_17:
  v15 = OutputBuffer;
  if ( OutputBuffer )
  {
    memset_0(&InputBuffer, 0, 0x60uLL);
    InputBuffer = 21;
    v18 = v15;
    v19 = 1;
    ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
  }
  PopDiagTraceWin32kCalloutEnd(a1, a2, v8);
  return v8;
}
