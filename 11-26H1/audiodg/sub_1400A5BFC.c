/*
 * XREFs of sub_1400A5BFC @ 0x1400A5BFC
 * Callers:
 *     sub_1400A5CC0 @ 0x1400A5CC0 (sub_1400A5CC0.c)
 *     sub_1400A6544 @ 0x1400A6544 (sub_1400A6544.c)
 *     sub_1400A93A8 @ 0x1400A93A8 (sub_1400A93A8.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1400A5BFC(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
