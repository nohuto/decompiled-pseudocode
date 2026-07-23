/*
 * XREFs of PsResumeProcess @ 0x140B2EE70
 * Callers:
 *     <none>
 * Callees:
 *     PsMultiResumeProcess @ 0x14052A870 (PsMultiResumeProcess.c)
 */

__int64 __fastcall PsResumeProcess(__int64 a1)
{
  return PsMultiResumeProcess(a1);
}
