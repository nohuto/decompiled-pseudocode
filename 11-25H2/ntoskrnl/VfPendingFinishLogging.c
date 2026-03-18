/*
 * XREFs of VfPendingFinishLogging @ 0x140B81A90
 * Callers:
 *     IovpCallDriver1 @ 0x140B7CCD4 (IovpCallDriver1.c)
 *     IovpCompleteRequest1 @ 0x140B96A08 (IovpCompleteRequest1.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 */

USHORT __fastcall VfPendingFinishLogging(__int64 a1)
{
  USHORT result; // ax

  result = RtlCaptureStackBackTrace(1u, 0x3Eu, (PVOID *)(a1 + 16), 0LL);
  if ( result < 0x3Eu )
    *(_QWORD *)(a1 + 8LL * result + 16) = 0LL;
  return result;
}
