/*
 * XREFs of ?_EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXPEAUtagQMSG@@_N@Z @ 0x1400E3CF8
 * Callers:
 *     HandleDeferredInput @ 0x1400E3510 (HandleDeferredInput.c)
 * Callees:
 *     ?GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z @ 0x1400E3EB4 (-GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z.c)
 *     ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1400E3EEC (-_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z.c)
 *     ?LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z @ 0x1401EB648 (-LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z.c)
 */

void __fastcall KeyboardInputTelemetry::_EndKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        struct tagQMSG *a2,
        char a3)
{
  bool v3; // di
  unsigned int ThreadId; // eax
  unsigned __int64 v7; // rcx
  int v8; // eax
  unsigned int KeyboardInputLatency; // eax

  v3 = 0;
  if ( a3 )
  {
    KeyboardInputTelemetry::LogHanging(*((struct tagTHREADINFO **)a2 + 13), *((_QWORD *)a2 + 17));
  }
  else
  {
    ThreadId = (unsigned int)PsGetThreadId(**((PETHREAD **)a2 + 13));
    v7 = *((_QWORD *)a2 + 18);
    if ( v7 && *((_DWORD *)this + 47) == ThreadId )
    {
      v8 = *((_DWORD *)a2 + 6);
      if ( v8 == 257 || v8 == 261 )
        v3 = 1;
      KeyboardInputLatency = KeyboardInputTelemetry::GetKeyboardInputLatency(v7);
      KeyboardInputTelemetry::_UpdateTelemetryBuffer(this, v3, KeyboardInputLatency);
    }
  }
}
