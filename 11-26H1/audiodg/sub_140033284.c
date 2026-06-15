/*
 * XREFs of sub_140033284 @ 0x140033284
 * Callers:
 *     sub_1400330E4 @ 0x1400330E4 (sub_1400330E4.c)
 *     sub_140055EB8 @ 0x140055EB8 (sub_140055EB8.c)
 * Callees:
 *     sub_1400331F8 @ 0x1400331F8 (sub_1400331F8.c)
 *     sub_1400499DC @ 0x1400499DC (sub_1400499DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140033284(__int64 a1)
{
  sub_1400499DC(a1, 144LL, 2LL, sub_140039010, sub_14000EDE0);
  sub_1400331F8((struct _RTL_CRITICAL_SECTION *)(a1 + 336));
  *(_WORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 288) = a1;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_BYTE *)(a1 + 376) = 0;
  return a1;
}
