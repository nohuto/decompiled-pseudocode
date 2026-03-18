/*
 * XREFs of ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x1401B56FC
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1401101FC (UserActivateMITInputProcessing.c)
 *     UserKSTInitialize @ 0x140181AD0 (UserKSTInitialize.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x14012E548 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputThreadBase::ActivateInputProcessing(CInputThreadBase *this)
{
  char v2; // si

  W32AcquirePushLockExclusiveEx((CInputThreadBase *)((char *)this + 8));
  if ( *((_DWORD *)this + 4) == 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 130);
  if ( *((_DWORD *)this + 4) == 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 133);
  if ( !*((_DWORD *)this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 136);
  v2 = 1;
  if ( *((_DWORD *)this + 4) == 1 )
  {
    if ( CInputThreadBase::InputThreadState::IsEmpty((CInputThreadBase *)((char *)this + 16)) )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 141);
    *((_DWORD *)this + 4) = 2;
  }
  else
  {
    v2 = 0;
  }
  W32ReleasePushLockExclusiveEx((CInputThreadBase *)((char *)this + 8));
  return v2;
}
