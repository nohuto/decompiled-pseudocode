/*
 * XREFs of RIMIsPointerUpTransition @ 0x14012C89C
 * Callers:
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x14012C518 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimApplyPointerDevicePolicies @ 0x1401AF62C (rimApplyPointerDevicePolicies.c)
 *     rimFinalizePointerFlags @ 0x1401AF8AC (rimFinalizePointerFlags.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMIsPointerUpTransition(char a1, char a2)
{
  return (a1 & 4) != 0 && (a2 & 4) == 0;
}
