/*
 * XREFs of sub_1800248CC @ 0x1800248CC
 * Callers:
 *     sub_180024998 @ 0x180024998 (sub_180024998.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800119A4 @ 0x1800119A4 (sub_1800119A4.c)
 *     sub_1800119CC @ 0x1800119CC (sub_1800119CC.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180025320 @ 0x180025320 (sub_180025320.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180032FE0 @ 0x180032FE0 (sub_180032FE0.c)
 */

_QWORD *__fastcall sub_1800248CC(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_180025320(a2);
  sub_180029C50(a1 + 101, v9);
  v4 = a1 + 108;
  v8 = 0LL;
  v5 = a2[1];
  if ( v5 )
  {
    *(_QWORD *)&v8 = *a2;
    *((_QWORD *)&v8 + 1) = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
  }
  v6 = a1[109];
  if ( v6 == a1[110] )
    sub_1800119CC(v4, v6, &v8);
  else
    sub_1800119A4((__int64)v4, &v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010F00(*((volatile signed __int32 **)&v8 + 1));
  sub_180011E54((__int64)v9);
  sub_180032FE0(a1, *a2, 1LL);
  return a2;
}
