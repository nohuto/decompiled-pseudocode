/*
 * XREFs of sub_14013981C @ 0x14013981C
 * Callers:
 *     sub_1401354B4 @ 0x1401354B4 (sub_1401354B4.c)
 *     sub_140135B20 @ 0x140135B20 (sub_140135B20.c)
 *     sub_140135C8C @ 0x140135C8C (sub_140135C8C.c)
 * Callees:
 *     sub_1401383F0 @ 0x1401383F0 (sub_1401383F0.c)
 */

__int64 __fastcall sub_14013981C(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  if ( (unsigned int)*a4 <= 0x20 )
    return sub_1401383F0(a1, a2, a3, 3u, (__int64)(a4 + 1), *a4, 15);
  else
    return 3221225485LL;
}
