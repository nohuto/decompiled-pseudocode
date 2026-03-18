/*
 * XREFs of SetThreadPriority @ 0x14021C2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x14012E2D8 (-_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ.c)
 *     SetThreadBasePriority @ 0x140189260 (SetThreadBasePriority.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall SetThreadPriority(int a1, int a2, int a3)
{
  __int64 v3; // rdi

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18800);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(v3 + 8));
  if ( *(_DWORD *)(v3 + 16) == 1 )
  {
    if ( CInputThreadBase::_CalledOnInputThread((CInputThreadBase *)v3) )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 175);
    SetThreadBasePriority(**(PETHREAD **)(v3 + 24), 16);
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(v3 + 8));
}
