/*
 * XREFs of sub_140054730 @ 0x140054730
 * Callers:
 *     sub_1400204AC @ 0x1400204AC (sub_1400204AC.c)
 * Callees:
 *     sub_140026BBC @ 0x140026BBC (sub_140026BBC.c)
 *     sub_140046CB0 @ 0x140046CB0 (sub_140046CB0.c)
 */

_QWORD *__fastcall sub_140054730(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // r11
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a3[2];
  v7 = (__int64)a3;
  if ( (unsigned __int64)a3[3] > 7 )
    v7 = *a3;
  v8 = sub_140026BBC((__int64)a1, v7, 2 * v5);
  v10 = sub_140046CB0(a1, v12, v9, v8)[1];
  if ( !v10 )
    v10 = a1[1];
  *a2 = v10;
  return a2;
}
