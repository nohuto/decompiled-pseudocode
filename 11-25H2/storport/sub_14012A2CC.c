/*
 * XREFs of sub_14012A2CC @ 0x14012A2CC
 * Callers:
 *     sub_1401285D0 @ 0x1401285D0 (sub_1401285D0.c)
 *     sub_140129500 @ 0x140129500 (sub_140129500.c)
 * Callees:
 *     sub_1400718DC @ 0x1400718DC (sub_1400718DC.c)
 *     sub_14007197C @ 0x14007197C (sub_14007197C.c)
 */

__int64 __fastcall sub_14012A2CC(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx

  v1 = a1 + 168;
  v2 = -1073741637;
  if ( sub_14007197C(a1 + 168, 6) )
    return (unsigned int)sub_1400718DC(v1);
  return v2;
}
