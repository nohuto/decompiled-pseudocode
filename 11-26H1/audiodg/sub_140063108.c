/*
 * XREFs of sub_140063108 @ 0x140063108
 * Callers:
 *     sub_1400B253C @ 0x1400B253C (sub_1400B253C.c)
 * Callees:
 *     sub_1400631E8 @ 0x1400631E8 (sub_1400631E8.c)
 */

__int64 __fastcall sub_140063108(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = sub_1400631E8(v2);
  *a1 = 0LL;
  return result;
}
