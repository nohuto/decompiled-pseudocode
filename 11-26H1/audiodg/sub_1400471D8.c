/*
 * XREFs of sub_1400471D8 @ 0x1400471D8
 * Callers:
 *     sub_1400409B0 @ 0x1400409B0 (sub_1400409B0.c)
 *     sub_140041CD8 @ 0x140041CD8 (sub_140041CD8.c)
 *     sub_140045560 @ 0x140045560 (sub_140045560.c)
 *     sub_1400582D0 @ 0x1400582D0 (sub_1400582D0.c)
 *     sub_14005D708 @ 0x14005D708 (sub_14005D708.c)
 *     sub_14007C690 @ 0x14007C690 (sub_14007C690.c)
 *     sub_14007CA54 @ 0x14007CA54 (sub_14007CA54.c)
 * Callees:
 *     sub_14001FC40 @ 0x14001FC40 (sub_14001FC40.c)
 *     sub_1400257E4 @ 0x1400257E4 (sub_1400257E4.c)
 *     sub_140056930 @ 0x140056930 (sub_140056930.c)
 */

void __fastcall sub_1400471D8(struct _TP_TIMER **a1, struct _TP_TIMER *a2)
{
  struct _TP_TIMER *v2; // rdi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    sub_1400257E4((__int64)&v5);
    sub_140056930(v2);
    sub_14001FC40((__int64)&v5);
  }
  *a1 = a2;
}
