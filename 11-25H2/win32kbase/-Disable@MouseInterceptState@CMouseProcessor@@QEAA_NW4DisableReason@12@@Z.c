/*
 * XREFs of ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x140220204
 * Callers:
 *     NtMITDisableMouseIntercept @ 0x1401BA850 (NtMITDisableMouseIntercept.c)
 *     ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1402213E0 (-MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CMouseProcessor::MouseInterceptState::Disable(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0);
  if ( !IsInputThread(v3, v2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8369);
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0LL);
  return 1;
}
