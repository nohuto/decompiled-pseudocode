/*
 * XREFs of sub_140050FFC @ 0x140050FFC
 * Callers:
 *     sub_1400516A0 @ 0x1400516A0 (sub_1400516A0.c)
 * Callees:
 *     sub_140017D8C @ 0x140017D8C (sub_140017D8C.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400517C0 @ 0x1400517C0 (sub_1400517C0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_140050FFC(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = sub_140049338(24LL, (__int64)&unk_1400C75FC);
  v5 = (_QWORD *)v4;
  v8 = v4;
  if ( v4 )
  {
    sub_140017D8C(v4);
    *v5 = off_1400BB8B8;
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
    *v5 = off_1400BB870;
    v5[2] = 0LL;
    v9 = v5;
    v8 = 0LL;
    v6 = sub_1400517C0(v5, *a2);
    sub_1400B6010(v5);
    if ( v6 >= 0 )
    {
      *a1 = v5;
      sub_1400B6010(v5);
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147024882;
  }
  sub_1400454AC(&v8);
  return (unsigned int)v6;
}
