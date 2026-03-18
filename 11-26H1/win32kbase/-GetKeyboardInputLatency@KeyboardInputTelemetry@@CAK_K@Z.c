/*
 * XREFs of ?GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z @ 0x1400E3EB4
 * Callers:
 *     ?_EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXPEAUtagQMSG@@_N@Z @ 0x1400E3CF8 (-_EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXPEAUtagQMSG@@_N@Z.c)
 *     ?_EndKeyboardEventSequence@KeyboardInputTelemetry@@AEAAXXZ @ 0x1400E4368 (-_EndKeyboardEventSequence@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     ?LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z @ 0x1401EB648 (-LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KeyboardInputTelemetry::GetKeyboardInputLatency(__int64 a1)
{
  return (unsigned __int64)(1000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - a1)) / gliQpcFreq.QuadPart;
}
