/*
 * XREFs of sub_1400234EC @ 0x1400234EC
 * Callers:
 *     sub_140023334 @ 0x140023334 (sub_140023334.c)
 *     sub_140039264 @ 0x140039264 (sub_140039264.c)
 *     sub_1400AA1A8 @ 0x1400AA1A8 (sub_1400AA1A8.c)
 *     sub_1400AA844 @ 0x1400AA844 (sub_1400AA844.c)
 * Callees:
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 */

_QWORD *__fastcall sub_1400234EC(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  __int64 v5; // rcx

  v2 = *a2;
  v4 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *a1 = v2;
  v5 = a1[1];
  a1[1] = v4;
  if ( v5 )
    sub_140007588(v5);
  return a1;
}
