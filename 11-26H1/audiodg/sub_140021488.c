/*
 * XREFs of sub_140021488 @ 0x140021488
 * Callers:
 *     sub_1400212F8 @ 0x1400212F8 (sub_1400212F8.c)
 * Callees:
 *     sub_140017D8C @ 0x140017D8C (sub_140017D8C.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_1400458C4 @ 0x1400458C4 (sub_1400458C4.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140021488(_QWORD *a1, _QWORD *a2)
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
    *v6 = off_1400BC238;
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
    *v6 = off_1400B97B0;
    v6[2] = 0LL;
    v10 = v6;
    v9 = 0LL;
    v7 = sub_1400458C4(v6, *a2);
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
