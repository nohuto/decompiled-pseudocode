/*
 * XREFs of ?StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x1801468F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z @ 0x18007CED0 (-GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z.c)
 *     ?EventGestureCancelled@GestureHandler@@SAXKPEBGPEAVDragManagerClientProxy@@@Z @ 0x180080794 (-EventGestureCancelled@GestureHandler@@SAXKPEBGPEAVDragManagerClientProxy@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?StartOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z @ 0x1801469BC (-StartOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180150F14 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x18015D598 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 */

__int64 __fastcall GestureServices::StartOperation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        bool a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        struct DragManagerClientProxy *a7,
        int a8)
{
  const unsigned __int16 *ProcessorTypeString; // rax
  const char *v12; // r9
  const unsigned __int16 *v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ProcessorTypeString = GestureServices::GetProcessorTypeString((_QWORD *)a1, a8);
  InputETW::InputGesture::StartOperationReceived(ProcessorTypeString, a3);
  if ( a8 )
  {
    if ( a8 != 2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x166,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gestureservices.cpp",
        v12);
    if ( !ShellGesturesProcessor::StartOperation(*(ShellGesturesProcessor **)(a1 + 80), a3, a4, a5, a6, a7) )
    {
      v13 = GestureServices::GetProcessorTypeString((_QWORD *)a1, 2);
      GestureHandler::EventGestureCancelled(a3, v13, a7);
    }
  }
  else
  {
    DragNDropProcessor::StartDrag(*(DragNDropProcessor **)(a1 + 64), a3, a5, a7);
  }
  return 0LL;
}
