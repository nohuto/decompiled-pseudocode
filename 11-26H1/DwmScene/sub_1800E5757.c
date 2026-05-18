/*
 * XREFs of sub_1800E5757 @ 0x1800E5757
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_1800D616C @ 0x1800D616C (sub_1800D616C.c)
 */

__int64 __fastcall sub_1800E5757(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  sub_18001DCFC(&qword_1801BD648, 3);
  *(_OWORD *)(a2 + 80) = 0LL;
  *(_OWORD *)(a2 + 120) = 0LL;
  sub_1800D616C(*(_QWORD *)(a2 + 384), a2 + 120, a2 + 80);
  v3 = *(_QWORD *)(a2 + 128);
  if ( v3 )
    sub_180010EC8(v3);
  v4 = *(_QWORD *)(a2 + 88);
  if ( v4 )
    sub_180010EC8(v4);
  return 0LL;
}
