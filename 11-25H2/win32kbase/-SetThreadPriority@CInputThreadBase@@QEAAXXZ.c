/*
 * XREFs of ?SetThreadPriority@CInputThreadBase@@QEAAXXZ @ 0x1402239A0
 * Callers:
 *     SetThreadPriority @ 0x140216C40 (SetThreadPriority.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1400E7EE0 (-_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ.c)
 *     SetThreadBasePriority @ 0x1401532F0 (SetThreadBasePriority.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputThreadBase::SetThreadPriority(PETHREAD **this)
{
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(this + 1), 0);
  if ( *((_DWORD *)this + 4) == 1 )
  {
    if ( CInputThreadBase::_CalledOnInputThread((CInputThreadBase *)this) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 175);
    SetThreadBasePriority(*this[3], 16);
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(this + 1), 0LL);
}
