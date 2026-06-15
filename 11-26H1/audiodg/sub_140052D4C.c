/*
 * XREFs of sub_140052D4C @ 0x140052D4C
 * Callers:
 *     sub_1400530B0 @ 0x1400530B0 (sub_1400530B0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_14004CEA8 @ 0x14004CEA8 (sub_14004CEA8.c)
 */

__int64 __fastcall sub_140052D4C(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx

  sub_140003238((__int64 *)(a1 + 96));
  v2 = *(_QWORD **)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      sub_140003238(v2 + 1);
      sub_1400453E4((__int64)v2, 0x10uLL);
      v2 = v3;
    }
    while ( v3 );
  }
  sub_14004CEA8((_QWORD *)(a1 + 80));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  return sub_140050010(a1);
}
