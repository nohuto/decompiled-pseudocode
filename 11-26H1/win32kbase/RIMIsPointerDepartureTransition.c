/*
 * XREFs of RIMIsPointerDepartureTransition @ 0x140141980
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1401AF62C (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMIsPointerDepartureTransition(char a1, char a2)
{
  return (a1 & 2) != 0 && (a2 & 2) == 0;
}
