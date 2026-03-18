/*
 * XREFs of EtwpCovSampCaptureApcRundown @ 0x140830740
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampCaptureApcRelease @ 0x140261848 (EtwpCovSampCaptureApcRelease.c)
 */

__int64 __fastcall EtwpCovSampCaptureApcRundown(__int64 a1)
{
  return EtwpCovSampCaptureApcRelease((PSLIST_ENTRY)(a1 - 56));
}
