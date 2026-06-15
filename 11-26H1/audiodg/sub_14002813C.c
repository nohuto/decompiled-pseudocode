/*
 * XREFs of sub_14002813C @ 0x14002813C
 * Callers:
 *     sub_140028240 @ 0x140028240 (sub_140028240.c)
 *     sub_14003B610 @ 0x14003B610 (sub_14003B610.c)
 *     sub_14003D900 @ 0x14003D900 (sub_14003D900.c)
 *     sub_140040634 @ 0x140040634 (sub_140040634.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_1400574A0 @ 0x1400574A0 (sub_1400574A0.c)
 *     sub_140062DC0 @ 0x140062DC0 (sub_140062DC0.c)
 *     sub_140065450 @ 0x140065450 (sub_140065450.c)
 *     sub_140069B3C @ 0x140069B3C (sub_140069B3C.c)
 *     sub_140072BD0 @ 0x140072BD0 (sub_140072BD0.c)
 *     sub_140072EF0 @ 0x140072EF0 (sub_140072EF0.c)
 *     sub_1400734AC @ 0x1400734AC (sub_1400734AC.c)
 *     sub_140074720 @ 0x140074720 (sub_140074720.c)
 *     sub_1400A87A0 @ 0x1400A87A0 (sub_1400A87A0.c)
 *     sub_1400A89D0 @ 0x1400A89D0 (sub_1400A89D0.c)
 *     sub_1400ABE60 @ 0x1400ABE60 (sub_1400ABE60.c)
 *     sub_1400ABF90 @ 0x1400ABF90 (sub_1400ABF90.c)
 *     sub_1400AC220 @ 0x1400AC220 (sub_1400AC220.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14002813C(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
