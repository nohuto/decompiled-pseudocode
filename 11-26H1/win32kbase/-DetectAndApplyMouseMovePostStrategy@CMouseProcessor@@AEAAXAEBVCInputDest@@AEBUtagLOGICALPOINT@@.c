/*
 * XREFs of ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14009C278
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x14012184C (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 * Callees:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@_K3W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x14006CA1C (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?SetMouseMoveTimes@QHelper@@YAXAEBVCInputDest@@_K1@Z @ 0x14006CC74 (-SetMouseMoveTimes@QHelper@@YAXAEBVCInputDest@@_K1@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400CE2AC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400D0D68 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     EtwTraceWakePump @ 0x1400E6270 (EtwTraceWakePump.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x140117D38 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?SetPtiMouse@QHelper@@YAXAEBVCInputDest@@@Z @ 0x14012CDA4 (-SetPtiMouse@QHelper@@YAXAEBVCInputDest@@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x14012D9A4 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x140133510 (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     ?MarkMoveOnQueue@Mouse@InputTraceLogging@@SAXPEBUtagQ@@_K@Z @ 0x140138A24 (-MarkMoveOnQueue@Mouse@InputTraceLogging@@SAXPEBUtagQ@@_K@Z.c)
 *     GetAppCompatFlags2QuadWord @ 0x1401452E4 (GetAppCompatFlags2QuadWord.c)
 *     INPUTDEST_FROM_PWND @ 0x140148938 (INPUTDEST_FROM_PWND.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14016B2F8 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     ApiSetEditionMouseMoveShellResilience @ 0x14016F700 (ApiSetEditionMouseMoveShellResilience.c)
 *     ?CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14016F764 (-CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x140173C54 (ApiSetEditionUpdateRawMouseMode.c)
 *     ApiSetEditionWakeThreadForInput @ 0x14017C908 (ApiSetEditionWakeThreadForInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetMouseDeviceHandle@QHelper@@YAXAEBVCInputDest@@PEBU_InputDeviceHandle@@@Z @ 0x140224A64 (-SetMouseDeviceHandle@QHelper@@YAXAEBVCInputDest@@PEBU_InputDeviceHandle@@@Z.c)
 */

void __fastcall CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3,
        const struct CMouseProcessor::CMoveEvent *a4,
        struct _mouseCursorEvent *a5)
{
  __int64 v9; // rbp
  unsigned int v10; // edi
  struct tagQ *Queue; // rax
  CMouseProcessor *v12; // rcx
  struct tagQ *v13; // r15
  struct tagWND *UserWindow; // rax
  const struct CInputDest *v15; // rdx
  const struct tagLOGICALPOINT *v16; // r8
  const struct _InputDeviceHandle *v17; // r8
  struct tagWND *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 PtiFromInputDest; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  _OWORD v31[7]; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v32[112]; // [rsp+B0h] [rbp-98h] BYREF

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5717LL);
  v9 = *((_QWORD *)a4 + 1);
  v10 = 0;
  if ( *(_DWORD *)(v9 + 164) == 1 )
    v10 = 4;
  if ( (*(_DWORD *)(v9 + 120) & 4) != 0 )
    v10 |= 1u;
  Queue = (struct tagQ *)CInputDest::GetQueue(a2, 2LL);
  v13 = Queue;
  if ( !Queue )
  {
    if ( !*(_QWORD *)(v9 + 8) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5739LL);
    goto LABEL_10;
  }
  CMouseProcessor::CoalesceInputSourceMouseMoves(v12, Queue, (const struct tagINPUT_MESSAGE_SOURCE *)(v9 + 112));
  UserWindow = CInputDest::GetUserWindow(a2);
  ApiSetEditionMouseMoveShellResilience(UserWindow);
  QHelper::SetPtiMouse(a2, v15);
  ApiSetEditionUpdateRawMouseMode(v13);
  QHelper::SetMouseMovePoint(a2, a3, v16);
  QHelper::SetMouseMoveTimes(
    a2,
    *(const struct CInputDest **)(*((_QWORD *)a4 + 1) + 88LL),
    *(_QWORD *)(*((_QWORD *)a4 + 1) + 96LL));
  if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
    QHelper::SetMouseDeviceHandle(a2, (const struct CInputDest *)v9, v17);
  InputTraceLogging::Mouse::MarkMoveOnQueue(v13, *(_QWORD *)(*((_QWORD *)a4 + 1) + 96LL));
  v18 = CInputDest::GetUserWindow(a2);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(v19, 0LL, v20);
  EtwTraceWakePump(PtiFromInputDest, v18, 512LL);
  if ( CInputDest::IsCompositionInput(a2) )
  {
    v10 |= 2u;
LABEL_10:
    CMouseProcessor::PostMouseMoveToInputDest(
      (__int64)this,
      a2,
      v9,
      (unsigned __int16 *)a3,
      *(_QWORD *)(*((_QWORD *)a4 + 1) + 88LL),
      *(_QWORD *)(*((_QWORD *)a4 + 1) + 96LL),
      v10,
      (__int64)a5);
    return;
  }
  if ( (v10 & 1) != 0 )
    goto LABEL_10;
  v22 = CInputDest::GetQueue(a2, 2LL);
  if ( v22 )
    *(_DWORD *)(v22 + 436) |= 0x20u;
  ApiSetEditionWakeThreadForInput(a2);
  v23 = *((_QWORD *)v13 + 18);
  if ( v23 && (GetAppCompatFlags2QuadWord(*(_QWORD *)(v23 + 16)) & 0x2000000000000LL) != 0 )
  {
    v24 = (_OWORD *)INPUTDEST_FROM_PWND(v32, *((_QWORD *)v13 + 18));
    v25 = v24[1];
    v31[0] = *v24;
    v26 = v24[2];
    v31[1] = v25;
    v27 = v24[3];
    v31[2] = v26;
    v28 = v24[4];
    v31[3] = v27;
    v29 = v24[5];
    v31[4] = v28;
    v30 = v24[6];
    v31[5] = v29;
    v31[6] = v30;
    if ( !(unsigned __int8)CInputDest::operator==(a2, v31) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5824LL);
    CMouseProcessor::PostMouseMoveToInputDest(
      (__int64)this,
      a2,
      v9,
      (unsigned __int16 *)a3,
      *(_QWORD *)(*((_QWORD *)a4 + 1) + 88LL),
      *(_QWORD *)(*((_QWORD *)a4 + 1) + 96LL),
      0,
      (__int64)a5);
  }
}
