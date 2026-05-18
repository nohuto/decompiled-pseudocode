/*
 * XREFs of sub_180060C84 @ 0x180060C84
 * Callers:
 *     sub_180060338 @ 0x180060338 (sub_180060338.c)
 *     sub_180060454 @ 0x180060454 (sub_180060454.c)
 *     sub_1800DC409 @ 0x1800DC409 (sub_1800DC409.c)
 * Callees:
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 */

__int64 __fastcall sub_180060C84(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180014244(v2 + 16);
  return sub_1800313C4(a1);
}
