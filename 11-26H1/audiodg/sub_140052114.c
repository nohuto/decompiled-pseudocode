/*
 * XREFs of sub_140052114 @ 0x140052114
 * Callers:
 *     sub_1400529A4 @ 0x1400529A4 (sub_1400529A4.c)
 *     sub_140052B3C @ 0x140052B3C (sub_140052B3C.c)
 * Callees:
 *     sub_14002F254 @ 0x14002F254 (sub_14002F254.c)
 */

_QWORD *__fastcall sub_140052114(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)sub_14002F254(a1, (__int64)v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
