/*
 * XREFs of SetUnavailableInputSource @ 0x14006CD60
 * Callers:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@_K3W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x14006CA1C (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ??0tagTHREADINFO@@QEAA@PEAU_ETHREAD@@@Z @ 0x140102FF4 (--0tagTHREADINFO@@QEAA@PEAU_ETHREAD@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2PEBU_InputDeviceHandle@@@Z @ 0x14022432C (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2PEBU_InputDeviceHandle.c)
 * Callees:
 *     <none>
 */

void __fastcall SetUnavailableInputSource(_QWORD *a1)
{
  if ( a1 )
    *a1 = 0LL;
}
