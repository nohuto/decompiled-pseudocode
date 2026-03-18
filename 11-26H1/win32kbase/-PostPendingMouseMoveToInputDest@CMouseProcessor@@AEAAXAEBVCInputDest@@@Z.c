/*
 * XREFs of ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1400CDFE8
 * Callers:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1400CF738 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 * Callees:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@_K3W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x14006CA1C (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z @ 0x1400CCBF4 (-HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1400D0FF0 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x140119300 (-GetPendingMouseMovePoint@QHelper@@YA-AUtagLOGICALPOINT@@AEBVCInputDest@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMoveToInputDest(CMouseProcessor *this, const struct CInputDest *a2)
{
  __int64 v4; // rsi
  struct tagTHREADINFO *ThreadInfo; // rax
  CInputDest *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rax
  __int64 PendingMouseMovePoint; // rax
  __int64 v12; // xmm0_8
  const struct CInputDest *v13; // rdx
  __int64 v14; // [rsp+40h] [rbp-38h] BYREF
  int v15; // [rsp+48h] [rbp-30h]
  _BYTE v16[16]; // [rsp+50h] [rbp-28h] BYREF

  if ( QHelper::HasPendingMouseMove(a2, a2) )
  {
    if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment() != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5980LL);
    v4 = 0LL;
    if ( *(_DWORD *)a2 )
    {
      ThreadInfo = CInputDest::GetThreadInfo(a2);
      if ( ThreadInfo )
      {
        v7 = *((_QWORD *)ThreadInfo + 58);
        if ( v7 )
          v4 = *(_QWORD *)(v7 + 216);
      }
      LODWORD(v8) = 0;
      v9 = CInputDest::GetThreadInfo(v6);
      if ( v9 )
      {
        v10 = *((_QWORD *)v9 + 58);
        if ( v10 )
          v8 = *(_QWORD *)(v10 + 208);
      }
    }
    else
    {
      LODWORD(v8) = 0;
    }
    PendingMouseMovePoint = QHelper::GetPendingMouseMovePoint(v16, a2);
    v12 = *(_QWORD *)PendingMouseMovePoint;
    LODWORD(PendingMouseMovePoint) = *(_DWORD *)(PendingMouseMovePoint + 8);
    v14 = v12;
    v15 = PendingMouseMovePoint;
    CMouseProcessor::PostMouseMoveToInputDest((__int64)this, a2, 0LL, (unsigned __int16 *)&v14, v8, v4, 1u, 0LL);
    if ( QHelper::HasPendingMouseMove(a2, v13) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5988LL);
  }
}
