/*
 * XREFs of ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEAVIInputQueue@@@Z @ 0x140059438
 * Callers:
 *     ?Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x140059358 (-Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 *     ?SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x14016EA78 (-SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 * Callees:
 *     ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4CompositionInputFlags@@PEAPEAV1@@Z @ 0x140059530 (-Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4Compositi.c)
 *     _anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool @ 0x140059760 (_anonymous_namespace_--SGCINPUTMGRg_pInputManager_CInputManager___--operator_bool.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14024A64C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall CInputSink::CreateInputQueue(
        const struct COMPOSITION_INPUT_QUEUE *a1,
        const enum CompositionInputFlags *a2,
        struct IInputQueue **a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // r10d
  __int64 v6; // r9
  __int128 v7; // xmm1
  __int64 v8; // rdx
  struct IInputQueue *v10; // rdi
  _OWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]
  struct IInputQueue *v13; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v5 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
  {
    v10 = 0LL;
    if ( (unsigned __int8)anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool(
                            a1,
                            a2,
                            a3,
                            0LL) )
      v10 = *(struct IInputQueue **)W32GetUserInputMgrSessionState();
    goto LABEL_9;
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    v10 = 0LL;
    if ( (unsigned __int8)anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool(
                            a1,
                            a2,
                            a3,
                            (unsigned int)(*(_DWORD *)a1 - 1)) )
      v10 = (struct IInputQueue *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 8LL);
LABEL_9:
    *a3 = v10;
    return v3;
  }
  if ( *(_DWORD *)a1 == 2 || *(_DWORD *)a1 == 3 )
  {
    v6 = *(unsigned int *)a2;
    v7 = *((_OWORD *)a1 + 2);
    v8 = *((_QWORD *)a1 + 1);
    v11[0] = *((_OWORD *)a1 + 1);
    v12 = *((_QWORD *)a1 + 6);
    v13 = 0LL;
    v11[1] = v7;
    v3 = CInputQueue::Create(v5, v8, v11, v6, &v13);
    *a3 = v13;
  }
  else
  {
    if ( *(_DWORD *)a1 == 4 )
      MicrosoftTelemetryAssertTriggeredMsgKM("Input delivery requires window", a2);
    return (unsigned int)-1073741811;
  }
  return v3;
}
