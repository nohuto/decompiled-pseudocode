/*
 * XREFs of sub_1400546DC @ 0x1400546DC
 * Callers:
 *     sub_140021650 @ 0x140021650 (sub_140021650.c)
 *     sub_140021754 @ 0x140021754 (sub_140021754.c)
 * Callees:
 *     sub_1400209D0 @ 0x1400209D0 (sub_1400209D0.c)
 *     sub_140026BBC @ 0x140026BBC (sub_140026BBC.c)
 */

_QWORD *__fastcall sub_1400546DC(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // r11

  v5 = a3[2];
  v7 = (__int64)a3;
  if ( (unsigned __int64)a3[3] > 7 )
    v7 = *a3;
  v8 = sub_140026BBC((__int64)a1, v7, 2 * v5);
  *a2 = sub_1400209D0(a1, v9, v8);
  return a2;
}
