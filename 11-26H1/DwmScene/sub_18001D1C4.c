/*
 * XREFs of sub_18001D1C4 @ 0x18001D1C4
 * Callers:
 *     sub_18001D848 @ 0x18001D848 (sub_18001D848.c)
 *     sub_180098C90 @ 0x180098C90 (sub_180098C90.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18001D1C4(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v2; // rdx
  _QWORD *result; // rax

  v2 = (__int64)((unsigned __int128)(*a2 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 18;
  result = a1;
  *a1 = (v2 >> 63) + v2;
  return result;
}
