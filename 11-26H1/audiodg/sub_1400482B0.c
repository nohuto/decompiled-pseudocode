/*
 * XREFs of sub_1400482B0 @ 0x1400482B0
 * Callers:
 *     sub_1400B09CE @ 0x1400B09CE (sub_1400B09CE.c)
 *     sub_1400B09F2 @ 0x1400B09F2 (sub_1400B09F2.c)
 *     sub_1400B0A16 @ 0x1400B0A16 (sub_1400B0A16.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

__int64 __fastcall sub_1400482B0(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = sub_1400453E4(v2, a1[2] - v2);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
