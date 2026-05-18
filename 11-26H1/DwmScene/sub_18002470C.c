/*
 * XREFs of sub_18002470C @ 0x18002470C
 * Callers:
 *     sub_180021794 @ 0x180021794 (sub_180021794.c)
 *     sub_180022620 @ 0x180022620 (sub_180022620.c)
 *     sub_180022770 @ 0x180022770 (sub_180022770.c)
 *     sub_180022A00 @ 0x180022A00 (sub_180022A00.c)
 *     sub_180022D30 @ 0x180022D30 (sub_180022D30.c)
 *     sub_180022E80 @ 0x180022E80 (sub_180022E80.c)
 *     sub_180023110 @ 0x180023110 (sub_180023110.c)
 *     sub_180023360 @ 0x180023360 (sub_180023360.c)
 *     sub_180023490 @ 0x180023490 (sub_180023490.c)
 *     sub_180023700 @ 0x180023700 (sub_180023700.c)
 *     sub_180023850 @ 0x180023850 (sub_180023850.c)
 *     sub_180023BE0 @ 0x180023BE0 (sub_180023BE0.c)
 *     sub_180023D10 @ 0x180023D10 (sub_180023D10.c)
 *     sub_180023EB0 @ 0x180023EB0 (sub_180023EB0.c)
 *     sub_180024190 @ 0x180024190 (sub_180024190.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002470C(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = *a1;
  *a1 = a2;
  if ( result )
    return o__aligned_free(result);
  return result;
}
