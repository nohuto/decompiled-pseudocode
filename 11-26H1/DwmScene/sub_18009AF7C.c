/*
 * XREFs of sub_18009AF7C @ 0x18009AF7C
 * Callers:
 *     sub_18009A710 @ 0x18009A710 (sub_18009A710.c)
 * Callees:
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_1800994C4 @ 0x1800994C4 (sub_1800994C4.c)
 *     sub_18009A430 @ 0x18009A430 (sub_18009A430.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall sub_18009AF7C(__int64 a1)
{
  __int64 v2; // rbx
  bool v3; // di

  v2 = a1 + 8;
  sub_180029674(a1 + 8);
  sub_18009A430(a1);
  v3 = 0;
  if ( !sub_1800994C4(a1 + 32) )
    v3 = !sub_1800994C4(a1 + 216);
  sub_1800297F4(v2);
  return v3;
}
