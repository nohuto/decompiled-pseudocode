/*
 * XREFs of ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x140223450
 * Callers:
 *     ?DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ @ 0x140223510 (-DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1400B9AA0 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 *     ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1400E7EE0 (-_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputThreadBase::DeactivateInputProcessing(CInputThreadBase *this)
{
  char v2; // di

  W32AcquirePushLockExclusiveEx((CInputThreadBase *)((char *)this + 8), 0);
  if ( !CInputThreadBase::_CalledOnInputThread(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 153);
  v2 = 1;
  if ( (unsigned int)(*((_DWORD *)this + 4) - 1) <= 1 )
  {
    if ( CInputThreadBase::InputThreadState::IsEmpty((CInputThreadBase *)((char *)this + 16)) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 159);
    *((_DWORD *)this + 4) = 3;
  }
  else
  {
    v2 = 0;
  }
  W32ReleasePushLockExclusiveEx((CInputThreadBase *)((char *)this + 8), 0LL);
  return v2;
}
