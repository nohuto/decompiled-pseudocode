/*
 * XREFs of sub_140027A34 @ 0x140027A34
 * Callers:
 *     sub_140027D7C @ 0x140027D7C (sub_140027D7C.c)
 * Callees:
 *     sub_140027CA8 @ 0x140027CA8 (sub_140027CA8.c)
 *     sub_140058C44 @ 0x140058C44 (sub_140058C44.c)
 *     sub_14006EF48 @ 0x14006EF48 (sub_14006EF48.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140027A34(__int64 *a1, int a2)
{
  __int64 v2; // rbp
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 result; // rax

  v2 = *a1;
  v5 = *(_DWORD *)(*a1 - 16);
  v6 = sub_1400B6010(*(_QWORD *)(*a1 - 24));
  v7 = sub_1400B6010(v6);
  if ( !v7 )
    sub_14006EF48();
  if ( v5 < a2 )
    a2 = v5;
  sub_140058C44(v7 + 24, 2LL * (a2 + 1), v2, 2LL * (a2 + 1));
  *(_DWORD *)(v7 + 8) = v5;
  result = sub_140027CA8(v2 - 24);
  *a1 = v7 + 24;
  return result;
}
