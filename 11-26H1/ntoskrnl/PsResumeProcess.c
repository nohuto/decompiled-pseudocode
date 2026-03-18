/*
 * XREFs of PsResumeProcess @ 0x140B2CDF0
 * Callers:
 *     <none>
 * Callees:
 *     PsMultiResumeProcess @ 0x140528200 (PsMultiResumeProcess.c)
 */

__int64 __fastcall PsResumeProcess(__int64 a1)
{
  return PsMultiResumeProcess(a1);
}
