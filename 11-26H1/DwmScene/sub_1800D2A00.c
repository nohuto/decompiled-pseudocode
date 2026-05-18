/*
 * XREFs of sub_1800D2A00 @ 0x1800D2A00
 * Callers:
 *     sub_1800D1CE8 @ 0x1800D1CE8 (sub_1800D1CE8.c)
 *     sub_1800E5084 @ 0x1800E5084 (sub_1800E5084.c)
 * Callees:
 *     sub_1800D1EA0 @ 0x1800D1EA0 (sub_1800D1EA0.c)
 */

_QWORD *__fastcall sub_1800D2A00(_QWORD *a1)
{
  _QWORD *result; // rax
  char *v2; // rbx
  char *v3; // rdx

  if ( a1[1] )
  {
    *(_QWORD *)(a1[3] + 8LL) = 0LL;
    result = (_QWORD *)a1[2];
    *result = 0LL;
    v2 = (char *)a1[3];
    while ( v2 )
    {
      v3 = v2;
      v2 = *(char **)v2;
      result = (_QWORD *)sub_1800D1EA0((__int64)a1, v3);
    }
  }
  return result;
}
