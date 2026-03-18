/*
 * XREFs of ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x140066560
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140108F24 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z @ 0x140213994 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x140214300 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1400662E4 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1400666A8 (-PopRoutedAwayTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x140068490 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14009C7BC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CTouchProcessor::ProcessRoutedAwayList(
        CTouchProcessor *this,
        unsigned __int16 a2,
        int a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v10; // rdx
  struct CInputDest *v11; // rax
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // [rsp+20h] [rbp-168h]
  _DWORD v15[20]; // [rsp+50h] [rbp-138h] BYREF
  _BYTE v16[12]; // [rsp+A0h] [rbp-E8h] BYREF
  int v17; // [rsp+ACh] [rbp-DCh]
  _BYTE v18[80]; // [rsp+D0h] [rbp-B8h] BYREF
  _BYTE v19[12]; // [rsp+120h] [rbp-68h] BYREF
  int v20; // [rsp+12Ch] [rbp-5Ch]

  if ( a3 && !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10563LL);
  CTouchProcessor::PopRoutedAwayTarget(this, v15, a2);
  while ( v15[0] )
  {
    if ( a3 && a4 )
    {
      v11 = CInputDest::CInputDest((CInputDest *)v18, (const struct CInputDest *)v15);
      v12 = *((_QWORD *)a4 + 32);
      LODWORD(v14) = -__CFSHR__(*(_DWORD *)(v12 + 368), 4);
      CTouchProcessor::GenerateRoutedReleasedMessage(
        (__int64)this,
        (__int64)a4,
        a5,
        a6,
        v14,
        -__CFSHR__(*(_DWORD *)(v12 + 368), 5),
        v11);
    }
    v13 = (void *)CTouchProcessor::PopRoutedAwayTarget(this, v18, a2);
    CInputDest::operator=(v15, v13);
    if ( v20 )
      HMAssignmentUnlock(v19, v10);
  }
  if ( v17 )
    HMAssignmentUnlock(v16, v10);
}
