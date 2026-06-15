/*
 * XREFs of sub_140081F78 @ 0x140081F78
 * Callers:
 *     sub_140082A00 @ 0x140082A00 (sub_140082A00.c)
 *     sub_1400861E0 @ 0x1400861E0 (sub_1400861E0.c)
 * Callees:
 *     sub_14000DD04 @ 0x14000DD04 (sub_14000DD04.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

_QWORD *__fastcall sub_140081F78(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *result; // rax

  if ( !a2 )
    sub_14004639C(-2147467259);
  v3 = *(_QWORD *)(a2 + 8);
  while ( v3 )
  {
    v4 = v3;
    v3 = *(_QWORD *)(v3 + 8);
    result = sub_14000DD04(a1, (_QWORD *)(v4 + 16));
  }
  return result;
}
