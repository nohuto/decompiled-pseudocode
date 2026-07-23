/*
 * XREFs of EtwpTraceLoggingProvEnableCallback @ 0x140B387F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpPsProvCaptureState @ 0x14083608C (EtwpPsProvCaptureState.c)
 */

char __fastcall EtwpTraceLoggingProvEnableCallback(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 *a7)
{
  __int64 *v7; // rax

  v7 = PsProvTraceLoggingGuid;
  if ( a7 == PsProvTraceLoggingGuid && a2 == 2 )
    LOBYTE(v7) = EtwpPsProvCaptureState(a7, a4);
  return (char)v7;
}
