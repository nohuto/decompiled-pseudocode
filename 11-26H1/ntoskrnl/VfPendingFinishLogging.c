/*
 * XREFs of VfPendingFinishLogging @ 0x140C35EF0
 * Callers:
 *     IovpCallDriver1 @ 0x140C312C8 (IovpCallDriver1.c)
 *     IovpCompleteRequest1 @ 0x140C4BD80 (IovpCompleteRequest1.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140260E90 (RtlCaptureStackBackTrace.c)
 */

USHORT __fastcall VfPendingFinishLogging(__int64 a1)
{
  USHORT result; // ax

  result = RtlCaptureStackBackTrace(1u, 0x3Eu, (PVOID *)(a1 + 16), 0LL);
  if ( result < 0x3Eu )
    *(_QWORD *)(a1 + 8LL * result + 16) = 0LL;
  return result;
}
