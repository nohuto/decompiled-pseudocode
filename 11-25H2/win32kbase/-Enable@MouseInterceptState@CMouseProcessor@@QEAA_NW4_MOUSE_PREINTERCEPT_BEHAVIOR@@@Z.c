/*
 * XREFs of ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x140220278
 * Callers:
 *     NtMITEnableMouseIntercept @ 0x1401BA980 (NtMITEnableMouseIntercept.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEdtionGetInputDesktopId @ 0x140225D84 (ApiSetEdtionGetInputDesktopId.c)
 */

char __fastcall CMouseProcessor::MouseInterceptState::Enable(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // bl

  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0);
  if ( !IsInputThread(v5, v4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8340);
  if ( !*(_BYTE *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 24) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8344);
    *(_BYTE *)(a1 + 8) = 1;
    *(_DWORD *)(a1 + 12) = a2;
    *(_QWORD *)(a1 + 16) = ApiSetEdtionGetInputDesktopId();
    *(_DWORD *)(a1 + 24) = (unsigned int)PsGetCurrentThreadId();
  }
  v6 = *(_BYTE *)(a1 + 8);
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0LL);
  return v6;
}
