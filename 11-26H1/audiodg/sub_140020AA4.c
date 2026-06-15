/*
 * XREFs of sub_140020AA4 @ 0x140020AA4
 * Callers:
 *     sub_140021D2C @ 0x140021D2C (sub_140021D2C.c)
 * Callees:
 *     sub_140017D8C @ 0x140017D8C (sub_140017D8C.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_1400457B8 @ 0x1400457B8 (sub_1400457B8.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_140020AA4(_QWORD *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  _QWORD *v6; // rbx
  int v7; // esi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+50h] [rbp+18h]

  v4 = 0;
  *a1 = 0LL;
  v5 = sub_140049338(24LL, &unk_1400C75FC);
  v6 = (_QWORD *)v5;
  v9 = v5;
  if ( v5 )
  {
    sub_140017D8C(v5);
    *v6 = off_1400BB790;
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
    *v6 = off_1400B9788;
    v6[2] = 0LL;
    v10 = v6;
    v9 = 0LL;
    v7 = sub_1400457B8(v6, *a2);
    if ( v7 < 0 )
    {
      sub_1400B6010(v6);
      sub_1400454AC(&v9);
      return (unsigned int)v7;
    }
    sub_1400B6010(v6);
    *a1 = v6;
    sub_1400B6010(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
