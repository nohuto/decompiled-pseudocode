/*
 * XREFs of PsIsProcessCommitRelinquished @ 0x140AC1BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PsIsProcessCommitRelinquished(__int64 a1)
{
  return BYTE1(*(_DWORD *)(a1 + 1532)) & 1;
}
