/*
 * XREFs of sub_1800D1E68 @ 0x1800D1E68
 * Callers:
 *     sub_1800D2974 @ 0x1800D2974 (sub_1800D2974.c)
 *     sub_1800D2AE4 @ 0x1800D2AE4 (sub_1800D2AE4.c)
 *     sub_1800D2B84 @ 0x1800D2B84 (sub_1800D2B84.c)
 * Callees:
 *     sub_1800D1EA0 @ 0x1800D1EA0 (sub_1800D1EA0.c)
 */

_QWORD *__fastcall sub_1800D1E68(__int64 a1, __int64 a2)
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
      result = (_QWORD *)sub_1800D1EA0(a1, v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
