/*
 * XREFs of ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x140223508
 * Callers:
 *     NtMITEnableMouseIntercept @ 0x1401E0E70 (NtMITEnableMouseIntercept.c)
 * Callees:
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEdtionGetInputDesktopId @ 0x140227FAC (ApiSetEdtionGetInputDesktopId.c)
 */

char __fastcall CMouseProcessor::MouseInterceptState::Enable(__int64 a1, int a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  char v7; // bl

  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1);
  if ( !IsInputThread(v5, v4, v6) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8325);
  if ( !*(_BYTE *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 24) )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8329);
    *(_BYTE *)(a1 + 8) = 1;
    *(_DWORD *)(a1 + 12) = a2;
    *(_QWORD *)(a1 + 16) = ApiSetEdtionGetInputDesktopId();
    *(_DWORD *)(a1 + 24) = (unsigned int)PsGetCurrentThreadId();
  }
  v7 = *(_BYTE *)(a1 + 8);
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1);
  return v7;
}
