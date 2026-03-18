/*
 * XREFs of ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x140225430
 * Callers:
 *     ?DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ @ 0x1402254F0 (-DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x14012E2D8 (-_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ.c)
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x14012E548 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputThreadBase::DeactivateInputProcessing(CInputThreadBase *this)
{
  int v2; // eax
  char v3; // di

  W32AcquirePushLockExclusiveEx((CInputThreadBase *)((char *)this + 8));
  if ( !CInputThreadBase::_CalledOnInputThread(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 153);
  v2 = *((_DWORD *)this + 4);
  v3 = 1;
  if ( v2 == 2 || v2 == 1 )
  {
    if ( CInputThreadBase::InputThreadState::IsEmpty((CInputThreadBase *)((char *)this + 16)) )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 159);
    *((_DWORD *)this + 4) = 3;
  }
  else
  {
    v3 = 0;
  }
  W32ReleasePushLockExclusiveEx((CInputThreadBase *)((char *)this + 8));
  return v3;
}
