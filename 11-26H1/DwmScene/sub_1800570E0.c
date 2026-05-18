/*
 * XREFs of sub_1800570E0 @ 0x1800570E0
 * Callers:
 *     sub_1800575F0 @ 0x1800575F0 (sub_1800575F0.c)
 *     sub_180086468 @ 0x180086468 (sub_180086468.c)
 *     sub_18008A4E4 @ 0x18008A4E4 (sub_18008A4E4.c)
 *     sub_18008F860 @ 0x18008F860 (sub_18008F860.c)
 *     sub_1800DDA8C @ 0x1800DDA8C (sub_1800DDA8C.c)
 *     sub_1800DDE87 @ 0x1800DDE87 (sub_1800DDE87.c)
 *     sub_1800DDFC5 @ 0x1800DDFC5 (sub_1800DDFC5.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 *     sub_18001F8FC @ 0x18001F8FC (sub_18001F8FC.c)
 *     sub_180027AF0 @ 0x180027AF0 (sub_180027AF0.c)
 *     sub_180056234 @ 0x180056234 (sub_180056234.c)
 *     sub_180056FAC @ 0x180056FAC (sub_180056FAC.c)
 */

void **__fastcall sub_1800570E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Camera::`vftable';
  sub_180013494(a1 + 1704, a2);
  v3 = *(_QWORD *)(a1 + 1688);
  if ( v3 )
    sub_180010EC8(v3);
  v4 = *(_QWORD *)(a1 + 1672);
  if ( v4 )
    sub_180010EC8(v4);
  v5 = *(_QWORD *)(a1 + 1656);
  if ( v5 )
    sub_180010EC8(v5);
  v6 = *(_QWORD *)(a1 + 1640);
  if ( v6 )
    sub_180010EC8(v6);
  sub_180056FAC((void **)(a1 + 1616));
  sub_180027AF0((void **)(a1 + 448));
  sub_18001F8FC(a1 + 416);
  if ( *(_BYTE *)(a1 + 388) )
    *(_BYTE *)(a1 + 388) = 0;
  sub_1800129D0(a1 + 248);
  sub_1800129D0(a1 + 216);
  sub_1800129D0(a1 + 184);
  v7 = *(_QWORD *)(a1 + 160);
  if ( v7 )
    sub_180010EC8(v7);
  v8 = *(_QWORD *)(a1 + 144);
  if ( v8 )
    sub_180010EC8(v8);
  v9 = *(_QWORD *)(a1 + 104);
  if ( v9 )
  {
    sub_180056234(v9, *(_QWORD *)(a1 + 112));
    sub_18000E26C(*(void **)(a1 + 104), 16 * ((__int64)(*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 104)) >> 4));
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  return sub_180041EB4((_QWORD *)a1);
}
