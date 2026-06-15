/*
 * XREFs of sub_140054680 @ 0x140054680
 * Callers:
 *     sub_140017DA0 @ 0x140017DA0 (sub_140017DA0.c)
 *     sub_1400228C0 @ 0x1400228C0 (sub_1400228C0.c)
 *     sub_14002C0D0 @ 0x14002C0D0 (sub_14002C0D0.c)
 *     sub_14002FA30 @ 0x14002FA30 (sub_14002FA30.c)
 * Callees:
 *     sub_140026BBC @ 0x140026BBC (sub_140026BBC.c)
 *     sub_1400318E0 @ 0x1400318E0 (sub_1400318E0.c)
 */

_QWORD *__fastcall sub_140054680(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r11
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = sub_140026BBC((__int64)a1, a3, 8uLL);
  v7 = sub_1400318E0(a1, v9, v6, v5)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
