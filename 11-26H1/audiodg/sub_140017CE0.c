/*
 * XREFs of sub_140017CE0 @ 0x140017CE0
 * Callers:
 *     sub_140017A94 @ 0x140017A94 (sub_140017A94.c)
 * Callees:
 *     sub_140017D8C @ 0x140017D8C (sub_140017D8C.c)
 *     sub_14001DBF0 @ 0x14001DBF0 (sub_14001DBF0.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_140017CE0(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi

  *a1 = 0LL;
  v4 = sub_140049338(32LL, &unk_1400C75FC);
  v5 = v4;
  if ( v4 )
  {
    v6 = *a2;
    sub_140017D8C(v4);
    *(_QWORD *)v5 = off_1400B86D8;
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
    *(_DWORD *)(v5 + 16) = 0x3FFFFFFF;
    *(_QWORD *)v5 = off_1400B86B0;
    *(_QWORD *)(v5 + 24) = v6;
    *(_DWORD *)(v5 + 12) = 2;
    if ( *a1 )
      sub_14001DBF0(*a1);
    *a1 = v5;
  }
  return a1;
}
