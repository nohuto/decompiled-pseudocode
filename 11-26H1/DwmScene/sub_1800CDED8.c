/*
 * XREFs of sub_1800CDED8 @ 0x1800CDED8
 * Callers:
 *     sub_1800CDF80 @ 0x1800CDF80 (sub_1800CDF80.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180027AF0 @ 0x180027AF0 (sub_180027AF0.c)
 */

__int64 __fastcall sub_1800CDED8(__int64 a1)
{
  __int64 v2; // rcx

  sub_180027AF0((void **)(a1 + 552));
  v2 = *(_QWORD *)(a1 + 544);
  if ( v2 )
    sub_180010EC8(v2);
  sub_18000F938((__int64 *)(a1 + 528));
  sub_18000F938((__int64 *)(a1 + 520));
  sub_18000F938((__int64 *)(a1 + 512));
  return sub_18002B48C(a1);
}
