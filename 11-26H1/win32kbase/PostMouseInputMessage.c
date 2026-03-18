/*
 * XREFs of PostMouseInputMessage @ 0x14021BEB4
 * Callers:
 *     NtMITPostMouseInputMessage @ 0x1401E1210 (NtMITPostMouseInputMessage.c)
 * Callees:
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x140224010 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 */

bool __fastcall PostMouseInputMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 MouseProcessor; // rax
  bool v12; // zf
  int v13; // eax

  if ( !IsInputThread(a1, a2, a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1546);
  MouseProcessor = anonymous_namespace_::GetMouseProcessor(v9, v8, v10);
  if ( !MouseProcessor
    || (v12 = (unsigned __int8)CMouseProcessor::PostMouseInputMessage(MouseProcessor, a1, a2, a3, a4) == 0, v13 = 0, v12) )
  {
    v13 = -1073741823;
  }
  return v13 != 0;
}
