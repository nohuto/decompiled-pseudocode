/*
 * XREFs of EtwpCovSampCaptureApcRundown @ 0x140836980
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampCaptureApcRelease @ 0x140260DB8 (EtwpCovSampCaptureApcRelease.c)
 */

__int64 __fastcall EtwpCovSampCaptureApcRundown(__int64 a1)
{
  return EtwpCovSampCaptureApcRelease((PSLIST_ENTRY)(a1 - 56));
}
