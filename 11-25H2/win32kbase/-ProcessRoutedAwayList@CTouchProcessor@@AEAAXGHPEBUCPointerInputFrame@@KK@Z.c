/*
 * XREFs of ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1402088EC
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x14018900C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1401FAC30 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1401FB9F0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14003821C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1400F46E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x140134EE8 (-PopRoutedAwayTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x140201A00 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CTouchProcessor::ProcessRoutedAwayList(
        CTouchProcessor *this,
        unsigned __int16 a2,
        int a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6)
{
  CInputDest *v10; // rax
  _QWORD *v11; // rax
  _QWORD v12[16]; // [rsp+50h] [rbp-138h] BYREF
  _BYTE v13[128]; // [rsp+D0h] [rbp-B8h] BYREF

  if ( a3 && !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10580);
  CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v12, a2);
  while ( LODWORD(v12[0]) )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        v10 = CInputDest::CInputDest((CInputDest *)v13, (const struct CInputDest *)v12);
        CTouchProcessor::GenerateRoutedReleasedMessage(
          (__int64)this,
          (__int64)a4,
          a5,
          a6,
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)a4 + 32) + 368LL), 4),
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)a4 + 32) + 368LL), 5),
          v10);
      }
    }
    v11 = (_QWORD *)CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v13, a2);
    CInputDest::operator=(v12, v11);
    CInputDest::~CInputDest((CInputDest *)v13);
  }
  CInputDest::~CInputDest((CInputDest *)v12);
}
