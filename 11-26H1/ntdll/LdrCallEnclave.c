/*
 * XREFs of LdrCallEnclave @ 0x180070CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 LdrCallEnclave()
{
  return LdrpIssueEnclaveCall();
}
