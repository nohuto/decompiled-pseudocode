/*
 * XREFs of ViPtCaptureStackTrace @ 0x140B97344
 * Callers:
 *     ViPtLogPoolTraceWrapper @ 0x140B72100 (ViPtLogPoolTraceWrapper.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutEx @ 0x140347C60 (KeExpandKernelStackAndCalloutEx.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140432BE0 (RtlEnoughStackSpaceForStackCapture.c)
 *     ViPtCaptureStackTraceCallout @ 0x140B973A0 (ViPtCaptureStackTraceCallout.c)
 */

void __fastcall ViPtCaptureStackTrace(PVOID Parameter)
{
  if ( Parameter )
  {
    if ( KeGetCurrentIrql() > 1u || (unsigned int)RtlEnoughStackSpaceForStackCapture() )
      ViPtCaptureStackTraceCallout(Parameter);
    else
      KeExpandKernelStackAndCalloutEx(ViPtCaptureStackTraceCallout, Parameter, 0xE30uLL, 1u, 0LL);
  }
}
