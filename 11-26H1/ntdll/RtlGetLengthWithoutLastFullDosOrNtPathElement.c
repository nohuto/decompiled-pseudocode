/*
 * XREFs of RtlGetLengthWithoutLastFullDosOrNtPathElement @ 0x1800A57B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetLengthWithoutLastFullDosOrNtPathElement(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpGetLengthWithoutLastPathElement(a1, a2, a2, a3);
}
