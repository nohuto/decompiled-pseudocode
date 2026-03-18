/*
 * XREFs of ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14018FD48
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1400380D4 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x140039A7C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     EtwTraceWakePump @ 0x14003C500 (EtwTraceWakePump.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400B7D64 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1400B96E8 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400B9B64 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     GetAppCompatFlags2QuadWord @ 0x1400B9C3C (GetAppCompatFlags2QuadWord.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1400B9D78 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1400E67D0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?MarkMoveOnQueue@Mouse@InputTraceLogging@@SAXPEBUtagQ@@_K@Z @ 0x1400F1E48 (-MarkMoveOnQueue@Mouse@InputTraceLogging@@SAXPEBUtagQ@@_K@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x140108EC4 (INPUTDEST_FROM_PWND.c)
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1401926C4 (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     ApiSetEditionMouseMoveShellResilience @ 0x140196040 (ApiSetEditionMouseMoveShellResilience.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x140196E80 (ApiSetEditionUpdateRawMouseMode.c)
 *     ApiSetEditionWakeThreadForInput @ 0x140196FA0 (ApiSetEditionWakeThreadForInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14021F98C (-CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@_K3W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x140221918 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?SetMouseMoveTimes@QHelper@@YAXAEBVCInputDest@@_K1@Z @ 0x1402221D4 (-SetMouseMoveTimes@QHelper@@YAXAEBVCInputDest@@_K1@Z.c)
 */

void __fastcall CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3,
        const struct CMouseProcessor::CMoveEvent *a4,
        struct _mouseCursorEvent *a5)
{
  __int64 v9; // rbp
  int v10; // ecx
  int v11; // esi
  CMouseProcessor *v12; // rcx
  __int64 *Queue; // r13
  struct tagWND *UserWindow; // rax
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v16; // rdx
  const struct tagLOGICALPOINT *v17; // r8
  unsigned __int64 v18; // r9
  int v19; // r8d
  int v20; // r9d
  __int64 *v21; // rbx
  CInputDest *v22; // rcx
  char PtiFromInputDest; // al
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  _OWORD v34[7]; // [rsp+40h] [rbp-108h] BYREF
  _DWORD v35[28]; // [rsp+B0h] [rbp-98h] BYREF

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5685LL);
  v9 = *((_QWORD *)a4 + 1);
  v10 = 4;
  if ( *(_DWORD *)(v9 + 164) != 1 )
    v10 = 0;
  v11 = v10 | 1;
  if ( (*(_BYTE *)(v9 + 120) & 4) == 0 )
    v11 = v10;
  Queue = (__int64 *)CInputDest::GetQueue(a2, 2);
  if ( !Queue )
  {
    if ( !*(_QWORD *)(v9 + 8) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5707LL);
    goto LABEL_10;
  }
  CMouseProcessor::CoalesceInputSourceMouseMoves(
    v12,
    (struct tagQ *)Queue,
    (const struct tagINPUT_MESSAGE_SOURCE *)(v9 + 112));
  UserWindow = CInputDest::GetUserWindow(a2);
  ApiSetEditionMouseMoveShellResilience(UserWindow);
  if ( CInputDest::GetQueue(a2, 2) )
  {
    ThreadInfo = CInputDest::GetThreadInfo(a2);
    *(_QWORD *)(v16 + 96) = ThreadInfo;
  }
  ApiSetEditionUpdateRawMouseMode(Queue);
  QHelper::SetMouseMovePoint(a2, a3, v17);
  QHelper::SetMouseMoveTimes(
    a2,
    *(const struct CInputDest **)(*((_QWORD *)a4 + 1) + 88LL),
    *(_QWORD *)(*((_QWORD *)a4 + 1) + 96LL),
    v18);
  InputTraceLogging::Mouse::MarkMoveOnQueue(
    (const struct tagQ *)Queue,
    *(_QWORD *)(*((_QWORD *)a4 + 1) + 96LL),
    v19,
    v20);
  v21 = (__int64 *)CInputDest::GetUserWindow(a2);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(v22, 0LL);
  EtwTraceWakePump(PtiFromInputDest, v21, 0);
  if ( CInputDest::IsCompositionInput(a2) )
  {
    v11 |= 2u;
LABEL_10:
    CMouseProcessor::PostMouseMoveToInputDest(
      this,
      a2,
      v9,
      a3,
      *(_QWORD *)(*((_QWORD *)a4 + 1) + 88LL),
      *(_QWORD *)(*((_QWORD *)a4 + 1) + 96LL),
      v11,
      a5);
    return;
  }
  if ( (v11 & 1) != 0 )
    goto LABEL_10;
  v24 = CInputDest::GetQueue(a2, 2);
  if ( v24 )
    *(_DWORD *)(v24 + 412) |= 0x20u;
  ApiSetEditionWakeThreadForInput(a2);
  v26 = Queue[18];
  if ( v26 && ((unsigned __int64)GetAppCompatFlags2QuadWord(*(_QWORD *)(v26 + 16), v25) & 0x2000000000000LL) != 0 )
  {
    v27 = INPUTDEST_FROM_PWND(v35, Queue[18]);
    v28 = v27[1];
    v34[0] = *v27;
    v29 = v27[2];
    v34[1] = v28;
    v30 = v27[3];
    v34[2] = v29;
    v31 = v27[4];
    v34[3] = v30;
    v32 = v27[5];
    v34[4] = v31;
    v33 = v27[6];
    v34[5] = v32;
    v34[6] = v33;
    if ( !CInputDest::operator==((int *)a2, (__int64)v34) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5786LL);
    CMouseProcessor::PostMouseMoveToInputDest(
      this,
      a2,
      v9,
      a3,
      *(_QWORD *)(*((_QWORD *)a4 + 1) + 88LL),
      *(_QWORD *)(*((_QWORD *)a4 + 1) + 96LL),
      0,
      a5);
  }
}
