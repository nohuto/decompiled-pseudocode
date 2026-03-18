/*
 * XREFs of ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x14021F644
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x140037B68 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 * Callees:
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?QueueUserModeInput@Mouse@InputTraceLogging@@SAX_KAEBVCInputDest@@@Z @ 0x140221E88 (-QueueUserModeInput@Mouse@InputTraceLogging@@SAX_KAEBVCInputDest@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

char __fastcall CMouseProcessor::BufferedMouseInputList::AddInputToList(
        CMouseProcessor::BufferedMouseInputList *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4,
        unsigned __int64 *a5)
{
  _QWORD *v9; // rbx
  CMouseProcessor::BufferedMouseInputList **v11; // rcx

  if ( !IsInputThread((__int64)this, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7438);
  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7439);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD, struct CInputDest *, const struct CMouseProcessor::InputDeliveryContext *))(*(_QWORD *)a2 + 32LL))(
                   a2,
                   *(_QWORD *)this,
                   a3,
                   a4);
  if ( *(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7446);
  if ( !v9 )
    return 0;
  v11 = (CMouseProcessor::BufferedMouseInputList **)*((_QWORD *)this + 2);
  if ( *v11 != (CMouseProcessor::BufferedMouseInputList *)((char *)this + 8) )
    __fastfail(3u);
  v9[1] = v11;
  *v9 = (char *)this + 8;
  *v11 = (CMouseProcessor::BufferedMouseInputList *)v9;
  *((_QWORD *)this + 2) = v9;
  *a5 = (*(_QWORD *)this)++;
  InputTraceLogging::Mouse::QueueUserModeInput(*a5, (const struct CInputDest *)(v9 + 3));
  return 1;
}
