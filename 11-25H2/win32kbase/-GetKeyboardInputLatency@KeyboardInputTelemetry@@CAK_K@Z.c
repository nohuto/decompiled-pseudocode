/*
 * XREFs of ?GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z @ 0x1400C1E28
 * Callers:
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@SAXPEAUtagQMSG@@_N@Z @ 0x1400C1D40 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@SAXPEAUtagQMSG@@_N@Z.c)
 *     ?_EndKeyboardEventSequence@KeyboardInputTelemetry@@AEAAXXZ @ 0x1400C1DDC (-_EndKeyboardEventSequence@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     ?LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z @ 0x1401C2BA8 (-LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KeyboardInputTelemetry::GetKeyboardInputLatency(__int64 a1)
{
  return (unsigned __int64)(1000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - a1)) / gliQpcFreq.QuadPart;
}
