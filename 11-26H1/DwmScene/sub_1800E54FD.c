/*
 * XREFs of sub_1800E54FD @ 0x1800E54FD
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_1800D612C @ 0x1800D612C (sub_1800D612C.c)
 */

__int64 __fastcall sub_1800E54FD(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  sub_18001DCFC(&qword_1801BD648, 3);
  *(_OWORD *)(a2 + 64) = 0LL;
  sub_1800D612C(*(_QWORD *)(a2 + 240), a2 + 64);
  v3 = *(_QWORD *)(a2 + 72);
  if ( v3 )
    sub_180010EC8(v3);
  return 0LL;
}
