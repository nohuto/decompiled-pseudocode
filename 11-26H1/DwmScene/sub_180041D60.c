/*
 * XREFs of sub_180041D60 @ 0x180041D60
 * Callers:
 *     sub_18003F8DC @ 0x18003F8DC (sub_18003F8DC.c)
 *     sub_180040098 @ 0x180040098 (sub_180040098.c)
 *     sub_180040BE4 @ 0x180040BE4 (sub_180040BE4.c)
 * Callees:
 *     sub_18001F898 @ 0x18001F898 (sub_18001F898.c)
 *     sub_18003E8AC @ 0x18003E8AC (sub_18003E8AC.c)
 */

_QWORD *__fastcall sub_180041D60(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r11
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = sub_18001F898((__int64)a1, a3, 8uLL);
  v7 = sub_18003E8AC(a1, v9, v6, v5)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
