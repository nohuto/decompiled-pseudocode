/*
 * XREFs of sub_14008B894 @ 0x14008B894
 * Callers:
 *     sub_14008BA50 @ 0x14008BA50 (sub_14008BA50.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_14008B52C @ 0x14008B52C (sub_14008B52C.c)
 */

__int64 __fastcall sub_14008B894(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rdi
  __int64 *v7; // rsi

  v2 = *(_QWORD *)(a1 + 160);
  if ( v2 )
  {
    sub_14008B52C(v2, *(_QWORD *)(a1 + 168));
    sub_1400453E4(*(_QWORD *)(a1 + 160), (*(_QWORD *)(a1 + 176) - *(_QWORD *)(a1 + 160)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 160) = 0LL;
    *(_QWORD *)(a1 + 168) = 0LL;
    *(_QWORD *)(a1 + 176) = 0LL;
  }
  sub_140056130((__int64 *)(a1 + 144));
  sub_140003238((__int64 *)(a1 + 136));
  v6 = *(__int64 **)(a1 + 112);
  if ( v6 )
  {
    v7 = *(__int64 **)(a1 + 120);
    while ( v6 != v7 )
      sub_140003238(v6++);
    sub_1400453E4(*(_QWORD *)(a1 + 112), (*(_QWORD *)(a1 + 128) - *(_QWORD *)(a1 + 112)) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  *(_DWORD *)(a1 + 84) = -1073741823;
  return sub_140089834((_QWORD *)a1, v3, v4, v5);
}
