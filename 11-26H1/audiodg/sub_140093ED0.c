/*
 * XREFs of sub_140093ED0 @ 0x140093ED0
 * Callers:
 *     sub_140093730 @ 0x140093730 (sub_140093730.c)
 *     sub_1400939D0 @ 0x1400939D0 (sub_1400939D0.c)
 * Callees:
 *     sub_140026BBC @ 0x140026BBC (sub_140026BBC.c)
 *     sub_1400930A0 @ 0x1400930A0 (sub_1400930A0.c)
 */

_QWORD *__fastcall sub_140093ED0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r11
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = sub_140026BBC((__int64)a1, a3, 8uLL);
  v7 = sub_1400930A0(a1, v9, v6, v5)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
