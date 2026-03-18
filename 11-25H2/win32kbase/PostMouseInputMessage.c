/*
 * XREFs of PostMouseInputMessage @ 0x140216994
 * Callers:
 *     NtMITPostMouseInputMessage @ 0x1401BAEA0 (NtMITPostMouseInputMessage.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1402215DC (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 */

bool __fastcall PostMouseInputMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 MouseProcessor; // rax
  bool v11; // zf
  int v12; // eax

  v6 = a2;
  if ( !IsInputThread(a1, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1572);
  MouseProcessor = anonymous_namespace_::GetMouseProcessor(v9, v8);
  if ( !MouseProcessor
    || (v11 = (unsigned __int8)CMouseProcessor::PostMouseInputMessage(MouseProcessor, a1, v6, a3, a4) == 0, v12 = 0, v11) )
  {
    v12 = -1073741823;
  }
  return v12 != 0;
}
