/*
 * XREFs of sub_140028090 @ 0x140028090
 * Callers:
 *     sub_140028020 @ 0x140028020 (sub_140028020.c)
 * Callees:
 *     sub_140058C44 @ 0x140058C44 (sub_140058C44.c)
 *     sub_14006EF48 @ 0x14006EF48 (sub_14006EF48.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140028090(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rax

  v2 = *a2;
  v4 = *a2 - 24;
  v5 = sub_1400B6010(*(_QWORD *)v4);
  if ( *(int *)(v4 + 16) >= 0 && v5 == *(_QWORD *)v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 16));
  }
  else
  {
    v7 = (_DWORD *)(v4 + 8);
    v8 = sub_1400B6010(v5);
    v4 = v8;
    if ( !v8 )
      sub_14006EF48();
    *(_DWORD *)(v8 + 8) = *v7;
    sub_140058C44(v8 + 24, 2LL * (*v7 + 1), v2, 2LL * (*v7 + 1));
  }
  *a1 = v4 + 24;
  return a1;
}
