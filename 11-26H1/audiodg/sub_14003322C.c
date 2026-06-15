/*
 * XREFs of sub_14003322C @ 0x14003322C
 * Callers:
 *     sub_1400330E4 @ 0x1400330E4 (sub_1400330E4.c)
 *     sub_140055EB8 @ 0x140055EB8 (sub_140055EB8.c)
 * Callees:
 *     sub_1400331F8 @ 0x1400331F8 (sub_1400331F8.c)
 *     sub_1400499DC @ 0x1400499DC (sub_1400499DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14003322C(__int64 a1)
{
  sub_1400499DC(a1, 48LL, 2LL, sub_14003D6C0, sub_14003ED90);
  sub_1400331F8((struct _RTL_CRITICAL_SECTION *)(a1 + 120));
  *(_WORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 96) = a1;
  *(_QWORD *)(a1 + 104) = 0LL;
  return a1;
}
