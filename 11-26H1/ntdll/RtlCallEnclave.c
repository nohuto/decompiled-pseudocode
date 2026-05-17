/*
 * XREFs of RtlCallEnclave @ 0x180163100
 * Callers:
 *     LdrInitializeEnclave @ 0x180070B80 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x180070CC0 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     ZwCallEnclave @ 0x180160190 (ZwCallEnclave.c)
 */

__int64 RtlCallEnclave()
{
  return ZwCallEnclave();
}
