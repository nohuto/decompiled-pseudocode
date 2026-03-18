/*
 * XREFs of ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x140190780
 * Callers:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14018F9E8 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 * Callees:
 *     ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x1400B88B4 (-GetPendingMouseMovePoint@QHelper@@YA-AUtagLOGICALPOINT@@AEBVCInputDest@@@Z.c)
 *     ?HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z @ 0x1400B89B8 (-HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1400B96E8 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x140104744 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@_K3W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x140221918 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMoveToInputDest(CMouseProcessor *this, const struct CInputDest *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 Queue; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 PendingMouseMovePoint; // rax
  __int64 v11; // xmm0_8
  const struct CInputDest *v12; // rdx
  __int64 v13; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+48h] [rbp-30h]
  _BYTE v15[16]; // [rsp+50h] [rbp-28h] BYREF

  if ( QHelper::HasPendingMouseMove(a2, a2) )
  {
    if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v5, v4) != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5942LL);
    v6 = 0LL;
    Queue = CInputDest::GetQueue(a2, 2);
    if ( Queue )
      v6 = *(_QWORD *)(Queue + 216);
    v8 = 0LL;
    v9 = CInputDest::GetQueue(a2, 2);
    if ( v9 )
      v8 = *(_QWORD *)(v9 + 208);
    PendingMouseMovePoint = QHelper::GetPendingMouseMovePoint((__int64)v15, (__int64)a2);
    v11 = *(_QWORD *)PendingMouseMovePoint;
    LODWORD(PendingMouseMovePoint) = *(_DWORD *)(PendingMouseMovePoint + 8);
    v13 = v11;
    v14 = PendingMouseMovePoint;
    CMouseProcessor::PostMouseMoveToInputDest(this, a2, 0LL, &v13, v8, v6, 1, 0LL);
    if ( QHelper::HasPendingMouseMove(a2, v12) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5950LL);
  }
}
