/*
 * XREFs of sub_14000EDA8 @ 0x14000EDA8
 * Callers:
 *     sub_1400B269C @ 0x1400B269C (sub_1400B269C.c)
 * Callees:
 *     sub_14000DC7C @ 0x14000DC7C (sub_14000DC7C.c)
 */

__int64 __fastcall sub_14000EDA8(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = sub_14000DC7C(v2);
  *a1 = 0LL;
  return result;
}
