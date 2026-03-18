/*
 * XREFs of ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x14012E548
 * Callers:
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x140181FFC (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 *     ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x1401B56FC (-ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ.c)
 *     ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x140225430 (-DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall CInputThreadBase::InputThreadState::IsEmpty(CInputThreadBase::InputThreadState *this)
{
  if ( ((*((_QWORD *)this + 1) == 0LL) ^ (*((_QWORD *)this + 2) == 0LL) ^ (*((_DWORD *)this + 6) == 0)) != (*(_DWORD *)this == 0) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 213LL);
  return *((_QWORD *)this + 1) == 0LL;
}
