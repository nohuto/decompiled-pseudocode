/*
 * XREFs of ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x140224964
 * Callers:
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x140224010 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     ?DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ @ 0x140189064 (-DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x140222A08 (--_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z.c)
 *     ?DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z @ 0x14022338C (-DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z.c)
 */

struct CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::BufferedMouseInputList::ResolveIdToMessage(
        CMouseProcessor::BufferedMouseInputList *this,
        __int64 a2,
        int a3)
{
  _QWORD *v5; // rax
  char *v6; // rbx
  __int64 v8; // rcx

  if ( !IsInputThread((int)this, a2, a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 7467);
  v5 = (_QWORD *)((char *)this + 8);
  v6 = (char *)*((_QWORD *)this + 1);
  if ( v6 == (char *)this + 8 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 7471);
    return 0LL;
  }
  else
  {
    if ( *((_QWORD **)v6 + 1) != v5 || (v8 = *(_QWORD *)v6, *(char **)(*(_QWORD *)v6 + 8LL) != v6) )
      __fastfail(3u);
    *v5 = v8;
    *(_QWORD *)(v8 + 8) = v5;
    if ( *((_QWORD *)v6 + 2) != a2 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 7496);
      if ( v6 )
        CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(v6);
      CMouseProcessor::BufferedMouseInputList::DropAllMouseInput(this);
      v6 = 0LL;
    }
    InputTraceLogging::Mouse::DequeueUserModeInput(
      a2,
      (const struct CInputDest *)((unsigned __int64)(v6 + 24) & -(__int64)(v6 != 0LL)));
    return (struct CMouseProcessor::MouseInputMessage *)v6;
  }
}
