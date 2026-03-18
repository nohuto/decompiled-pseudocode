/*
 * XREFs of ?RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ @ 0x1402238FC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1400E7EE0 (-_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputThreadBase::RevokeThreadAsInput(CInputThreadBase *this)
{
  W32AcquirePushLockExclusiveEx((CInputThreadBase *)((char *)this + 8), 0);
  if ( *((_DWORD *)this + 4) != 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 117);
  if ( !CInputThreadBase::_CalledOnInputThread(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 119);
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  W32ReleasePushLockExclusiveEx((CInputThreadBase *)((char *)this + 8), 0LL);
}
